/*
Una agencia de turismo vende paquetes para viajes nacionales e internacionales. Se leen la cantidad de dias que desea viajar el cliente junto con las personas que viajan.
Mostrar:
1.	Porcentaje de viajes internacionales.
2.	Promedio de personas que viajan a destinos nacionales.
3.	Dentro de los viajes en los que viajan 3 personas o mas, que porcentaje fue a cada destino.
4.	Dentro de los que viajan mas de 7 dias, cual es el rango de personas (minimo y maximo) y a que destino van.	
5.	Que destino eligieron los que viajan mas dias.
Puede ser que no haya consultas y finaliza el programa al ingresar 0 como destino. Como maximo, se pueden realizar 20 consultas.
*/

#include <stdio.h>
int i=0, N=20, opc_viaje, min_perso, min_viaje, max_perso, 
float dias, personas, cont_nacio=0, acum_nacio=0, cont_inter=0, cont_masde3=0, cont_nacioMasde3=0, cont_interMasde3=0, cont_masDe7dias=0, 
main(){
	
	printf("Ingrese de la consulta numero %d el destino.\n1. Para destino nacional.\n 2. Para destino internacional.\n", i);
	scanf("%d", &opc_viaje);
	while(i < N && opc_viaje != 0){
	printf("Ingrese la cantidad de dias: ");
	scanf("%f", &dias);
	printf("Ingrese la cantidad de personas: ");
	scanf("%f", personas);
	
		if(opc_viaje == 1){
			cont_nacio = cont_nacio + 1;
			acum_nacio = acum_nacio + personas;
		}
	
		else if(opc_viaje == 2){
			cont_inter = cont_inter + 1;
		}
		
		if(personas >= 3){
			cont_masde3 = cont_masde3 + 1;
			if(opc_viaje == 1){
				cont_nacioMasde3 = cont_nacioMasde3 + 1;
			}
			else if(opc_viaje == 2){
				cont_interMasde3 = cont_interMasde3 + 1;
			}
		}
		
		if(dias > 7){
			cont_masDe7dias = cont_masDe7dias + 1;
			
			if(cont_masde7dias == 0 || personas < min_perso){
				min_perso = personas;
				min_viaje = opc_viaje;
			}
			
			if(cont_masde7dias == 0 || personas > max_perso){
				max_perso = personas;
				max_viaje = opc_viaje;
			}
		}
		
		if(i==0 || dias > max_dias){
			max_dias = dias;
			max_viajeDias = opc_viaje;
			
		}
		
	i++;
	
	printf("Ingrese de la consulta numero %d el destino.\n1. Para destino nacional.\n 2. Para destino internacional.\n", i);
	scanf("%d", &opc_viaje);
	}
	
	if(i != 0){
	porc_inter = (cont_inter * 100) / i;
	}
	else{
		porc_inter = 0;
	}
	if(cont_nacio != 0){
	prom_nacio = acum_nacio / cont_nacio;
	}
	else{
		prom_nacio = 0;
	}
	
	if(cont_masDe7dias != 0){
	porc_nacioMasde3 = (cont_nacioMasde3 * 100) / cont_masDe7dias;
	}
	else{
		porc_nacioMasde3 = 0;
	}
	
	if(cont_masDe7dias != 0){
	porc_interMasde3 = (cont_interMasde3 * 100) / cont_masDe7dias;
	}
	else{
		porc_interMasde3 = 0;
	}
	
	printf("\n\nEl porcentaje de viajes de viajes internacionales es de: %f", porc_inter);
	printf("\n\nEl promedio de personas que viajan a destinos nacionales es de: %f", prom_nacio);
	printf("\n\nDentro de los viajes en los que viajan 3 personas o mas el porcentaje de personas que fue a un viaje nacional es: %f.\nY el porcentaje de personas que fue a un viaje internacional es: %f", porc_nacioMasde3, porc_interMasde3);
	printf("\n\nDentro de los que viajan mas de 7 dias, el minimo de personas es de: %d. ", min_perso);
	if(min_viaje == 1){
	printf("Con destino nacional");
	}
	else if(min_viaje == 2){
	printf("Con destino internacional");
	}
	printf("\nY el maximo de personas es de: %d.", max_perso);
	if(max_viaje == 1){
	printf("Con destino nacional");
	}
	else if(max_viaje == 2){
	printf("Con destino internacional");
	}
	printf("\n\nEl destino con mas dias viajados es el: %f", max_dias);
	if(max_viajeDias == 1){
		printf("Con destino nacional.");
	}
	else if(max_viajeDias == 2){
		printf("Con destino internacional.");
	}
	
	
}
