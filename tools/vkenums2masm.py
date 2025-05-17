import re
import sys

def parse_enums(header_text):
    # Capture enums (including typedef'd and anonymous ones)
    enum_blocks = re.findall(r"typedef\s+enum\s+(\w*)\s*{(.*?)}\s*(\w+)?;", header_text, re.DOTALL)
    
    enums = {}
    for enum_name, body, alias in enum_blocks:
        current_value = 0
        lines = body.splitlines()
        for line in lines:
            line = line.strip()
            if not line or line.startswith("//"):
                continue

            parts = line.split("=")
            if len(parts) == 2:
                name = parts[0].strip().rstrip(',')
                value = parts[1].strip().rstrip(',')
                # Try to evaluate constant expressions (e.g., macros)
                try:
                    current_value = int(eval(value, {}, {}))
                except:
                    current_value = value  # leave as is (e.g., reference to another constant)
            else:
                name = line.rstrip(',')
                value = current_value

            enums[name] = value
            if isinstance(current_value, int):
                current_value += 1

    return enums

def generate_masm_equ(enums):
    lines = []
    for name, value in enums.items():
        lines.append(f"{name} equ {value}")
    return "\n".join(lines)

def main(header_path):
    with open(header_path, 'r', encoding='utf-8', errors='ignore') as f:
        header_text = f.read()

    enums = parse_enums(header_text)
    masm_output = generate_masm_equ(enums)
    # print(masm_output)
    output = open('../source/vkenums.asm', 'w')
    output.write(masm_output)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python vk_enums_to_masm64.py vulkan_core.h")
    else:
        main(sys.argv[1])
