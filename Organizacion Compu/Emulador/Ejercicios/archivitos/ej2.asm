;   Ejercicio 2

;Alumno: Julian Martin Linzalata.   
;Curso: 4to 2da.
;Fecha: 08/08/2024.

 
; IMPRIME EL MENSAJE Hola mundo en una pantalla


.model small  

.data      

    msg db 'Hola mundo', '$' 
    
.code  

main PROC 
 
    MOV AX, SEG msg; Cargar el segmento msg
    MOV DS, AX      ;Cargar el acumulador de AX en el segmento de DS
    MOV AH, 09H     ;Imprimir la direccion del texto
    LEA DX, msg     ;Cargar la direccion efectiva
    INT 21H         ;Interrupcion
               
.exit

main ENDP                     

END
