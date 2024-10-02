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
int i, tipo, tipo_min, d, i_total;
float service, cont_parti=0, cont_comer=0, acum_comer, service_min, cont_mas200000=0, cont_partiMas200000=0, porc_parti, 
porc_partiMas200000, prom_comer, acum_service, montoTotal, service_max, cont_totalMas600000=0, prom_serviceTotal, porc_partiTotal,
porc_totalMas600000;

main(){
	
	for(d=0; d < 5; d++){
	printf("\nIngrese del service numero %d, el tipo del vehiculo.\nSi es particular ingrese 1.\nSi es comercial ingrese 2.\n ", i + 1);
	scanf("%d", &tipo);
	while(tipo < 0 || tipo > 2){
		printf("Error, ingrese de nuevo: ");
		scanf("%d", &tipo);
	}
	
	while(tipo != 0){
		printf("Ingrese el precio del mantenimiento del service: ");
		scanf("%f", &service);
		
		acum_service = acum_service + service;
		montoTotal = montoTotal + service;
		
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
		
		if(i == 0 || service > service_max){
			service_max = service;
		}
		
		if(service > 200000){
			cont_mas200000 = cont_mas200000 + 1;
			
			if(tipo == 1){
				cont_partiMas200000 = cont_partiMas200000 + 1;
			}
		}
		i++;
		i_total++;
		
		printf("\n\nIngrese del service numero %d, el tipo del vehiculo.\nSi es particular ingrese 1.\nSi es comercial ingrese 2.\n ", i + 1);
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
	
	if(montoTotal > 600000){
		cont_totalMas600000 = cont_totalMas600000 + 1;
	}
		
	printf("\n\n\nEn el dia %d se registro:", d + 1);
	printf("\n\nEl porcentaje de autos particulares es de: %f", porc_parti);
	printf("\n\nEl valor promedio del service en autos comerciales es de: %f$", prom_comer);
	printf("\n\nEl service mas barato es de %f$. ", service_min);
	if(tipo_min == 1){
		printf("Y corresponde a un auto particular");
	}
	else if(tipo_min == 2){
		printf("Y corresponde a un auto comercial");
	}
	printf("\n\nDentro de los services que superaron los 200000$, el porcentaje de autos particulares es de: %f", porc_partiMas200000);

	i=0;
	montoTotal=0;
	tipo=0;
	porc_parti=0;
	cont_comer=0;
	acum_comer=0;
	prom_comer=0;
	cont_mas200000=0;
	cont_partiMas200000=0;
	porc_partiMas200000=0;
			
}


	if(i_total != 0){
	prom_serviceTotal = acum_service / i_total;
	}
	else{
		prom_serviceTotal = 0;
	}
	
	if(i_total != 0){
	porc_partiTotal = (cont_parti * 100) / i_total;
	}
	else{
		porc_partiTotal = 0;		
	}	
	
	porc_totalMas600000 = (cont_totalMas600000 * 100) / 5;
	
printf("\n\n\nEntre todos los dias se registro:");
		
printf("\n\nEl valor minimo del service es de %f$", service_min);
printf(" Y el valor maximo del service es de: %f", service_max);		
printf("\n\nEl valor de la atencion promedio es de: %f$", prom_serviceTotal);		
printf("\n\nEl porcentaje de autos particulares total es de: %f", porc_partiTotal);		
printf("\n\nEl porcentaje de los dias en el que la facturacion supero a los 600000$ es de: %f", porc_totalMas600000);		
}