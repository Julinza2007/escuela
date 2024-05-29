#include <stdio.h>
// Un remis cobra 1000$ de base por cada viaje que realiza.
// Del km 0 a 6 cobra 350$ los 500 métros.
// Desde el km 6 y hasta el 12 cobra 250$ los 500 métros.
// A partir del km 12 cobra 250$ el kilómetro.
// Realizar un programa que lea la cantidad de kilómetros de un viaje y que imprima el total a pagar.

float km, monto_final;

main(){
	printf("Ingrese el kilometraje a realizar por favor: ");
	scanf("%f", &km);
	
	if(km < 6){
		monto_final = (km / 0.5) * 350;
	}
	
else if(km < 12){
	if(km >= 6){
		monto_final = (6 / 0.5) * 350 + ((km - 6) / 0.5) * 250;
	}
}

else if(km >= 12){
	monto_final = (6/0.5) * 350 + (6 / 0.5) * 250 + (km - 12) * 250;
}

monto_final = monto_final + 1000;

printf("El kilometraje realizado es de: %f", km);
printf("\nEl monto a pagar es de: $%f", monto_final);

	
	
	
	
	
}