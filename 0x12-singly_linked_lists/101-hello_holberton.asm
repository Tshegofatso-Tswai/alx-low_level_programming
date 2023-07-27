section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Push the format string onto the stack (argument for printf)
    mov rdi, format
    ; Push the address of hello onto the stack (argument for printf)
    mov rsi, hello
    ; Call the printf function
    call printf

    ; Push the format string for the new line onto the stack (argument for printf)
    mov rdi, format
    ; Push the address of newline onto the stack (argument for printf)
    mov rsi, newline
    ; Call the printf function again to print the new line
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall

