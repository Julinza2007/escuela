/* Se desea llevar a cabo el resistro de ventas en un negocio. Por cada venta se ingresan: El codigo de producto (1 electronicos, 2 alimentos, 3 ropa) y el valor de
la venta. Continua la lectura hasta que se ingresa una venta con valor 0. Se realiza un maximo de 10 ventas. Mostrar:
1) Valor de la venta mas baja y su codigo de producto
2) Porcentaje de las ventas de ropa y valor de la mas cara
3) Precio promedio de alimentos
4) Dentro de los electronicos que porcentaje supero los 20000 pesos  
Puede ser que no se registren ventas.
Repetir esto para 3 sucursales e informar:
1) Monto total de envio por sucursal
2) Que sucursal vende mas
3) Rango de los productos vendidos y a que codigo pertenecen
*/

#include <stdio.h>
int i=0, codigo, codigo_min, s=0, codigo_max, sucu_max;
float precio, precio_min, cont_ropa=0, porc_ropa, ropaCara, cont_ali=0, acum_ali, prom_ali, cont_elec=0, cont_elecMas20000=0, porc_elecMas20000, montoTotal, precio_max, total_max;

main(){
	for(s=0; s < 3; s++){
	printf("Ingrese de la venta numero %d el valor: ", i + 1);
	scanf("%f", &precio);
	while(precio < 0){
		printf("Error, precio de venta no valido. Ingrese de nuevo por favor: ");
		scanf("%f", &precio);
	}
	
	while(precio !=0 && i < 10){
		printf("Ingrese el codigo de producto.\nIngrese 1 para electronicos.\nIngrese 2 para alimentos.\nIngrese 3 para ropa\n");+
		scanf("%d", &codigo);
		
		montoTotal = montoTotal + precio;
		
		while(codigo <= 0 || codigo > 3){
			printf("Error, codigo de producto no valido. Ingrese de nuevo por favor: ");
			scanf("%d", &codigo);
		}
		
		if(i == 0 || precio < precio_min){
			precio_min = precio;
			codigo_min = codigo;
		}
		
		if(i == 0 || precio > precio_max){
			precio_max = precio;
			codigo_max = codigo;
		}
		
		if(codigo == 3){
			cont_ropa = cont_ropa + 1;
			if(cont_ropa == 1 || precio > ropaCara){
				ropaCara = precio;
			}
		}
		
		else if(codigo == 2){
			cont_ali = cont_ali + 1;
			acum_ali = acum_ali + precio;
		}
		
		else if(codigo == 1){
			cont_elec = cont_elec + 1;
			if(precio > 20000){
				cont_elecMas20000 = cont_elecMas20000 + 1;
			}
		}
		
		i++;
		
	if(i < 10){
		printf("Ingrese de la venta numero %d el valor: ", i + 1);
		scanf("%f", &precio);
		while(precio < 0){
			printf("Error, precio de venta no valido. Ingrese de nuevo por favor: ");
			scanf("%f", &precio);
		}
	}		
							
	}
	
	if(i != 0){
	porc_ropa = (cont_ropa * 100) / i;
	}
	else{
		porc_ropa = 0;
	}
	
	if(cont_ali != 0){
	prom_ali = acum_ali / cont_ali;
	}
	else{
		prom_ali = 0;
	}
	
	if(cont_elec != 0){
	porc_elecMas20000 = (cont_elecMas20000 * 100) / cont_elec;
	}
	else{
		porc_elecMas20000 = 0;
	}
	
	if(s == 0 || montoTotal > total_max){
		total_max = montoTotal;
		sucu_max = s + 1;
	}
	
	
	printf("\n\n\nDe la sucursal numero %d:", s + 1);
	printf("\nEl monto total fue de: %f", montoTotal);		
	printf("\n\nEl valor de la venta mas baja fue de %f$ ", precio_min);
	if(codigo_min == 1){
	printf("Y corresponde a la categoria electronicos.");
	}
	else if(codigo_min == 2){
		printf("Y corresponde a la categoria alimentos.");
	}
	else if(codigo_min == 3){
		printf("Y corresponde a la categoria ropa.");
	}
	printf("\n\nEl porcentaje de la venta de las ropas es de: %f", porc_ropa);
	printf("\nEl valor de la ropa mas cara es de: %f$", ropaCara);
	printf("\n\nEl precio promedio de los alimentos es de: %f$", prom_ali);
	printf("\n\nDentro de los electronicos el porcentaje que supero los 20000$ es de: %f", porc_elecMas20000);
	
	i=0;
	precio=0;
	montoTotal=0;
	cont_ropa=0;
	porc_ropa=0;
	ropaCara=0;
	cont_ali=0;
	acum_ali=0;
	prom_ali=0;
	cont_elec=0;
	cont_elecMas20000=0;
	porc_elecMas20000=0;

}
	printf("\n\n\nDe entre todas las sucursales se registro:");
	printf("\n\nLa sucursal que vendio mas con un monto total de %f$ fue la sucursal numero %d", total_max, sucu_max);
	printf("\n\nEl valor de la venta mas baja fue de %f$ ", precio_min);
	if(codigo_min == 1){
	printf("Y corresponde a la categoria electronicos.");
	}
	else if(codigo_min == 2){
		printf("Y corresponde a la categoria alimentos.");
	}
	else if(codigo_min == 3){
		printf("Y corresponde a la categoria ropa.");
	}	
	printf("\n\nEl producto mas caro que se registro tiene un valor de: %f$ ", precio_max);
	if(codigo == 1){
		printf("Y corresponde a la categoria de electronicos.");
	}
		else if(codigo == 2){
			printf("Y corresponde a la categoria de alimentos.");
		}
			else if(codigo == 3){
				printf("Y corresponde a la categoria de ropa.");
			}

}
