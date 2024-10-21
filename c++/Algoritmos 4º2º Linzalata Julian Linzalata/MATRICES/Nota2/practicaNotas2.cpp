/*
Se almacenan las notas de 4 estudiantes en 4 bimestres.
Mostrar en un menu:
1. Promedio por alumno y que alumno tuvo menor promedio.
2. Promedio por bimestre y que estudiante obtuvo la nota mas alta cada bimestre
3. Porcentaje de bimestres aprobados por anio
4. Traza, minimo valor de la matriz y posiciones de memoria.
*/

#include <stdio.h>
int i, j, N=4, opc, i_minPromAlu, max_estuXbim, i_maxEstuXbim, pos_iMin, pos_jMin; // i= estudiantes, j= bimestres
float notas[4][4], acum_alu, prom_alu, min_promAlu, acum_bim, prom_bim, cont_bimApro=0, porc_bimApro, acum_traza, min_matriz;
main(){
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del estudiante %d, del bimestre %d, la nota: ", i + 1, j + 1);
			scanf("%f", &notas[i][j]);
			while(notas[i][j] < 0 || notas[i][j] > 10){
				printf("Error, ingrese de nuevo: ");
				scanf("%f", &notas[i][j]);
			}
		}
		printf("\n");
	}
do{	
	printf("\n\nIngrese 1, para mostrar el promedio por alumno y que alumno tuvo menor promedio.");
	printf("\n\nIngrese 2, para mostrar promedio por bimestre y que estudiante obtuvo la nota mas alta cada bimestre.");
	printf("\n\nIngrese 3, para mostrar porcentaje de bimestres aprobados por anio.");
	printf("\n\nIngrese 4, para mostrar el valor de la traza, minimo valor de la matriz y posiciones de memoria.");
	printf("\n\nIngrese la opcion a elegir: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: 
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_alu = acum_alu + notas[i][j];
				}
				prom_alu = acum_alu / N;
				if(i==0 || prom_alu < min_promAlu){
					min_promAlu = prom_alu;
					i_minPromAlu = i + 1;
				}
				printf("\nEl promedio del alumno %d es de: %f", i + 1, prom_alu);
				acum_alu = 0;
			}
			printf("\n\nEl alumno %d, fue el que tuvo menor promedio", i_minPromAlu);
			
		break;
		
		case 2:
			for(j=0; j < N; j++){
				for(i=0; i < N; i++){
					acum_bim = acum_bim + notas[i][j];
					if(i==0 || notas[i][j] > max_estuXbim){
						max_estuXbim = notas[i][j];
						i_maxEstuXbim = i + 1;
					}
				}
				prom_bim = acum_bim / N;
				printf("\nEl promedio del bimestre %d es de: %f.", j + 1, prom_bim);
				printf(" Y el estudiante %d fue el que tuvo mas nota en ese bimestre", i_maxEstuXbim);
				max_estuXbim = 0;
				acum_bim = 0;
			}
			
		break;
		
		case 3:
			for(j=0; j < N; j++){
				for(i=0; i < N; i++){
					if(notas[i][j] >= 6){
						cont_bimApro = cont_bimApro + 1;
					}
				}
				porc_bimApro = (cont_bimApro * 100) / N;
				cont_bimApro = 0;
				printf("\n\nEl porcentaje de bimestres aprobados en un anio es de: %f",
				 porc_bimApro); 

			}		
		
		break;
		
		case 4:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if(i==j){
						acum_traza = acum_traza + notas[i][j];
					}
					if((i==0 && j==0) || notas[i][j] < min_matriz){
						min_matriz = notas[i][j];
						pos_iMin = i;
						pos_jMin = j;
					}
				}
			}
			
			break;
			
			printf("\n\nEl valor de la traza de la matriz es de: %f", acum_traza);
			printf("\n\nEl valor minimo de la matriz es de: %f, y corresponde a la posicion de memoria i %d j %d", min_matriz, pos_iMin, pos_jMin);
		
		default: 
		
			printf("\n\nProceso Terminado...\n\n");
		
		break;	
	}
}
while(opc > 0 && opc < 5);

}
