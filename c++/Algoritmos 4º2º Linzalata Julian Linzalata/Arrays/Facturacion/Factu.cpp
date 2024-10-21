/*
Se almacena en un vector los totales facturados en un negocio en 5 días. La posición de memoria corresponde al día.
Informar:
1. Porcentaje de los días en que se facturó más de $3500.
2. Días en los cuales la facturación superó al promiedo.
3. Día de menor facturación.
4. Promiedo entre los días en los que la facturación fue mayor a $10000.
5. Si hubo algún día en donde la facturación haya sido $1234. En caso informativo, informar que día fue.
*/
#include <stdio.h>
int i, N=5;
float facturacion[5], cont_mas3500=0, porc_mas3500=0, acum=0, promedio=0, cont_mayor_prom=0, factu_min=0, dia_factuMin=0, cont_mas10000=0, acum_mas10000=0, promedio_mas10000=0, factu_justo=0; 
main(){
	printf("Bienvenido al programa de facturacion de la pizzeria A LA LINZALATA\n");
	for(i=0; i<N; i++){
		printf("\nIngrese el valor de la facturacion para el dia numero %d ", i + 1);
		scanf("%f", &facturacion[i]);
		
		if(facturacion[i] > 3500){
			cont_mas3500 = cont_mas3500 + 1;
			if(facturacion[i] > 10000){
		cont_mas10000 = cont_mas10000 + 1;
		acum_mas10000 = acum_mas10000 + facturacion[i];
	}
		}
		if(facturacion[i] == 1234){
			factu_justo = i + 1;
			}
		
		acum = acum + facturacion[i];
		
		if(i==0 || facturacion[i] < factu_min){
			factu_min = factu_min + facturacion[i];
			dia_factuMin = i;
		}		
	}	
	porc_mas3500 = (cont_mas3500 * 100) / N;
	promedio = acum / N;
	promedio_mas10000 = acum_mas10000 / cont_mas10000;
	
	for(i=0; i<N; i++){
		if(facturacion[i] > promedio){
			cont_mayor_prom = cont_mayor_prom + 1;
		}
	}
	
	printf("\n\nEl porcentaje de los dias en los que se facturo mas de $3500 es de: %f", porc_mas3500);
	printf("\n\nLa cantidad de dias en los cuales la facturacion supero al promedio es de: %f", cont_mayor_prom);
	printf("\n\nEl dia de menor facturacion fue el dia numero: %f", dia_factuMin);
	printf("\n\nEl promedio entre los dias en los que la facturacion fue mayor a $10000 es de: %f", promedio_mas10000);
	if(factu_justo == 0){
		printf("\n\nNo se encontro ningun dia en el que la facturacion sea de $1234");
	}
	else{
		printf("\n\nEl dia en el que la facturacion fue exactamente de $1234 fue: %f", factu_justo);
	}
}
