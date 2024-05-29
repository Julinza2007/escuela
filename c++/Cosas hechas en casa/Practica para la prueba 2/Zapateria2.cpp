#include <stdio.h>
// Una zapatería pone en promoción sus productos, otorgando un descuento del 10% a las compras mayores de 100.000$.
// Un 25% a las mayores de 200.000$.
// Y un 30% a las mayores de 300.000$.
// Más un descuento extra del 5% si el cliente está registrado.
// Informar el descuento, el total a pagar y el valor por cuotas si se decidiera pagar en cuotas.

int cliente, cuotas;
float producto, descuento, descuento_client, monto_cuo, monto_total;

main(){
	printf("Si usted es cliente registrado, marque el numero 1.\nSi no es el caso marque cualquier otro numero:\n");
	scanf("%d", &cliente);
	printf("Ingrese el precio del producto que se va a llevar: ");
	scanf("%f", &producto);
	printf("Elija la cantidad de cuotas que desea realizar el pago: ");
	scanf("%d", &cuotas);

if(producto < 200000){
	if(producto >= 100000){
		descuento = producto * 0.1;
	}
}

else if(producto < 300000){
	if(producto >= 200000){
		descuento = producto * 0.25;
	}
}

else if(producto >= 300000){
	descuento = producto * 0.3;
}

monto_total = producto - descuento;

if(cliente == 1){
	descuento_client = producto * 0.05;
	monto_total = monto_total - descuento_client;
}

 
   monto_cuo = monto_total / cuotas;
                                   
printf("Su monto total a pagar es de: %f", monto_total);
if(cliente == 1){
	printf("\nSu descuento por ser cliente es del 5 porciento y equivale a: %f", descuento_client);
}
printf("\nSu descuento es de: %f", descuento);
printf("\nLa cantidad de cuotas que usted eligio es de: %d", cuotas);
printf("\nEl monto a pagar de cada cuota es de: %f", monto_cuo);


	
}