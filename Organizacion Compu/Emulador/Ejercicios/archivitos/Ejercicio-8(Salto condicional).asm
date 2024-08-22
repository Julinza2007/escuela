;Ejercicio 8 -Salto Condicional

;Nombre y Apellido: Linzalata Julian Martin.

;Fecha: 22/08/2024.

.Model

.Stack

.data ; Datos de carga

    num1 db 8
    
    num2 db 4
    
    
    msg1 db 'Numeros iguales', '$'
    
    msg2 db 'Numero 1 es mayor', '$'
    
    msg3 db 'Numero 2 es mayor', '$'
    
  
  
.code
    
    main:
    
            MOV AX, @DATA
            
            MOV DS, AX

; Comparacion

            MOV AL, num1
            
            CMP AL, num2
            
            JC mayor2   
 
            JZ igual
 
            JNZ mayor1
            
; Imprimir en pantalla
            
            MOV AH, 09H
            
            LEA DX, msg1
            
            INT 21H
            
.exit



;Imprimir en pantalla

;Salto condicional

    igual:
    
            MOV AH, 09H
            
            LEA DX, msg1
            
            INT 21H
            
.exit



;Salto condicional

    mayor1:
                MOV AH, 09H
            
                LEA DX, msg2
            
                INT 21H 
             
.exit       


;Salto condicional
    
    mayor2:                  
                MOV  AH, 09H 
                
                LEA DX, msg3
                
                INT 21H
    
.exit

END     

;COMO PSEUDOCODIGO:

               ;SI
;               |
;     ----------------------
;    |          |           |
;    v          v           v
;num1>num2  num1=num2   num1<num2  
;    |          |           |
;    |          |           |
;   JNZ        JZ          JC
;    |          |           |
;    v          v           v
; |mayor1|   |igual|    |mayor2|