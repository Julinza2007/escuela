/*
Se almacenan la venta de cuatro vendedores en cuatro dias en una matriz.
Guardar nombre de los vendedores en un vector.
Realizar un programa en el que mediante un menu muestre:
1. Promedio de ventas por dia y que dia hubo menos ventas.
2. Total de ventas por vendedor y que dia cada vendedor tuvo mas ventas
3. Diagonal principal, maximo valor de la matriz y posiciones de memoria.
4. Porcentaje de los vendedores que vendieron mas de 3000 en total.
*/

#include <stdio.h>
int i, j, N=4, opc, ventas[4][4], acum_dia, min_dia, j_min, acum_vende, max_dia, j_maxXdia, max_matriz, posi_iMax, posi_jMax; // i vendedores, j dias
float prom_dia, cont_vendeMas3000=0, porc_vendeMas3000;
char vendedores[3][12];

main(){
	for(i=0; i < N; i++){
		printf("Ingrese del vendedor numero %d el nombre: ", i + 1);
		scanf("%s", &vendedores[i]);
	}
	
	printf("\n\n");
		
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del vendedor numero %d llamado %s, del dia %d, la cantidad de ventas: ", i + 1, vendedores[i], j + 1);
			scanf("%d", &ventas[i][j]);
			while(ventas[i][j] < 0){
				printf("Error, ingrese de nuevo: ");
				scanf("%d", &ventas[i][j]);
			}
		}
		printf("\n\n");
	}
	
	do{
		printf("\n\nIngrese 1, para mostrar el promedio de ventas por dia y que dia hubo menos ventas.");
		printf("\nIngrese 2, para mostrar el total de ventas por vendedor y que dia cada vendedor tuvo mas ventas.");
		printf("\nIngrese 3, para mostrar la diagonal principal, maximo valor de la matriz y posiciones de memoria.");
		printf("\nIngrese 4, para mostrar el porcentaje de los vendedores que vendieron mas de 3000 en total.");
		printf("\n\nIngrese opcion: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				for(j=0; j < N; j++){
					for(i=0; i < N; i++){
						acum_dia = acum_dia + ventas[i][j];
					}
					if(j==0 || acum_dia < min_dia){
						min_dia = acum_dia;
						j_min = j + 1;
					}
					prom_dia = acum_dia / N;
					printf("\n\nDel dia %d, el promedio de ventas es de: %f", j + 1, prom_dia);
					acum_dia=0;
				}
				printf("\n\n\nEl dia %d, fue el que tuvo menos ventas en total.", j_min);
			break;
			
			case 2:
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						acum_vende = acum_vende + ventas[i][j];
						if(j==0 || ventas[i][j] > max_dia){
							max_dia = ventas[i][j];
							j_maxXdia = j + 1;
						}
					}
					printf("\n\nDel vendedor numero %d llamado %s, el total de ventas es de: %d", i + 1, vendedores[i], acum_vende);
					printf("\nY de ese mismo vendedor, el dia numero %d fue el que tuvo mayores ventas.", j_maxXdia);
					acum_vende=0;
				}
			break;
			
			case 3:
				printf("\n\n\nDiagonal principal:\n");
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						if(i==j){
							printf("\n|vendedor %d, dia %d, %d ventas|", i, j, ventas[i][j]);
						}
						if((i==0 && j==0) || ventas[i][j] > max_matriz){
							max_matriz = ventas[i][j];
							posi_iMax = i;
							posi_jMax = j;
						}
					}
				}
				
				printf("\n\nEl maximo valor de la matriz encontrado es de %d ventas.");
				printf(" Y corresponde a las posiciones de memoria i %d, j %d.", posi_iMax, posi_jMax);				
			break;
			
			case 4:
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						acum_vende = acum_vende + ventas[i][j];
					}
					if(acum_vende > 3000){
						cont_vendeMas3000 = cont_vendeMas3000 + 1;
					}
					acum_vende=0;
				}
				porc_vendeMas3000 = (cont_vendeMas3000 * 100) / N;
				cont_vendeMas3000=0;
				
				printf("\n\nEl porcentaje de vendedores que vendieron mas de 3000 autos en total es de: %f", porc_vendeMas3000);
				
			break;
			default:
				printf("\n\n\nTerminando programa...");
			break;
			
		}
	}while(opc > 0 && opc < 5);
}