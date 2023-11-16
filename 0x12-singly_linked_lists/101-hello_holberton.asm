section .data
    hello db `Hello, Holberton\n`, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8

    mov rdi, hello
    call printf

    add rsp, 8
    ret