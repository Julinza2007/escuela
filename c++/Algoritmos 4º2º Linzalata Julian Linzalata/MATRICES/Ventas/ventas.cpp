/*
Un negocio de ropa registra las ventas de 3 vendedores durante 3 dias.
Mostrar mediante un menu:
1. Total vendido por vendedor, y que vendedor vendio menos
2. Total vendido durante cada dia, y que dia se vendio mas
3. Por dia, mostrar que vendedor vendio mas y cuanto vendio
4. Porcentaje de los dias en los que las ventas superaron los 20000
5. Maximo valor de la matriz, posiciones de memoria, y diagonal principal

*/

#include <stdio.h>
int i, j, N=3, opc, ventas[3][3], acum_vendedor, min_vendedor, j_minVendedor,
acum_dia, max_dia, i_maxDia, j_maxVendXdia, max_vendXdia, max, i_posiMax, j_posiMax, acum_traza;
float cont_mas20000=0, porc_mas20000; // i dia, vendedor j. 


main(){
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese del dia %d, el vendedor %d: ", i + 1, j + 1);
			scanf("%d", &ventas[i][j]);
		}
		printf("\n\n");		
	}
do{
	printf("\n\n\nIngrese 1, para mostrar el total vendido por vendedor, y que vendedor vendio menos.");
	printf("\n\nIngrese 2, para mostrar el total vendido durante cada dia, y que dia se vendio mas.");
	printf("\n\nIngrese 3, para mostrar por dia que vendedor vendio mas y cuanto vendio.");
	printf("\n\nIngrese 4, para mostrar porcentaje de los dias en los que las ventas superaron los 20000 cosas");
	printf("\n\nIngrese 5, para mostrar: El maximo valor de la matriz con las posiciones de memoria, y mostrar la diagonal principal.");
	printf("\n\nIngrese la opcion: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			for(j=0; j < N; j++){
				for(i=0; i < N; i++){
					acum_vendedor= acum_vendedor + ventas[i][j];
				}
				if(j==0 || acum_vendedor < min_vendedor){
					min_vendedor = acum_vendedor;
					j_minVendedor = j + 1;
				}
				
				printf("\nEl total de ventas del vendedor %d, es: %d", j + 1, acum_vendedor);
				acum_vendedor=0;
			}
			
			printf("\nEl vendedor %d es el que tiene menos ventas con: %d", j_minVendedor, min_vendedor);
			
		break;
		
		case 2: 
		
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_dia = acum_dia + ventas[i][j];
				}
				if(i==0 || acum_dia > max_dia){
					max_dia = acum_dia;
					i_maxDia = i + 1;
				}
				printf("\nEl total de ventas del dia %d, es: %d", i + 1, acum_dia);
				acum_dia = 0;
			}
			printf("\nEl vendedor %d, es el que tiene mas ventas con: %d", i_maxDia, i_maxDia);
		
		break;
		
		case 3:
			
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if(j==0 || ventas[i][j] > max_vendXdia){
						max_vendXdia = ventas[i][j];
						j_maxVendXdia = j + 1;
					}
				}
				printf("\nEl vendedor %d fue el que vendio mas, con: %d", j_maxVendXdia, max_vendXdia);
			}
			
			break;
			
		case 4:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if(ventas[i][j] > 20000){
						cont_mas20000 = cont_mas20000 + 1;
					}
				}
			}
			
			porc_mas20000 = (cont_mas20000 * 100) / N;
			printf("\nEl porcentaje de los dias en los que las ventas superaron los 20000 es de: %f", porc_mas20000);
			
		break;
		
		case 5:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if((i==0 && j == 0) || ventas[i][j] > max){
						max = ventas[i][j];
						i_posiMax = i;
						j_posiMax = j;
					}
					
					if(i==j){
						acum_traza = acum_traza + ventas[i][j];
					}
				}
			}
		
			printf("\n\nEl valor maximo de la matriz encontrado es de: %d, y corresponde a la posicion i %d, y j %d", max, i_posiMax, j_posiMax);
			printf("\n\nEl valor de la diagonal principal es de: %d", acum_traza);
		
		break;
		
		default: printf("\n\nTermino.");
		
		break;
		
		
		
	}
}
	while(opc < 6  && opc > 0);
	
}
 

