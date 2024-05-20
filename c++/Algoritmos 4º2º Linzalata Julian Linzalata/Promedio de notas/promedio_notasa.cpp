#include <stdio.h>
float nota, acum=0, promedio, porce_desap;
int i, N=3, cont=0, cont_desap=0;
main(){
	for(i=0; i<N; i++){
	printf("Ingrese la nota: ");
	scanf("%f", &nota);
	acum= acum + nota;
	promedio= acum / 3;
	if (nota >=6){
	cont= cont + 1;
	}
	if (nota < 6){
		cont_desap= cont_desap + 1;
	}
	
	porce_desap= (cont_desap * 100) / 3;
	
	
	}
	printf("El porcentaje de desaprobados es de: %f \n", porce_desap);	
	printf("La cantidad de las notas aprobadas es de %d \n", cont);
	printf("El promedio de las notas es de: %f", promedio);
	}
