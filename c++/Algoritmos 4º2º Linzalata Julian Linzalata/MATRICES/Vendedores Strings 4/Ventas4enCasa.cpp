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
int i, j, N=4, opc, ventas[4][4], acum_dia, min_dia, i_min, acum_vende, max_vende, i_max,
max_matriz, posi_iMax, posi_jMax, cont_mas3000; //i dias, j vendedores.
float prom_dia, porc_mas3000;
char vendedores[3][12];  

main(){
	
		for(j=0; j < N; j++){
			printf("Ingrese del vendedor %d el nombre: ", j + 1);
			scanf("%s", &vendedores[j]); 
		}
	
	printf("\n\n");
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del dia %d, del vendedor %d llamado %s, la cantidad de ventas: ", i + 1, j + 1, vendedores[j]);
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
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						acum_dia = acum_dia + ventas[i][j];
					}
					if(i==0 || acum_dia < min_dia){
						min_dia = acum_dia;
						i_min = i + 1;
					}
					prom_dia = acum_dia / N;
					acum_dia=0;
					printf("\n\nLa cantidad de ventas promedio en el dia numero %d, es de: %f", i + 1, prom_dia);
				}
				printf("\n\n\nEl dia %d, fue el que tuvo menos ventas.", i_min);
			
			break;
			
			case 2:
				for(j=0; j < N; j++){
					for(i=0; i < N; i++){
						acum_vende = acum_vende + ventas[i][j];
						
						if(i==0 || ventas[i][j] > max_vende){
							max_vende = ventas[i][j];
							i_max = i + 1;
						}
					}
					printf("\n\nDel vendedor numero %d llamado %s se registro en total %d cantidad de ventas.", j + 1, vendedores[j], acum_vende);
					printf("\nY ese mismo vendedor tuvo mayor cantidad de ventas el dia %d", i_max);
					acum_vende=0;
					max_vende=0;
				}		
				
			break;
			
			case 3:
				for(i=0; i < N; i++){
					for(j=0; j < N; j++){
						if(i==j){
							printf("\n\ndia %d, vendedor %d: %d ventas", i, j, ventas[i][j]);
						}
						if((i==0 && j==0) || ventas[i][j] > max_matriz){
							max_matriz = ventas[i][j];
							posi_iMax = i;
							posi_jMax = j;							
						}		
					}
				}
				
				printf("\n\nEl valor maximo encontrado de la matriz es de: %d Y corresponde a las posiciones i %d, j %d", max_matriz, posi_iMax, posi_jMax);	
			
			break;	
			
			case 4:
				for(j=0; j < N; j++){
					for(i=0; i < N; i++){
						acum_vende = acum_vende + ventas[i][j];
					}
					if(acum_vende > 3000){
						cont_mas3000 = cont_mas3000 + 1;
					}
					acum_vende=0;
				}
				
				porc_mas3000 = (cont_mas3000 * 100) / N;
				
				printf("\n\nEl porcentaje de los vendedores con mas de 3000 ventas es de: %f", porc_mas3000);
				
			
			break;			
			
			default:
				printf("\n\n\n\nTerminando Programa...");
			break;
		}

	}while(opc > 0 && opc < 5);
	
	
	
	
}