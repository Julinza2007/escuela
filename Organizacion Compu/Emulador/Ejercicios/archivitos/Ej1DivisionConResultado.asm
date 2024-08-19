;   Ejercicio 4 - Con multiplicacion y resultado.
;   Nombre y apellido: Julian Martín Linzalata.
;   Fecha: 15/08/2024

.model small
.stack 64

;Inicializacion de variables y
;Cadenas de mensajes.

.data   
    ; db sirve como un operador para igualar las variables a un valor, y declararlas.
    num1 db 0 ;variable de entrada.
    num2 db 0 ;variable de entrada.
    division db 0 ; variable para el resultado de la resta.
 
    mensaje1 db 10,13, 'Ingrese el primer valor: ', '$'
    mensaje2 db 10,13, 'Ingrese el segundo valor: ', '$'
    mensajed db 10,13, 'Division: ', '$'
    
    .code
    inicio:
            MOV AX, @DATA ; es .data y posee las variables de la directiva .data o sea num1, num2 y suma
            MOV DS, AX
            
             ;imprimir mensaje 1
    
            MOV AH, 09      ; Carga de la función (lo que hace, dirección del texto a imprimir).
            LEA DX, mensaje1 ; Obtiene la direccion de memoria del mensaje1 que queremos imprimir 
            INT 21H         ; Llama a la interrupción 21H.
            
            ; Leer la entrada num1
            
            MOV AH, 01      ; Servicio de entrada para ingresar un numero.
            INT 21H         ; Llama la interrupcion 21H.
            SUB AL, 30H     ; El caracter 0 está en la posición 48 en ASCII, o 30H.
            MOV num1, AL    ; Mover la entrada hacia num1.
            
            
            ;   Imprimir mensaje2
            
            MOV AH, 09      ; Carga de la función (lo que hace, dirección del texto a imprimir).
            LEA DX, mensaje2 ; Obtiene la direccion de memoria del mensaje2 que queremos imprimir. 
            INT 21H         ; Llama a la interrupción 21H.
            
            
            ; Leer la entrada num2
            
            MOV AH, 01      ; Servicio de entrada para ingresar un numero.
            INT 21H         ; Llama la interrupcion 21H.
            SUB AL, 30H     ; El caracter 0 está en la posición 48 en ASCII, o 30H.
            MOV num2, AL    ; Mover la entrada hacia num2.
            
            ; Division
            
            MOV AL, num1          ; Cargar num1 en AL
            MOV AH, 00            ; Limpiar AH (dividendo en AX)          
            
            MOV BL, num2          ; Cargar num2 en BL (divisor)
            DIV BL                ; Dividir AX por BL, resultado en AL
            MOV division, AL      ; Almacenar el resultado en 'division'

            
            ; Resultado
            
            MOV AH, 09
            LEA DX, mensajed
            INT 21H
            MOV DL, division
            ADD DL, 30H
            MOV AH, 02
            INT 21H
            
            MOV AH, 4CH
            INT 21H          