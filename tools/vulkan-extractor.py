#---------------------------------------------------------------------------------------------------
# usage:
# python vulkan-extractor.py vk_wrapper.c > vulkan_core.asm
# description:
# using libclang, parse vulkan headers and output masm64 files
#---------------------------------------------------------------------------------------------------
from clang.cindex import Index, CursorKind, TypeKind, Config
import os
import sys

import re

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
        print(f"\nstruct {cursor.spelling} {{")
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
                field_type = field.type.spelling
                field_size = field.type.get_size()
                field_align = field.type.get_align()
                field_offset = cursor.type.get_offset(field.spelling) // 8
                # print(field_offset)
                # print(field.spelling)

                if field_offset > offset:
                    padding = field_offset - offset
                    print(f"    padding ({padding} bytes)")
                    offset += padding

                print(f"    name = {field.spelling}, type = ({field_type}), offset = {field_offset}, size = {field_size}")
                # print(f"    {field.spelling} ({field_type}) ; size: {field_size}")
                offset += field_size

        struct_size = cursor.type.get_size()
        print(f"}} ; size: {struct_size}")

def extract_enums(cursor):
    if cursor.kind == CursorKind.ENUM_DECL:
        print(f"\nENUM {cursor.spelling} {{")
        for enum in cursor.get_children():
            if enum.kind == CursorKind.ENUM_CONSTANT_DECL:
                print(f"    {enum.spelling} = {enum.enum_value}")
        print("}")

def extract_functions(cursor):
    if cursor.kind == CursorKind.FUNCTION_DECL:
        ret = cursor.result_type.spelling
        name = cursor.spelling
        params = []
        for arg in cursor.get_arguments():
            params.append(f"{arg.type.spelling} {arg.spelling}")
        print(f"\nFUNC {ret} {name}({', '.join(params)})")

def extract_typedefs(cursor):
    if cursor.kind == CursorKind.TYPEDEF_DECL:
        print(f"\nTYPEDEF {cursor.spelling} = {cursor.underlying_typedef_type.spelling}")

def visit(cursor):
    # if cursor.location.file and not cursor.location.file.name.endswith("vulkan_win32.h"):
    if cursor.location.file and not cursor.location.file.name.endswith("vulkan_core.h"):
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
    extract_defines(r'C:\VulkanSDK\1.3.283.0\Include\vulkan\vulkan_core.h')

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

    visit(tu.cursor)

if __name__ == "__main__":
    main()
