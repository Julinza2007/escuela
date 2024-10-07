/*
Realizar un programa para procesar las notas de 3 alumnos en 3 materias.
Mostrar:
1.	Promedio por alumno
2.	Promedio por materia
3.	Traza
*/
#include <stdio.h>
int i, j, N=3;
float notas[3][3], acum_estu, prom_estu, acum_mate, prom_mate, acum_traza;
main(){
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del alumno %d, de la materia %d, la nota: ", i, j);
			scanf("%f", &notas[i][j]);
			while(notas[i][j] > 10 || notas[i][j] <= 0){
			printf("Error, ingresa de nuevo: ");
			scanf("%f", &notas[i][j]);
			}
			acum_estu = acum_estu + notas[i][j];
			if(i == j){
			acum_traza = acum_traza + notas[i][j];
		}
		}
		prom_estu = acum_estu / N;
		printf("\nEl promedio del alumno %d es |%f|\n\n", i, prom_estu);
		acum_estu = 0;
		
	
	}
	
	for(j=0; j < N; j++){
		for(i=0; i < N; i++){
			acum_mate = acum_mate + notas[i][j];
		}
		
		prom_mate = acum_mate / N;
		printf("El promedio de la materia %d es |%f|\n", i, prom_mate);
		acum_mate = 0;
	}
	
	printf("\nLa traza es igual a: %f", acum_traza);	

	
}
