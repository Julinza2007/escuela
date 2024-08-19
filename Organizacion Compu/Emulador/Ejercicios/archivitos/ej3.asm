;Operaciones de aritmetica, ejercicio 3.
;Alumno: Julian Martin Linzalata.
;Curso: 4to 2da.
;Fecha: 08/08/2024.

.model small

.stack 64

.data

    n1 db 0    
    n2 db 0
    
    suma db 0
    
    msg1 db 10,13, 'Ingrese primer numero: '
    
    msg2 db 10,13, 'Ingrese otro numero: '
    
    msgSuma db 10,13, 'Suma: ', '$'
    
.code

    Inicio proc far
                
        MOV AX, @data
        MOV D5, AX
        
;Imprimir mensaje 1 y 2

    MOV AH, 09

    LEA DX, msg1

    INT 21h

    MOV AH, 01

    INT 21H
    
        SUB AL, 30H

    MOV N1, AL


    MOV AL, n1

    ADD AL, n2
    
    MOV Suma, AL
    
;Resultado

    MOV AH, 09
    
    LEA DX, msgSuma
    
    INT 21H
    
    MOV DL, suma