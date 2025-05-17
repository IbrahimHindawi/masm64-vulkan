import re
import sys

# Mapping from C types to (size, alignment, MASM type)
TYPE_INFO = {
    "char": (1, 1, "BYTE"),
    "int8_t": (1, 1, "BYTE"),
    "uint8_t": (1, 1, "BYTE"),
    "int16_t": (2, 2, "WORD"),
    "uint16_t": (2, 2, "WORD"),
    "int32_t": (4, 4, "DWORD"),
    "uint32_t": (4, 4, "DWORD"),
    "VkBool32": (4, 4, "DWORD"),
    "int64_t": (8, 8, "QWORD"),
    "uint64_t": (8, 8, "QWORD"),
    "float": (4, 4, "DWORD"),
    "double": (8, 8, "QWORD"),
    "size_t": (8, 8, "QWORD"),
    "void*": (8, 8, "QWORD"),
    "char*": (8, 8, "QWORD"),
    "const char*": (8, 8, "QWORD"),
    "const void*": (8, 8, "QWORD"),
}

# MASM reserved words
MASM_RESERVED = {
    "offset", "type", "size", "width", "name", "mask", "byte", "word", "dword", "tbyte", "ptr"
}

def fix_reserved(name):
    return f"m_{name}" if name in MASM_RESERVED else name

def resolve_type(c_type):
    t = c_type.strip().replace("const", "").strip()
    if '*' in t:
        return 8, 8, "QWORD"
    if t in TYPE_INFO:
        return TYPE_INFO[t]
    return 4, 4, "DWORD"  # default for unknown types

def parse_structs(header_text):
    struct_re = re.compile(r"typedef\s+struct\s+(\w+)?\s*{(.*?)}\s*(\w+);", re.DOTALL)
    field_re = re.compile(r"(.+?)\s+(\w+)(\[[0-9]+\])?;")

    results = {}

    for match in struct_re.finditer(header_text):
        struct_name = match.group(3)
        body = match.group(2)
        fields = []
        offset = 0
        max_align = 1

        for line in body.strip().splitlines():
            line = line.strip()
            if not line or line.startswith("//"):
                continue

            m = field_re.match(line)
            if not m:
                continue

            c_type = m.group(1).strip()
            var_name = fix_reserved(m.group(2))
            array_size = int(m.group(3)[1:-1]) if m.group(3) else 1

            size, align, masm_type = resolve_type(c_type)
            total_size = size * array_size
            max_align = max(max_align, align)

            if offset % align != 0:
                pad = align - (offset % align)
                fields.append(("__pad", f"BYTE {pad} dup(?)"))
                offset += pad

            if array_size > 1 and masm_type != "QWORD":
                decl = f"{var_name} {masm_type} {array_size} dup(?)"
            else:
                decl = f"{var_name} {masm_type} ?"

            fields.append((var_name, decl))
            offset += total_size

        if offset % max_align != 0:
            pad = max_align - (offset % max_align)
            fields.append(("__pad_end", f"BYTE {pad} dup(?)"))

        results[struct_name] = fields

    return results

def generate_masm(structs):
    output = []
    for name, fields in structs.items():
        output.append(f"{name} STRUCT")
        for _, decl in fields:
            output.append(f"    {decl}")
        output.append(f"{name} ENDS\n")
    return "\n".join(output)

def main(header_path):
    with open(header_path, 'r', encoding='utf-8', errors='ignore') as f:
        text = f.read()

    structs = parse_structs(text)
    masm_output = generate_masm(structs)

    with open('../source/vkstructs.asm', 'w') as output:
        output.write(masm_output)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python vk_structs_to_masm64.py vulkan_core.h")
    else:
        main(sys.argv[1])
