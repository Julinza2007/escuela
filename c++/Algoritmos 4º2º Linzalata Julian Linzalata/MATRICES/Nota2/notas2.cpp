/*
Se almacenan las notas de 4 estudiantes en 4 bimestres.
Mostrar en un menu:
1. Promedio por alumno y que alumno tuvo menor promedio.
2. Promedio por bimestre y que estudiante obtuvo la nota mas alta cada bimestre
3. Porcentaje de bimestres aprobados por anio
4. Traza, minimo valor de la matriz y posiciones de memoria.
*/

#include <stdio.h>
int i, j, N=4; // i = estudiantes, j= bimestres
float notas[4][4];
main(){
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del estudiante %d, del bimestre %d: ", i + 1, j + 1);
			scanf("%d", &notas[i][j]);
		}
	}
	
	printf("\n\n\nIngrese 1, para mostrar promedio por alumno y que alumno tuvo menor promedio.");
	printf("\n\nIngrese 2, para mostrar promedio por bimestre y que estudiante obtuvo la nota mas alta cada bimestre"),
	printf("\n\nIngrese 3, para mostrar el porcentaje de bimestres aprobados por anio");
	printf("\n\nIngrese 4, para mostrar: El minimo valor de la matriz con las posiciones de memoria, y mostrar la diagonal principal.");
	printf("\n\nIngrese la opcion: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_alu = acum_alu + notas[i][j];
				}
				prom_alu = acum_alu / N;
				printf("\nEl promedio del alumno %d es igual a: %f", prom_alu);
				if(i==0 || prom_alu < prom_aluMin){
					prom_aluMin = prom_alu;
				}
				acum_alu=0;
			}
			printf("\nEl minimo promedio encontrado es del alumno %d", prom_aluMin);
			
			break;
	}

}
