section .data
    format db "Hello, Holberton",10,0 ; 10 is the ASCII code for newline, 0 is string terminator

section .text
    extern printf, exit

global main

main:
    ; Push the address of the format string onto the stack
    push format

    ; Call printf
    call printf

    ; Clean up the stack
    add esp, 4

    ; Exit the program
    call exit

