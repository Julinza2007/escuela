/*
Se almacenan en una matriz la cantidad de animalitos que atiende una veterinaria en 4 gabinetes durante 4 dias. 
Mostrar mediante un menu:
1) Total de animales por gabinete y que gabinete atendio a mas mascotas
2) Promedio de mascotas atendidas por dia 
3) Mostrar por dia que gabinete atendio a menos mascotas 
4) Diagonal principal, minimo valor de la matriz y posiciones de memoria
*/

#include <stdio.h>
int i, j, N=4, animales[4][4], gabiMax=0, gabiMin, posi_Imin, posi_Jmin;
float acum_gabi, anim_gabiMax, acum_dia, prom_animXdia, gabi_minXdia, acum_traza, animales_min;

main(){
	
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del gabinete %d, del dia numero %d, la cantidad de animales: ", i + 1, j + 1);
			scanf("%d", &animales[i][j]);
			while(animales[i][j] < 0){
				printf("Error, Ingrese de nuevo: ");
				scanf("%d", &animales[i][j]);
			}
			if(i == j){
				acum_traza = acum_traza + animales[i][j];
			}
			if(i && j == 0 || animales[i][j] < animales_min){
				animales_min = animales[i][j];
				posi_Imin = i + 1;
				posi_Jmin = j + 1; 
			}
		}
		printf("\n\n");
	}
	
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			acum_gabi = acum_gabi + animales[i][j];
		}
			if(i==0 || acum_gabi > anim_gabiMax){
			anim_gabiMax = acum_gabi;
			gabiMax = i + 1;
			}
			printf("\nEn el gabinete numero %d, el total de animales es de: %f\n", i + 1, acum_gabi);
			acum_gabi = 0;		
	}
	
	for(j=0; j < N; j++){
		for(i=0; i < N; i++){
			acum_dia = acum_dia + animales[i][j];
			if(i==0 || animales[i][j] < gabi_minXdia){
				gabi_minXdia = animales[i][j];
				gabiMin = i + 1;
			}
		}
		prom_animXdia = acum_dia / N;
		printf("\n\nEl promedio de animales del dia %d es de: %f", j + 1, prom_animXdia);
		acum_dia=0;
		printf("\n\nDel dia %d El gabinete numero %d fue el que tuvo menos animales con: %f\n\n", j + 1, gabiMin, gabi_minXdia);
		
	}
		
		printf("\n\nEl valor de la diagonal principal es de: %f", acum_traza);
		printf("\n\nDel gabinete %d, y del dia %d, el minimo valor encontrado de la matriz es de: %f animales", posi_Imin, posi_Jmin, animales_min);
		printf("\n\nCon un total de %f animales, el gabinete %d fue el que tuvo mas animales.", anim_gabiMax, gabiMax); 
		
	
	printf("\n\n\nPosiciones de memoria:\n\n");
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Gabinete %d, dia %d: |%d| ", i, j, animales[i][j]);
		}        
		printf("\n\n");
	}
}