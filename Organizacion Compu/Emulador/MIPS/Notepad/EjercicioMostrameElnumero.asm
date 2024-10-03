#bendiciones para los beibis 
#Mostrar el numero decimal

.data
	numero: .double 3.1415
.text
	main:
	li $v0, 3			#capturar el numero
	ldc1 $f12, numero	#mostrar el numero decimal
	syscall
	
	li $v0, 10			#Servicio de salida
	syscall
	