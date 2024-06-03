#include <stdio.h>
float nota, acum=0, promedio, porce_desap;
int i, N=3, cont_apro=0, cont_desap=0;
main(){
	for(i=0; i<N; i++){
	printf("Ingrese la nota: ");
	scanf("%f", &nota);
	acum= acum + nota;
	if (nota >=6){
	cont_apro= cont_apro + 1;
	}
	else{
		cont_desap= cont_desap + 1;
	}	
	porce_desap= (cont_desap * 100) / n;
}
		promedio= acum / N;
		
	printf("El porcentaje de desaprobados es de: %f \n", porce_desap);	
	printf("La cantidad de las notas aprobadas es de %d \n", cont_apro);
	printf("El promedio de las notas es de: %f", promedio);
	}
