section .data
    hello db "Hello, Holberton", 0xA ;

section .text
    global main

    extern printf

main:
    sub rsp, 8               ; Align the stack
    mov rdi, hello           ; Format string
    call printf             ; Call printf
    add rsp, 8               ; Restore the stack
    xor rax, rax             ; Return 0
    ret
