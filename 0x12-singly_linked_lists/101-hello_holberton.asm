section .data
	format db "Hello, %s", 0
section .data
	str db "Holberton", 0

section .text
    extern printf

global main

main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, str  ; Address of the string "Holberton"

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60         ; syscall number for exit
    xor edi, edi        ; exit code 0
    syscall
EOL
