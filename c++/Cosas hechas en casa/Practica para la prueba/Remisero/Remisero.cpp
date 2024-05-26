#include <stdio.h>
float km, monto_final;

main(){
	
printf("Ingrese la cantidad de kilometros: ");
scanf("%f", &km);

	if(km < 6){
	monto_final= (km / 0.5) * 350; // Use regla de 3 en los parentesis para que te acuerdes que 500m es igual a 0.5km
	}

else if(km < 12){	
	if(km >=6){
	monto_final= (6 / 0.5) * 350 + ((km - 6) / 0.5) * 250;
	}
}

else if(km >= 12){
	monto_final= (6 / 0.5) * 350 + (6 / 0.5) * 250 + (km - 12) * 250;
}

monto_final = monto_final + 1000;

printf("El monto final a pagar es de: $%f \n", monto_final);
printf("La cantidad de kilometros realizados es de: %f", km);

}