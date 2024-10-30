/*
Una concesionaria tiene 4 sucursarles y vende 4 modelos de autos diferentes. 
Mostrar mediante un menu:
1. Total de autos vendidos por sucursal. Y que sucursal vendio mas autos
2. Promedio por modelo. Y en que sucursal se vendieron menos unidades de cada modelo.
3. Traza, minimo valor de la matriz y posiciones de memoria.
4. Que porcentaje de las sucursales vendieron mas de 200 autos en total.

JULIAN ACORDATE QUE TENES QUE PONER LOS SWITCHES DESPUES DE LOS PRINTF DE LAS CARGAS DE DATOS.
*/

#include <stdio.h>
int i, j, N=4, opc, ventas[4][4], acum_sucu, max_sucu, i_max, acum_model, min_sucu, i_min, 
acum_traza, min_matriz, posi_iMin, posi_jMin; // i sucursales, j modelos
float prom_model, cont_sucuMas200=0, porc_sucuMas200;
char modelos[3][12];

main(){
	for(j=0; j < N; j++){
		printf("Ingrese del modelo numero %d, el nombre: ", j + 1);
		scanf("%s", &modelos[j]);
	}
	
	printf("\n\n");
	
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese de la sucursal %d, del modelo %d llamado %s, la cantidad de ventas: ", i + 1, j + 1, modelos[j]);
			scanf("%d", &ventas[i][j]);
			while(ventas[i][j] < 0){
				printf("Error, ingrese de nuevo: ");
				scanf("%d", &ventas[i][j]);
			}
		}
		printf("\n\n");
	}
	
do{
	printf("\n\nIngrese 1, para mostrar el total de autos vendidos por sucursal. Y que sucursal vendio mas autos");
	printf("\nIngrese 2, para mostrar el promedio por modelo. Y en que sucursal se vendieron menos unidades de cada modelo.");
	printf("\nIngrese 3, para mostrar la traza, minimo valor de la matriz y posiciones de memoria.");
	printf("\nIngrese 4, para mostrar el porcentaje de las sucursales vendieron mas de 200 autos en total.");
	printf("\n\nIngrese opcion: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_sucu = acum_sucu + ventas[i][j];
				}
				if(i==0 || acum_sucu > max_sucu){
					max_sucu = acum_sucu;
					i_max = i + 1;
				}
				printf("\n\nLa sucursal %d, vendio en total %d autos", i + 1, acum_sucu);
				acum_sucu=0;
			}
			printf("\n\n\nLa sucursal numero %d fue la que vendio mas autos en total", i_max);
			
		break;
		
		case 2:
			for(j=0; j < N; j++){
				for(i=0; i < N; i++){
					acum_model = acum_model + ventas[i][j];
					if(i==0 || ventas[i][j] < min_sucu){
						min_sucu = ventas[i][j];
						i_min = i + 1;
					}
				}
				prom_model = acum_model / N;
				printf("\n\nDel modelo numero %d llamado %s, el promedio de ventas de autos es de: %f", j + 1, modelos[j], prom_model);
				printf("\nY de ese mismo modelo, la sucursal %d fue la que tuvo menos ventas de unidades", i_min);
				acum_model=0;
				min_sucu=0;
			}
		break;
		
		case 3:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					if(i==j){
						acum_traza = acum_traza + ventas[i][j];
					}
					if((i==0 && j==0) || ventas[i][j] < min_matriz){
						min_matriz = ventas[i][j];
						posi_iMin = i;
						posi_jMin = j;
					}
				}
			}
			
			printf("\n\nEl valor de la traza de la matriz es de: %d", acum_traza);
			printf("\n\nEl minimo valor encontrado de la matriz es de: %d.", min_matriz);
			printf(" Y corresponde a la posicion de memoria i %d, j %d", posi_iMin, posi_jMin);
			acum_traza=0;
			
		break;
		
		case 4:
			for(i=0; i < N; i++){
				for(j=0; j < N; j++){
					acum_sucu = acum_sucu + ventas[i][j];
				}
				if(acum_sucu > 200){
					cont_sucuMas200 = cont_sucuMas200 + 1;
				}
				acum_sucu=0;
			}
			porc_sucuMas200 = (cont_sucuMas200 * 100) / N;
			cont_sucuMas200 = 0;
			
			printf("\n\nEl porcentaje de sucursales que vendieron mas de 200 autos es de: %f", porc_sucuMas200);
		break;
		
		default:
			printf("\n\n\nTerminando programa...");
		break;	
		
		
	}
}while(opc > 0 && opc < 5);
	

	
	
	
	
}