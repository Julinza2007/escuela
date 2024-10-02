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
int i=0, tipo, tipo_min, d, i_total=0;
float precio, cont_parti=0, porc_parti=0, cont_comer=0, acum_comer, prom_comer, precio_min, cont_mas200000=0, cont_partiMas200000=0, porc_partiMas200000,
acum_precio, monto_totalXdia, cont_partiTotal=0, precio_max, cont_factuMas600000=0, promTotal, porc_partiTotal, porc_factuMas600000;

main(){
	
	for(d=0; d < 5; d++){	
	printf("\n\nIngrese del service numero %d el tipo de auto.\n1. Si es particular.\n2. Si es comercial.\n", i + 1);
	scanf("%d", &tipo);
	while(tipo < 0 || tipo > 2){
		printf("Error, ingrese de nuevo: ");
		scanf("%d", &tipo);
	}
	
	while(tipo != 0){
		printf("Ingrese el precio del service: ");
		scanf("%f", &precio);
		while(precio < 0){
			printf("Error, ingrese de nuevo: ");
			scanf("%f", &precio);
		}
		
		acum_precio = acum_precio + precio;
		monto_totalXdia = monto_totalXdia + precio;
		
		if(tipo == 1){
			cont_parti = cont_parti + 1;
			cont_partiTotal = cont_partiTotal + 1;
		}
		
		else if(tipo == 2){
			cont_comer = cont_comer + 1;
			acum_comer = acum_comer + precio;
		}
		
		if(i == 0 || precio < precio_min){
			precio_min = precio;
			tipo_min = tipo;
		}
		
		if(i == 0 || precio > precio_max){
			precio_max = precio;
		}
		
		if(precio > 200000){
			cont_mas200000 = cont_mas200000 + 1;
			if(tipo == 1){
				cont_partiMas200000 = cont_partiMas200000 + 1;
			}
		}
		
		i++;
		i_total++;
		
	printf("\n\nIngrese del service numero %d el tipo de auto.\n1. Si es particular.\n2. Si es comercial.\n", i + 1);
	scanf("%d", &tipo);
	while(tipo < 0 || tipo > 2){
		printf("Error, ingrese de nuevo: ");
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
	
	if(monto_totalXdia > 600000){
		cont_factuMas600000 = cont_factuMas600000 + 1;
	}
	
	printf("\n\n\nEn el dia numero %d se registro: ", d + 1);
	printf("\n\nEl porcentaje de los autos particulares es de: %f", porc_parti);
	printf("\n\nEl valor promedio de atencion en los autos comerciales es de: %f$.", prom_comer);
	printf("\n\nEl service mas barato salio %f$. ", precio_min);
	if(tipo_min == 1){
	printf("Y coresponde a un auto particular.");
	}
	else if(tipo_min == 2){
	printf("Y corresponde a un auto comercial.");
	}
	printf("\n\nDentro de los services que superaron los 200000$, el porcentaje de autos particulares es de: %f", porc_partiMas200000);
	
	i=0;
	precio=0;
	cont_parti=0;
	porc_parti=0;
	cont_comer=0;
	acum_comer=0;
	prom_comer=0;
	cont_mas200000=0;
	cont_partiMas200000=0;
	porc_partiMas200000=0;
	monto_totalXdia=0;




}

if(i_total != 0){
promTotal = acum_precio / i_total;
}
else{
	promTotal = 0;
}

if(i_total != 0){
porc_partiTotal = (cont_partiTotal * 100) / i_total;
}
else{
	porc_partiTotal = 0;
}

porc_factuMas600000 = (cont_factuMas600000 * 100) / 5;


printf("\n\n\nDe entre todos los dias se registro: ");
printf("\n\nEl service minimo es de %f$, y el maximo es de %f$", precio_min, precio_max);
printf("\n\nEl valor de la atencion promedio es de: %f$", promTotal);
printf("\n\nEl porcentaje de autos particulares es de: %f", porc_partiTotal);
printf("\n\nEl porcentaje de los dias en los que la facturacion supero los 600000$ es de: %f", porc_factuMas600000);
	
}