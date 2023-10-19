section .data
    message db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Set up the arguments for the write system call
    mov eax, 4        ; syscall number for write
    mov edi, 1        ; file descriptor 1 is stdout
    mov edx, 15       ; number of bytes to write
    lea rsi, [message] ; pointer to the message

    ; Invoke the system call
    syscall

    ; Exit the program
    mov eax, 60       ; syscall number for exit
    xor edi, edi      ; Exit code 0
    syscall

