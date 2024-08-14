/*
Se desea realizar un programa para imprimir el ticket en un supermercado. Se leen el precio de cada producto junto con la cantidad. 
Se le pregunta al usuario si desea cargar productos y por lo menos se lee un producto.
Informar:
1. Informar total por producto. (cant_prod * precio)
2. Informar total acumulado.
3. Mostrar total de productos que retira el cliente.
4. El precio de producto mas caro.
5. El precio del producto del que retira mas unidades el cliente.
6. Si el cliente retira mas de 4 unidades de un producto, se le realiza un 20 porciento de descuento sobre ese subtotal. Mostar el descuento cada vez.
7. Imprimir el total a pagar sin descuento, con descuento, y el descuento realizado.
*/

#include <stdio.h>
float precio, subtotal, total, precio_max, precio_cantMax, desc, acumDesc, totalDesc, descApli, totalDescApli, monto_finalDesc;
int i=0, preg=0, cantidad, acumCant=0, cant_max;
main(){	

	
	do{
		printf("Ingrese del producto numero %d la cantidad: ", i + 1);
		scanf("%d", &cantidad);
		printf("Ingrese el precio de ese producto: ");
		scanf("%f", &precio);
		subtotal = cantidad * precio;
		total = total + subtotal;
		acumCant = acumCant + cantidad;
		printf("\nEl precio subtotal de ese producto es de: %f.", subtotal);
		printf("\nEl total acumulado hasta ahora es de: %f", total);
		printf("\nLa cantidad acumulada hasta ahora es de %d productos.", acumCant);
		
		if(cantidad > 4){
			desc = subtotal * 0.2;
			descApli = subtotal - desc;
			totalDesc = totalDesc + desc;			
			totalDescApli = totalDescApli + descApli;
			printf("\nEl subtotal acumulado con ese descuento de 20 porciento de ese producto es de: %f, con un descuento de %f.", descApli, desc);
		}
				
		printf("\n\nSi desea seguir ingrese la opcion numero 1.\nSi no ingrese la opcion numero 2.\n");
		scanf("%d", &preg);
		
			
		
		if(i==0 || precio > precio_max){
			precio_max = precio;
		}
		
		if(i==0 || cantidad > cant_max){
			cant_max = cantidad;
			precio_cantMax = precio;
		}
		
	
		
		
		
		i++;
	}
/*The*/	while /*Proyect*/(preg == 1);
	monto_finalDesc= total - totalDesc;
	
		printf("\n\nEl precio del producto mas caro es de: %f", precio_max);
		printf("\n\nEl precio del producto que mas se vendio es de: %f", precio_cantMax);
		printf("\n\nEl total a pagar sin descuento es de: %f", total);
		printf("\n\nEl total a pagar con descuento es de: %f", monto_finalDesc);
		printf("\n\nEl descuento total aplicado es de: %f", totalDesc);
}
