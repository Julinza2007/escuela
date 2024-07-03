/*Realizar un programa que lea si una persona trabaja estudia o ambas, y cuanto gasta en transporte por dia. Realizar esto para 10 personas.
Informar:
1. Promedio de gasto de las personas que trabajan.
2. Porcentaje de las personas que solo estudian.
3. Promedio de gastos de las personas que estudian y trabajan.
4. Gasto máximo y mínimo y que actividad realizan.
5. Porcentaje dentro de los que gastan más de $1000 pesos, que solo estudian.
*/

#include <stdio.h>
int i, N=3, opcion, /*4*/opc_max, /*4*/opc_min; 
float gasto, /*1*/cont_trabajo=0, /*1*/acum_gasto=0, /*1*/prom_trab=0, /*2*/cont_estudio=0,	/*2*/porc_estu=0, /*3*/cont_amb=0, /*3*/acum_amb=0, /*3*/prom_amb=0, /*4*/gasto_max=0, /*4*/gasto_min=0, /*5*/cont_estu_gast=0, /*5*/porc_estu_gast=0;
main(){
	printf("Bienvenido al programa calculador de si una persona trabaja, estudia o ambas y cuanto gasta en transporte.\n");
	for(i=0; i < N; i++){		
		
	printf("\nCual es la situacion de la persona numero %d.\n  Si trabaja ingrese 1.\n  Si estudia ingrese 2.\n  Si hace ambas ingrese 3.\n ", i);
	scanf("%d", &opcion);
	printf("Ingrese el gasto en transporte diario: $");
	scanf("%f", &gasto);
	
	if(opcion == 1 || opcion == 3){
		cont_trabajo = cont_trabajo + 1;
		acum_gasto = acum_gasto + gasto;
		if(opcion == 3){
		cont_amb = cont_amb + 1;
		acum_amb = acum_amb + gasto;				
	}
	}
	
	else if(opcion == 2){
		cont_estudio = cont_estudio + 1;
		if(gasto > 1000){
			cont_estu_gast = cont_estu_gast + 1;
		}
	}
	
	
	if(i==0 || gasto > gasto_max){
		gasto_max = gasto;
		opc_max = opcion;
	}
	
	if(i==0 || gasto < gasto_min){
	gasto_min = gasto;
	opc_min = opcion;
	}
	}
	
	/*1*/ if(cont_trabajo > 0){
		  prom_trab = acum_gasto / cont_trabajo;
	}
			else{
			prom_trab = 0;
			}
	/*2*/ porc_estu = (cont_estudio * 100) / N;
	
	/*3*/if(cont_amb > 0){
		  prom_amb = acum_amb / cont_amb;
	}
		else{
			prom_amb = 0;
		}
	/*5*/if(cont_estudio > 0){
	 	porc_estu_gast = (cont_estu_gast * 100) / cont_estudio;
	}
	else{
		porc_estu_gast=0;
	}
	/*SALIDAS*/
	printf("\nEl promedio de gasto de las personas que trabajan es de: $%f", prom_trab);
	printf("\nEl porcentaje de las personas que solo estudian es de: %f", porc_estu);
	printf("\nEl promedio de gastos de las personas que estudian y trabajan es de: $%f", prom_amb);
	printf("\nEl gasto maximo que se encontro entre las personas es de: $%f", gasto_max);
	if(opc_max == 1){
		printf(" Y este mismo solo trabaja");
	}
	else if(opc_max == 2){
		printf(" Y este mismo solo estudia");
	}
	else if(opc_max == 3){
		printf(" Y este mismo estudia y trabaja.");
	}
	printf("\nEl gasto minimo de las personas que se encontro fue de %f", gasto_min);
	if(opc_min == 1){
		printf(" Y este mismo solo trabaja");
	}
	else if(opc_min == 2){
		printf(" Y este mismo solo estudia");
	}
	else if(opc_min == 3){
		printf(" Y este mismo estudia y trabaja");
	}		
	printf("\nEl porcentaje de las personas que solo estudian que gastan mas de 1000 pesos es de: %f", porc_estu_gast);
		
		
}


