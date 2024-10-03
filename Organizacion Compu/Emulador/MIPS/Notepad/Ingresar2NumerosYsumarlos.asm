#Ingresar 2 numeros y sumarlos
#autor: MikuMikuDance
#fecha: 10/12/2013

.data
	mensaje1: .ascii "Ingrese un nu,ero: "
	mensaje2: .ascii "La suma es: "
.text
.globl main
	main:
		li $v0, 4
		la $a0, mensaje1
		syscall
		
		li $v0, 5
		syscall
		
		move $ti, $v0
		li $v0, 4
		la $a0, mensaje1
		syscall
		
		li $v0, 5
		syscall
		move $t2, $v0
		
		add $t3, $t1, $t2
		li $v0, 4
		la $a0, mensaje2
		syscall
		
		li $v0, 1
		
		move $a0, $t3
		syscall
		
		li $v0, 10
		syscall