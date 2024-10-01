/*
Realizar un programa para procesar los gastos de una persona. Puede ser que no tenga gastos ese dia y se dispone de un presupuesto diario de 5000.
Mostrar:
1) Gasto maximo y que numero de operacion fue
2) Porcentaje de los gastos mayores 1000
3) Promedio entre los gastos menores a 1000
4) Gasto promedio por operacion

Finaliza el programa al ingresar 0 como gasto. Repetir lo anterior para 5 dias habiles y mostrar:

1) Promedio de gasto por dia
2) Que dia se gasto menos
3) Porcentaje de los dias en los que el gasto total supero los 2500 pesos
*/

#include <stdio.h>
int i=0, indice_max, d, dia_gastoMin;
float total, gasto, gasto_max, cont_gastoMas1000=0, porc_gastoMas1000, cont_gastoMenos1000=0, acum_gastoMenos1000, prom_gastoMenos1000, acum_gasto, promedio,
gastoTotal, cont_gastoTotalMas2500=0, acum_gastoXdia, gastoXdiaMin, prom_gastoXdia, porc_gastoTotalMas2500;
main(){
	for(d=0; d < 5; d++){
	total=5000;
	if(d > 0){
	printf("\n\n\nDia %d", d + 1);
	}
	else if(d == 0){
	printf("Dia %d", d + 1);
	}
	printf("\n\nEl total actual es de: %f\n", total);
	printf("\nIngrese de la operacion numero %d el gasto: ", i + 1);
	scanf("%f", &gasto);
	while(gasto < 0 || gasto > total){
		printf("\nError en el gasto. Ingrese de nuevo: ");
		scanf("%f", &gasto);
	}	
	
	while(total > 0 && gasto != 0){
		total= total - gasto;
		gastoTotal = gastoTotal + gasto;
		
		if(gastoTotal > 2500){
			cont_gastoTotalMas2500 = cont_gastoTotalMas2500 + 1;
		}
		
		if(i == 0 || gasto > gasto_max){
			gasto_max = gasto;
			indice_max = i + 1;
		}
		
		if(gasto > 1000){
			cont_gastoMas1000 = cont_gastoMas1000 + 1;
		}
		
		else if(gasto < 1000){
			cont_gastoMenos1000 = cont_gastoMenos1000 + 1;
			acum_gastoMenos1000 = acum_gastoMenos1000 + gasto;
		}
		
		acum_gasto = acum_gasto + gasto;		
	
	i++;
	if(total != 0){
		printf("\nEl total actual es de: %f\n", total);
		printf("\nIngrese de la operacion numero %d el gasto: ", i + 1);
		scanf("%f", &gasto);
		while(gasto < 0 || gasto > total){
			printf("\nError en el gasto. Ingrese de nuevo: ");
			scanf("%f", &gasto);
		}
	}	
}
	
	if(i != 0){
	porc_gastoMas1000 = (cont_gastoMas1000 * 100) / i;
	}
	else{
		porc_gastoMas1000 = 0;
	}
	
	if(cont_gastoMenos1000 != 0){
	prom_gastoMenos1000 = acum_gastoMenos1000 / cont_gastoMenos1000;
	}
	else{
		prom_gastoMenos1000 = 0;
	}
	
	if(i != 0){
	promedio = acum_gasto / i;
	}
	else{
		promedio = 0;
	}

printf("\nDel dia numero %d se registro:" , d + 1);
printf("\n\nEl gasto maximo fue de %f$ y corresponde a la operacion numero: %d", gasto_max, indice_max);	
printf("\n\nEl porcentaje de los gastos mayores a 1000$ es de: %f", porc_gastoMas1000);
printf("\n\nEl promedio entre los gastos menores a 1000$ es de: %f$", prom_gastoMenos1000);
printf("\n\nEl gasto promedio por operacion es de: %f$", promedio);

acum_gastoXdia = acum_gastoXdia + gastoTotal;

if(d == 0 || gastoTotal < gastoXdiaMin){
	gastoXdiaMin = gastoTotal;
	dia_gastoMin = d + 1;
}

i=0;
gastoTotal = 0;
gasto_max=0;
indice_max=0;
porc_gastoMas1000=0;
prom_gastoMenos1000=0;
promedio=0;
}


prom_gastoXdia = acum_gastoXdia / 5;
porc_gastoTotalMas2500 = (cont_gastoTotalMas2500 * 100) / 5;

printf("\n\n\nEntre todos los dias se registro:");
printf("\n\nEl promedio de gasto por dia es de: %f$", prom_gastoXdia);
printf("\n\nEl dia en el que menos se gasto fue el dia numero %d", dia_gastoMin);
printf("\n\nEl porcentaje de los dias en el que el gasto total supera los 2500$ es de: %f", porc_gastoTotalMas2500);
}