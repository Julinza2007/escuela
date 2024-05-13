#include <stdio.h>
int cantidad;
float precio_unidad, descuento, monto;

main (){
	printf("Ingrese por favor la cantidad de fideos que quiere comprar ");
	scanf("%d", & cantidad);
	printf("Ingrese por favor el precio de cada unidad ");
	scanf("%f", & precio_unidad);
monto= precio_unidad * cantidad;
descuento= monto * 10/100;
if (cantidad >= 10){
	monto= monto - descuento;
	printf("El descuento aplicado es de $ %f \n", descuento);
}
printf("El monto total a pagar es de $ %f", monto);
}
