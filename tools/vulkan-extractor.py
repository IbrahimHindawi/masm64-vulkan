#---------------------------------------------------------------------------------------------------
# usage:
# python vulkan-extractor.py vk_wrapper.c > vulkan_core.asm
# description:
# using libclang, parse vulkan headers and output masm64 files
#---------------------------------------------------------------------------------------------------
from clang.cindex import Index, CursorKind, Config
from clang.cindex import TypeKind
import os
import sys
import re
import math

typedict = {
    "int8_t":"sbyte",
    "int16_t":"sword",
    "int32_t":"sdword",
    "int64_t":"sqword",
    "uint8_t":"byte",
    "uint16_t":"word",
    "uint32_t":"dword",
    "uint64_t":"qword",
    "char":"byte",
    "float":"real4",
    "double":"real8",
    "size_t":"qword",
}

def extract_array_type_and_size(input_string):
    # Match type and all [size] parts (whitespace ignored)
    match = re.fullmatch(r'\s*(\w+)\s*((?:\[\s*\d+\s*\])+)',''.join(input_string.split()))
    if not match:
        raise ValueError(f"Invalid array declaration: '{input_string}'")
    
    type_name = match.group(1)
    sizes_str = match.group(2)

    # Extract and multiply all dimensions
    sizes = list(map(int, re.findall(r'\[(\d+)\]', sizes_str)))
    total_size = math.prod(sizes)

    return (type_name, total_size)

