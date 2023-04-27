section .data
    hello: db "Hello, Holberton", 10, 0
    format: db "%s", 10, 0

section .text
    global main
    extern printf

main:
    push rbx
    lea rbx, [hello]
    push rbx
    lea rbx, [format]
    mov rdi, rbx
    xor rax, rax
    call printf
    add rsp, 16
    pop rbx
    xor eax, eax
    ret
