/*
Una concesionaria tiene 4 sucursarles y vende 4 modelos de autos diferentes. 
Mostrar mediante un menu:
1. Total de autos vendidos por sucursal. Y que sucursal vendio mas autos
2. Promedio por modelo. Y en que sucursal se vendieron menos unidades de cada modelo.
3. Traza, minimo valor de la matriz y posiciones de memoria.
4. Que porcentaje de las sucursales vendieron mas de 200 autos en total.
*/

#include <stdio.h>
int i, j, N=4, autos[4][4], acum_traza, autos_min, posi_iMin, posi_jMin, sucuMin, sucuMax, i_max, i_min;
float acum_sucu, acum_auto, prom_auto, cont_sucuMas200=0, porc_sucuMas200;
main(){
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Ingrese de la sucursal numero %d, numero de auto %d: ", i + 1, j + 1);
			scanf("%d", &autos[i][j]);	
			while(autos[i][j] < 0){
				printf("Error, ingrese de nuevo: ");
				scanf("%d", &autos[i][j]);	
			}
			
			if(i == j){
				acum_traza = acum_traza + autos[i][j];
			}
			
			if(i == 0 && j == 0 || autos[i][j] < autos_min){
				autos_min = autos[i][j];
				posi_iMin = i + 1;
				posi_jMin = j + 1;
			}
		}
				printf("\n\n");
		
	}
	
	
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			acum_sucu = acum_sucu + autos[i][j];
		}
		if(acum_sucu > 200){
			cont_sucuMas200 = cont_sucuMas200 + 1;
		}
		if(i==0 || acum_sucu > sucuMax){
			sucuMax = acum_sucu;
			i_max = i + 1;
		}
		
		printf("\nEl total de autos vendidos en la sucursal %d es: %d", i + 1, acum_sucu);
		acum_sucu = 0;
	}
	
	for(j=0; j < N; j++){
		for(i=0; i < N; i++){
			acum_auto = acum_auto + autos[i][j];
			
			if(i==0 || autos[i][j] < sucuMin){
				sucuMin = autos[i][j];
				i_min = i + 1;
			}
			
		}
		prom_auto = acum_auto / N;
		printf("\n\nEl promedio del modelo %d es: %f", j + 1, prom_auto);
		acum_auto = 0;
		
	}
	
	porc_sucuMas200 = (cont_sucuMas200 * 100) / N;
	
	printf("\n\nLa sucursal que vendio mas autos, con %d autos, es la sucursal numero %d", sucuMax, i_max);
	printf("\n\nLa sucursal en la que se vendieron menos unidades, con %d modelos, es la sucursal numero %d", sucuMin, i_min);
	printf("\n\nEl valor de la traza es igual a: %f", acum_traza);
	printf("\n\nEl minimo valor de la matriz es de %f autos, y corresponde a la sucursal numero %d y al modelo %d", autos_min, posi_iMin, posi_jMin);
		printf("\n\n\nPosiciones de memoria:\n\n");
	for(i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Sucursal %d, modelo %d: |%d| ", i, j, autos[i][j]);
		}        
		printf("\n\n");
	}
	
	printf("\n\nEl porcentaje de las sucursales que vendieron mas de 200 autos en total es de: %f", porc_sucuMas200);
}
