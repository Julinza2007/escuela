#Ingresar dos numeros y sumarlos
#autor: Julinza
#fecha: hoy

.data
	mensaje1: .asciiz "Ingrese un numero: "
	mensaje2: .asciiz "La suma es: "
.text
.globl main
	main:
		li $v0, 4
		la $a0, mensaje1	#	Imprime el primer mensaje
		syscall
		
		li $v0, 5			#
		syscall				#	Ingresa el primer numero
		move $t1, $v0		#
		
		li $v0, 4				
		la $a0, mensaje1	#	Imprime el segundo mensaje
		syscall
		
		li $v0, 5			#
		syscall				#	Ingresa el segundo numero
		move $t2, $v0		#
		
		add $t3, $t1, $t2	#	Realiza la suma
		li $v0, 4			
		la $a0, mensaje2  	#	Imprime el mensaje2 de la suma, o sea el resultado
		syscall
		
		li $v0, 1		
		move $a0, $t3		# 	Imprime el numero
		syscall
		
		li $v0, 10			#	Servicio de salida
		syscall