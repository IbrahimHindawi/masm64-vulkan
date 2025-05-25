; xor rax, rax; test
mov rsi, extensions_available
xor rcx, rcx
mov r8, sizeof VkExtensionProperties
mov r9, extension_string_array + 8 * 0
loop_extension_validation_layer_find_0:
    push rcx
    push rdx
    push r8
    lea rcx, [rsi.VkExtensionProperties.extensionName]
    mov rdx, r9
    call strcmp64
    cmp rax, 0
    jne extension_validation_label_not_found_0
    add found_extensions, 1
    lea r9, extension_string_array + 8 * 0
    extension_validation_label_not_found_0:
    pop r8
    pop rdx
    pop rcx
    add rsi, r8
    inc rcx
    cmp rcx, extension_count
    jl loop_extension_validation_layer_find_0

mov rsi, extensions_available
xor rcx, rcx
mov r8, sizeof VkExtensionProperties
mov r9, extension_string_array + 8 * 1
loop_extension_validation_layer_find_1:
    push rcx
    push rdx
    push r8
    lea rcx, [rsi.VkExtensionProperties.extensionName]
    mov rdx, r9
    call strcmp64
    cmp rax, 0
    jne extension_validation_label_not_found_1
    add found_extensions, 1
    lea r9, extension_string_array + 8 * 1
    extension_validation_label_not_found_1:
    pop r8
    pop rdx
    pop rcx
    add rsi, r8
    inc rcx
    cmp rcx, extension_count
    jl loop_extension_validation_layer_find_1

mov rsi, extensions_available
xor rcx, rcx
mov r8, sizeof VkExtensionProperties
mov r9, extension_string_array + 8 * 2
loop_extension_validation_layer_find_2:
    push rcx
    push rdx
    push r8
    lea rcx, [rsi.VkExtensionProperties.extensionName]
    mov rdx, r9
    call strcmp64
    cmp rax, 0
    jne extension_validation_label_not_found_2
    add found_extensions, 1
    lea r9, extension_string_array + 8 * 2
    extension_validation_label_not_found_2:
    pop r8
    pop rdx
    pop rcx
    add rsi, r8
    inc rcx
    cmp rcx, extension_count
    jl loop_extension_validation_layer_find_2
