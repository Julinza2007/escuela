/*
Se almacenan en una matriz los datos de un teatro. Hay 3 espectáculos distintos en 3 días.
Mostrar mediante un menú:
1. Cantidad de entradas por espectáculo y espectáculo que vendió mas entradas.
2. Promedio de entradas por día y que espectáculo vendió más entradas cada día.
3. Diagonal principal, valor minimo de la matriz y posiciones de memoria.
4. Porcentaje de los espectáculos que vendieron mas de 200 entradas en total.

Almacenar en un vector los nombres de los espectáculos.
*/

#include <stdio.h>
int entradas[3][3], i, j, N=3, opc, acum_espec, i_max, max_espec ; // i espectáculos j dias.
char nombres[3][12];
main(){
	
	for(i=0; i < N; i++){
		printf("Ingrese el nombre del espectaculo numero %d: ", i + 1);
		scanf("%s", &nombres[i]);
	}
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
		printf("\nIngrese del espectaculo %d llamado %s, del dia %d, la cantidad de entradas: ", i + 1, nombres[i], j + 1);
		scanf("%d", &entradas[i][j]);
		}
	}
	
	do{
	
	printf("\nIngrese 1, para mostrar la cantidad de entradas por espectaculo y el espectaculo que vendio mas entradas.");
	printf("\nIngrese 2, para mostrar el promedio de entradas por dia y que espectaculo vendio más entradas cada dia.");
	printf("\nIngrese 3, para mostrar la diagonal principal, el valor minimo de la matriz y posiciones de memoria.");
	printf("\nIngrese 4, para mostrar los porcentaje de los espectaculos que vendieron mas de 200 entradas en total. ");
	printf("\n\nIngrese opcion: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_espec = acum_espec + entradas[i][j];
				}
				
				if(i==0 || acum_espec > max_espec){
					max_espec = acum_espec;
					i_max = i + 1;
				}
				printf("\n\nDel espectaculo %d llamado %s, la cantidad de entradas es de: %d.", i + 1, nombres[i], acum_espec);
				acum_espec = 0;	
			}
			
			printf("\n\nEl espectaculo numero %d, llamado %s, fue el que tuvo mas entradas", i_max, nombres[i_max - 1]);
		
		break;
		
		case 2: 
			for(j=0; j < N; j++){
				for(i=0; i < N; i++){
					acum_dia = acum_dia + entradas[i][j];
					if(i==0 || acum_dia > max_dia){
						max_dia = acum_dia;
						especMax = i + 1;
					}
				}
				prom_dia = acum_dia / N;
				acum_dia=0;
				printf("\n\nDel dia %d el promedio de entradas es de: %f.", j + 1, prom_dia);
				printf("\nY El espectaculo numero %d, llamado %s, fue el que tuvo mayor venta de entradas ese dia.", especMax, nombres[i]);
			}
			
		case 3:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if(i==j){
						acum_traza = acum_traza + entradas[i][j]
					}
					if((i==0 && j==0) || entradas[i][j] < minMatriz){
						minMatriz = entradas[i][j];
						min_iPosi = i;
						min_jPosi = j;
					}	
				}
			}
			
			printf("\n\nEl valor de la traza es de: %f");
			printf("\n\nEl minimo valor de la matriz es de: %f. Y corresponde a la posicion i %d, j %d", minMatriz, min_iPosi, min_jPosi);
			
		break;
		
		
		case 4:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_espec = acum_espec + entradas[i][j];
					if(acum_espec > 200){
					cont_especMas200 = cont_especMas200 + 1;
					}
				}
				acum_espec=0;
				porc_espec = (cont_especMas200 * 100) / N; // preguntar a la profe xd.
				printf("\n\nEl porcentaje de los espectaculos que vendieron mas de 200 entradas en total es de: %f", porc_espec);
			}
			
		break;
			
		
		default: 
			printf("\n\nQsy, cosas jajajj.\n\n");
				
		break;
	}
	
	}while(opc < 5 && opc > 0);
		
		
		
		
}
	
