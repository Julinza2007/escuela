#include <stdio.h>
int calificacion;

main () {
printf("Ingrese su calificacion en el examen (de 0 a 100): ");
scanf("%d", & calificacion);
   
    if (calificacion >= 0 && calificacion <= 100){
        if (calificacion >= 90){
            printf("Excelente\n");
       	 } else if (calificacion >= 80){
       			printf("Bueno");
        }
				else if (calificacion >= 70){
        			printf("Aprobado");
    }
    				else if (calificacion >= 0){
    					printf("Reprobado");
	}
	}
							else {
								printf("Error en la introduccion del valor de la calificacion");
									}
}