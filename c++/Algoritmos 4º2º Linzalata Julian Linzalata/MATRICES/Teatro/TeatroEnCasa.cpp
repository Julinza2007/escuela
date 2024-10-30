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
int i, j, N=3, opc, entradas[3][3], acum_espec, max_espec, i_max, acum_dia, espec_max, i_maxXdia,
min_matriz, posi_iMin, posi_jMin; // i espectaculos, j dias.
float prom_dia, cont_especMas200=0, porc_especMas200;
char espectaculos[3][12];

main(){
		for(i=0; i < N; i++){
			printf("Ingrese del espectaculo numero %d el nombre: ", i + 1);
			scanf("%s", &espectaculos[i]);
		}
		printf("\n\n");
	
	
		for(i=0; i < N; i++){
			for(j=0; j < N; j++){
				printf("Ingrese del espectaculo numero %d llamado %s, del dia %d, la cantidad de entradas: ", i + 1, espectaculos[i], j + 1);
				scanf("%d", &entradas[i][j]);
				while(entradas[i][j] < 0){
					printf("Error, ingrese de nuevo: ");
					scanf("%d", &entradas[i][j]);
				}
			}
			printf("\n\n");
		}
		
	do{
		printf("\n\nIngrese 1, para mostrar la cantidad de entradas por espectáculo y espectáculo que vendió mas entradas.");	
		printf("\nIngrese 2, para mostrar el promedio de entradas por día y que espectáculo vendió más entradas cada día.");	
		printf("\nIngrese 3, para mostrar la diagonal principal, valor minimo de la matriz y posiciones de memoria.");	
		printf("\nIngrese 4, para mostrar el porcentaje de los espectáculos que vendieron mas de 200 entradas en total.");	
		printf("\n\nIngrese la opcion: ");
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
					printf("\n\nDel espectaculo numero %d, llamado %s, la cantidad de entradas total es de: %d", i + 1, espectaculos[i], acum_espec);
					acum_espec=0;
				}
				
				printf("\n\n\nEl espectaculo numero %d, llamado %s, fue el que vendio mas entradas.", i_max, espectaculos[i_max - 1]);
				
			break;
			
			case 2:
				for(j=0; j < N; j++){
					for(i=0; i < N; i++){
						acum_dia = acum_dia + entradas[i][j];
						if(i==0 || entradas[i][j] > espec_max){
							espec_max = entradas[i][j];
							i_maxXdia = i + 1;  
						}
					}
					
					prom_dia = acum_dia / N;
					printf("\n\nEn el dia numero %d, el promedio de entradas fue %f", j + 1, prom_dia);
					printf("\nY de ese mismo dia, el espectaculo numero %d llamado %s, fue el que vendio mas entradas.", i_maxXdia, espectaculos[i_maxXdia - 1]);
					acum_dia=0;
				}
				
				
			break;
						
			case 3:
				
				printf("\n\nDiagonal principal:");
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						if(i==j){
							printf("\n  |Espectaculo %d dia %d, %d entradas|", i, j, entradas[i][j]);
						}
						
						if((i==0 && j==0) || entradas[i][j] < min_matriz){
							min_matriz = entradas[i][j];
							posi_iMin = i;
							posi_jMin = j;
						}
					}
				}
				
				printf("\n\nEl valor minimo de la matriz es de %d, y corresponde a la posicion i %d, j %d", min_matriz, posi_iMin, posi_jMin);
				
			break;
			
			case 4:
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						acum_espec = acum_espec + entradas[i][j];
					}
					if(acum_espec > 200){
						cont_especMas200 = cont_especMas200 + 1;
					}
					acum_espec=0;
				}
				porc_especMas200 = (cont_especMas200 * 100) / N;
				
				printf("\n\nEl porcentaje de espectaculos que vendieron mas de 200 entradas en total es de: %f", porc_especMas200);
				
			break;
			
			default:
				printf("\n\n\nTerminando programa...");
			break;
		}
		
		
		
	}while(opc > 0 && opc < 5);
		
		
	
	
	
}