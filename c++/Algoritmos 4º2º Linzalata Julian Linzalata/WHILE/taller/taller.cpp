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
int vehiculo, 
float service

main(){
	
	for(d=0; d < 5; d++){
		
	printf("Ingrese del service numero %d el tipo de vehiculo:\n1.Si es particular.\n2. Si es comercial.\n", i + 1);
	scanf("%d", &vehiculo);
	while(vehiculo < 0 || vehiculo > 2){
		printf("Error de julinza 404. Por favor ingrese de nuevo: ");
		scanf("%d", &vehiculo);
	}
	
	while(vehiculo != 0 && i < 10){
		printf("Ingrese de ese service el valor: ");
		scanf("%f", &service);
		while(service < 0){
			printf("Error de julinza 2007. Por favor ingrese de nuevo");
		}
		
		if(vehiculo == 1){
			cont_parti = cont_parti + 1;
		}
		else if(vehiculo == 2){
			cont_comer = cont_comer + 1;
			acum_service = acum_service + service;
		}
		
		if(i == 0 || service < service_minConTipo){
			service = service_minConTipo;
			min_vehiculo = vehiculo;
		}
		
		if(i == 0 || service < service_min){
			service = service_min;
		}
		
		if(i == 0 || service > service_max){
			service = max;
		}
		
		if(service > 200000){
			cont_mas200000 = cont_mas200000 + 1;
			if(vehiculo == 1){
				cont_mas200000Parti = cont_mas200000Parti + 1;
			}
		}
		
		acum_service = acum_service + service;
		
		i++;
		i_total++;
		
	printf("Ingrese del service numero %d el tipo de vehiculo:\n1.Si es particular.\n2. Si es comercial.\n", i + 1);
	scanf("%d", &vehiculo);
	
	while(vehiculo < 0 || vehiculo > 2){
		printf("Error de julinza 404. Por favor ingrese de nuevo: ");
		scanf("%d", &vehiculo);
	}
	
	}
	
	acum_parti = acum_parti + cont_parti;
	
	
	// Parte 1
	if(i != 0){
	porc_parti = (cont_parti * 100) / i;
	}
	else{
		porc_parti = 0;
	}

	if(cont_comer != 0){
	prom_comer = acum_comer / cont_comer
	}
	else{
	prom_comer =0;	
	}
	
	if(cont_mas200000){
	porc_mas200000Parti = (cont_mas200000Parti * 100) / cont_mas200000;
	}
	else{
		porc_mas200000Parti = 0;
	}
printf("")
}

		// Parte 2
	if(i_total != 0){
	prom_service = acum_service / i_total; // Se muestra al final
	}
	else{
		prom_service = 0;
	}

	if(i_total != 0){
	porc_parti = (acum_parti * 100) / i_total;
	}
	else{
		porc_parti = 0;
	}	
	

printf("")
printf("")
printf("")
printf("")
}

