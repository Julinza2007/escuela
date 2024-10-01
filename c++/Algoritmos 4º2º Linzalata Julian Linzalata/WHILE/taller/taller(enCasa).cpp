/*
Se desean procesar los datos de los vehículos que ingresan a un taller durante 5 días.
Por día mostrar:
1.	Porcentaje de autos particulares.
2.	Valor promedio de la atención a autos comerciales.	
3.	Costo del service mas barato y a que tipo de vehículo fue.
4.	Dentro de los servicios que superaron los $200000, ¿cuántos corresponden a particulares? Expresar en porcentaje.

Por cada cliente se leen, el precio del servicio y si el auto es particular o comercial. Puede ser que no haya clientes. 
Entre todos los dias, Mostrar:
1.	Valores de los services minimos y máximos
2.	Valor de atencion promedio
3.	Porcentaje de autos particulares.
4.  Porcentaje de los dias en los que la facturacion superó los $600000.

Finaliza la carga del día al ingresar 0 como auto.
*/

#include <stdio.h>
int i, tipo, tipo_min, d;
float service, cont_parti=0, cont_comer=0, acum_comer, service_min, cont_mas200000=0, cont_partiMas200000=0, porc_parti, 
porc_partiMas200000, prom_comer;

main(){
	
	for(d=0; d < 5; d++){
	printf("\nIngrese del service numero %d, el tipo del vehiculo.\nSi es particular ingrese 1.\nSi es comercial ingrese 2.\n ", i);
	scanf("%d", &tipo);
	while(tipo < 0 || tipo > 2){
		printf("Error, ingrese de nuevo: ");
		scanf("%d", &tipo);
	}
	
	while(tipo != 0){
		printf("Ingrese el precio del mantenimiento del service: ");
		scanf("%f", &service);
		
		if(tipo == 1){
			cont_parti = cont_parti + 1;
		}
		
		else if(tipo == 2){
			cont_comer = cont_comer + 1;
			acum_comer = acum_comer + service;
		}
		
		if(i == 0 || service < service_min){
			service_min = service;
			tipo_min = tipo;
		}
		
		if(service > 200000){
			cont_mas200000 = cont_mas200000 + 1;
			
			if(tipo == 1){
				cont_partiMas200000 = cont_partiMas200000 + 1;
			}
		}
		i++;
		
		printf("\nIngrese del service numero %d, el tipo del vehiculo.\nSi es particular ingrese 1.\nSi es comercial ingrese 2.\n ", i);
		scanf("%d", &tipo);	
		while(tipo < 0 || tipo > 2){
			printf("\nError, ingrese de nuevo: ");
			scanf("%d", &tipo);
		}
				
	}
	
	if(i != 0){
	porc_parti = (cont_parti * 100) / i;
	}
	else{
		porc_parti = 0;		
	}
	
	if(cont_comer != 0){
	prom_comer = acum_comer / cont_comer;
	}
	else{
		prom_comer = 0;
	}
	
	if(cont_mas200000 != 0){
	porc_partiMas200000 = (cont_partiMas200000 * 100) / cont_mas200000;
	}
	else{
		porc_partiMas200000 = 0;
	}
	
	printf("\n\nEl porcentaje de autos particulares es de: %f", porc_parti);
	printf("\n\nEl valor promedio del service en autos comerciales es de: %f$", prom_comer);
	printf("\n\nEl service mas barato es de %f$ y corresponde al service numero %d", service_min, tipo_min);
	printf("\n\nDentro de los services que superaron los 200000$, el porcentaje de autos particulares es de: %f", porc_partiMas200000);
		

}
		
printf("\n\n")		
printf("\n\n")		
printf("\n\n")		
printf("\n\n")		
		
		
}