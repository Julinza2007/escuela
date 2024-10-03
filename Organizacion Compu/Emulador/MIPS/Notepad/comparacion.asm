.data
    mensaje_mayor:    .asciiz "El numero es mayor que 10\n"   # Mensaje si el número es mayor a 10
    mensaje_menor:    .asciiz "El numero es menor o igual a 10\n"  # Mensaje si el número es menor o igual a 10
    num:             .word 15  # Número a comparar

.text
.globl main

main:
    
    lw $t0, num 

    # Comparar el número con 10
    li $t1, 10        # Cargar el valor 10 en el registro $t1
    bgt $t0, $t1, es_mayor   # Si $t0 es mayor que $t1, salta a la etiqueta 'es_mayor'

    # Si es menor o igual, ejecuta la sección de 'es_menor'
	
es_menor:
    la $a0, mensaje_menor    # Cargar la dirección del mensaje en $a0
    li $v0, 4                # Llamada al sistema para imprimir cadena
    syscall                  # Invoca la llamada al sistema
    j fin                    # Salta al final del programa

es_mayor:
    la $a0, mensaje_mayor    # Cargar la dirección del mensaje en $a0
    li $v0, 4                # Llamada al sistema para imprimir cadena
    syscall                  # Invoca la llamada al sistema

fin:
    li $v0, 10    # Llamada al sistema para salir
    syscall       # Salida del programa