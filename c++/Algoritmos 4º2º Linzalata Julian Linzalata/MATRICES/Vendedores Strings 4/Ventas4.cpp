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
int i, j, N=4, ventas[4][4], opc, i_min, i_max, i_posiMax, j_posiMax; // i dia, j vendedor 
float acum_dia, min_dia, prom_dia, dia_min, acum_vende, max_vende, traza, max, cont_vendeMas3000=0, porc_vendeMas3000;
char vendedores[3][12];

main(){
	for(j=0; j < N; j++){
		printf("Ingrese del vendedor %d el nombre: ", j + 1);
		scanf("%s", &vendedores[j]);
	}
	printf("\n\n");

	
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese la cantidad de ventas del dia %d, del vendedor %d llamado %s: ", i + 1, j + 1, vendedores[j]);
			scanf("%d", &ventas[i][j]);
		}
		printf("\n\n");
	}

	
do{
	printf("\n\n\nIngrese 1, para mostrar el promedio de ventas por dia y que dia hubo menos ventas.");
	printf("\nIngrese 2, para mostrar el total de ventas por vendedor y que dia cada vendedor tuvo mas ventas.");
	printf("\nIngrese 3, para mostrar el diagonal principal, maximo valor de la matriz y posiciones de memoria.");
	printf("\nIngrese 4, para mostrar");
	printf("\n\nIngrese la opcion:");
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
			printf("\n\nDel dia %d el promedio es de: %f", i + 1, prom_dia);
		}
		
		printf("\n\nEl dia de menor ventas es el: %d", i_min);
	
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
			printf("\n\nDel vendedor %d llamado %s tuvo mas ventas en el dia %d", j + 1, vendedores[j], i_max);
			printf(" Y ese mismo vendedor tuvo un total de %d de ventas", acum_vende);
		}
		
	break;
	
	case 3:
		for(i=0; i < N; i++){
			for(j=0; j < N; j++){
				if(i==j){
					traza = traza + ventas[i][j];
				}
				if((i==0 && j==0) || ventas[i][j] > max){
					max = ventas[i][j];
					i_posiMax = i;
					j_posiMax = j;
				}				
			}
		}
		
		printf("\n\nEl valor de la diagonal principal de la matriz es de: %d", traza);
		printf("\n\nEl maximo valor de la matriz encontrado es de: %d\nY corresponde a la posicion i %d, j %d.", max, i_posiMax, j_posiMax);
		
	break;
	
	case 4:
		for(j=0; j < N; j++){
			for(i=0; i < N; i++){
			acum_vende = acum_vende + ventas[i][j];
			}
			if(acum_vende > 3000){
					cont_vendeMas3000 = cont_vendeMas3000 + 1;
			}
			acum_vende=0;
		}
		
		porc_vendeMas3000 = (cont_vendeMas3000 * 100) / N;
		printf("\n\nEl porcentaje de vendedores que vendieron mas de 3000 productos es de: %f", porc_vendeMas3000);
	
	break;
	
	default:
		printf("\n\n\nCosas\n\n\n");
	break;
	


}
}
while(opc > 0 && opc < 5);
	
	
	
	
	
	
	
}