def extract_defines(header_path):
    # print("\n// Defines")
    with open(header_path, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            match = re.match(r'#define\s+(\w+)\s+(.*)', line)
            if match:
                name, value = match.groups()
                print(f"{name} equ {value.strip()}")

# Optional: Set path to libclang manually
Config.set_library_path(r"C:\Program Files\LLVM\bin")

def align_to(offset, align):
    return ((offset + align - 1) // align) * align

def extract_structs(cursor):
    if cursor.kind == CursorKind.STRUCT_DECL and cursor.is_definition():
        print(f"\n{cursor.spelling} struct")
        offset = 0
        for field in cursor.get_children():
            if field.kind == CursorKind.FIELD_DECL:
                # for item in dir(field):
                #     print(item)
                # print(type(field))
                # print(type(field.type))
                # for item in dir(field.type):
                #     print(item)
                # exit()
                field_offset = cursor.type.get_offset(field.spelling) // 8
                if field_offset > offset:
                    padding = field_offset - offset
                    # print(f"    padding ({padding} bytes)")
                    print(f"    byte {padding} dup(?)")
                    offset += padding
                field_type = field.type.spelling
                print(';   {}'.format(field.type.kind))
                if field.type.kind == TypeKind.POINTER:
                    field_type = 'qword ?'
                elif field.type.kind == TypeKind.FLOAT:
                    field_type = 'real4 ?'
                elif field.type.kind == TypeKind.INT:
                    field_type = 'sdword ?'
                elif field.type.kind == TypeKind.ELABORATED:
                    field_type = typedict.get(field.type.spelling)
                    if field_type != None:
                        field_type += ' ?' 
                    else:
                        if field.type.spelling in (
                        'VkStructureType', 
                        'VkAccessFlags', 
                        'VkImageCreateFlags',
                        'VkFormatFeatureFlags'):
                            field_type = 'dword'
                            field_type += ' ?' 
                        else:
                            field_type = field.type.spelling
                            field_type += ' <>'

                elif field.type.kind == TypeKind.CONSTANTARRAY:
                    field_type = extract_array_type_and_size(field.type.spelling)
                    field_type_convert = typedict.get(field_type[0])
                    if field_type_convert != None:
                        field_type = '{} {} dup(?)'.format(field_type_convert, field_type[1])
                    else:
                        field_type = '{} {} dup(<>)'.format(field_type[0], field_type[1])

                field_size = field.type.get_size()
                field_align = field.type.get_align()
                print(f";   name = {field.spelling}, type = {field.type.spelling}, offset = {field_offset}, size = {field_size}")

                # if field_size == 1:
                #     print(f"    {field.spelling} byte ?")
                # elif field_size == 2:
                #     print(f"    {field.spelling} word ?")
                # elif field_size == 4:
                #     print(f"    {field.spelling} dword ?")
                # elif field_size == 8:
                #     print(f"    {field.spelling} qword ?")
                # else:
                #     print(f";   name = {field.spelling}, type = ({field_type}), offset = {field_offset}, size = {field_size}")

                field_spelling = field.spelling
                if field_spelling == 'sType':
                    field_spelling = '_sType'
                elif field_spelling == 'width':
                    field_spelling = '_width'
                elif field_spelling == 'offset':
                    field_spelling = '_offset'
                elif field_spelling == 'buffer':
                    field_spelling = '_buffer'
                elif field_spelling == 'size':
                    field_spelling = '_size'
                elif field_spelling == 'type':
                    field_spelling = '__type'
                elif field_spelling == 'mask':
                    field_spelling = '_mask'
                print(f"    {field_spelling} {field_type}")
                # print(f"    {field.spelling} ({field_type}) ; size: {field_size}")
                offset += field_size

        struct_size = cursor.type.get_size()
        print(f"{cursor.spelling} ends")
        # print(f" size: {struct_size}")

def extract_enums(cursor):
    if cursor.kind == CursorKind.ENUM_DECL:
        print(f"\n; enum {cursor.spelling} {{")
        for enum in cursor.get_children():
            if enum.kind == CursorKind.ENUM_CONSTANT_DECL:
                print(f"    {enum.spelling} equ {enum.enum_value}")
        print("; }")

def extract_functions(cursor):
    if cursor.kind == CursorKind.FUNCTION_DECL:
        ret = cursor.result_type.spelling
        name = cursor.spelling
        params = []
        for arg in cursor.get_arguments():
            params.append(f"{arg.type.spelling} {arg.spelling}")
        print(f"\n; {ret} {name}({', '.join(params)})")
        print(f"{name} qword ?")

def extract_typedefs(cursor):
    if cursor.kind == CursorKind.TYPEDEF_DECL:
        print(f"\n; TYPEDEF {cursor.spelling} = {cursor.underlying_typedef_type.spelling}, {cursor.underlying_typedef_type.kind}")
        if cursor.underlying_typedef_type.kind == TypeKind.ELABORATED:
            field_type = typedict.get(cursor.underlying_typedef_type.spelling)
            if field_type != None:
                print(f"{cursor.spelling} typedef {field_type}")
            elif "enum" in cursor.underlying_typedef_type.spelling:
                print(f"{cursor.spelling} typedef dword")
            elif "struct" in cursor.underlying_typedef_type.spelling:
                print("; remove struct typedef")
            elif "union" in cursor.underlying_typedef_type.spelling:
                print("; remove union typedef")
            elif "VkFlags" in cursor.underlying_typedef_type.spelling:
                print(f"{cursor.spelling} typedef dword")
            else:
                pass
                # print(f"{cursor.spelling} typedef UNKNOWN")
        elif cursor.underlying_typedef_type.kind == TypeKind.POINTER:
                print(f"{cursor.spelling} typedef qword")

def visit(cursor):
    if cursor.location.file and not cursor.location.file.name.endswith("vulkan_win32.h"):
    # if cursor.location.file and not cursor.location.file.name.endswith("vulkan_core.h"):
        return

    extract_structs(cursor)
    extract_enums(cursor)
    extract_functions(cursor)
    extract_typedefs(cursor)

    for child in cursor.get_children():
        visit(child)

def main():
    if len(sys.argv) != 2:
        print("Usage: python vulkan-extractor.py <path_to_vulkan_core.h>")
        return

    header_path = sys.argv[1]

    # extract_defines(header_path)
    # extract_defines(r'C:\VulkanSDK\1.3.283.0\Include\vulkan\vulkan_core.h')

    # args = [
    #     "-DVK_NO_PROTOTYPES",
    #     "-I.",
    #     "-I./include",  # Update if needed
    # ]

    args = [
        # "-DVK_NO_PROTOTYPES",
        # "-DVK_USE_PLATFORM_WIN32_KHR",
        "-IC:/VulkanSDK/1.3.283.0/Include/vulkan",
        "-IC:/Program Files (x86)/Windows Kits/10/Include/10.0.20348.0/um",
        "-IC:/Program Files (x86)/Windows Kits/10/Include/10.0.20348.0/shared",
    ]

    index = Index.create()
    tu = index.parse(header_path, args=args)

    if not tu:
        print("Failed to load translation unit.")
        return

    # print('VkBool32 typedef dword')
    visit(tu.cursor)

if __name__ == "__main__":
    main()
