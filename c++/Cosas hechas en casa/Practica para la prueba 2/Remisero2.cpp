#include <stdio.h>
// Un remis cobra 1000$ de base por cada viaje que realiza.
// Del km 0 a 6 cobra 350$ los 500 métros.
// Desde el km 6 y hasta el 12 cobra 250$ los 500 métros.
// A partir del km 12 cobra 250$ el kilómetro.
// Realizar un programa que lea la cantidad de kilómetros de un viaje y que imprima el total a pagar.


float km, monto;

main(){
	
printf("Ingrese el kilometraje a realizar: ");
scanf("%f", &km);

if(km < 6){
	monto = (km / 0.5) * 350;
}

else if (km < 12){
	if(km >= 6){
		monto = (6 / 0.5) * 350 + ((km - 6) / 0.5) * 250;
	}
}

else if (km >= 12){
	monto = (6 / 0.5) * 350 + (6 / 0.5) * 250 + (km - 12) * 250;
}

monto = monto + 1000;

printf("La cantidad de kilometros hechos es de: %f \n", km);
printf("\n El monto total a pagar es de: %f", monto);

}