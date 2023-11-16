section .data
    hello db `Hello, Holberton\n`, 0

section .text
    global main
    extern printf

main:
    mov edi, hello
    xor eax, eax
    call printf
    mov eax, 0
    ret