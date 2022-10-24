	global main
	extern printf

	section .text
main:
	movrdi, format
	movrax, 0
	call printf
	movrax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
