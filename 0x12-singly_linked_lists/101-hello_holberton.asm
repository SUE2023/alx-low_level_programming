section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0

	section .text
	global main

	extern printf

main:
	push rdi
	mov rdi, format
	mov rsi, hello
	call printf
	pop rdi

	; Exit the program
	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall
