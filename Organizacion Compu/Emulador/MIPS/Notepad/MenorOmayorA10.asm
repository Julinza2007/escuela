#Numero mayor o menor a 10
#autor: Julinza
#fecha: hoy

.data
res_men: .asciiz "El numero es menor que 10"
res_may: .asciiz "El numero es mayor que 10"
fin: .asciiz "Ejecutar"

.text
main:
		li $v0, 5
		syscall
		move $t0, $v0
		
		bgt $t0, 10, mayor
		blt $t0, 10, menor
		
		menor:
				li $v0, 4
				la $a0, res_may
				syscall
				jr $ra
				
		mayor:
				li $v0, 4
				la $a0, mayor
				syscall
				jr $ra
				
		ejecutar:
				li $v0, 4
				la $a0, ejecutar
				syscall