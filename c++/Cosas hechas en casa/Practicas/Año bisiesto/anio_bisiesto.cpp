#include <stdio.h>
int anio, resto;

main(){
	
	printf("Por favor ingrese anio para saber si es bisiesto o no: ");
	scanf("%d", &anio);
	
	
	resto= anio - (anio/4) * 4;
	
	if (resto == 0)
	{
	
		printf("El anio %d ingresado es bisiesto", anio);
	
	}
	else if (resto > 0){
		
		printf("El anio %d ingresado no es bisiesto", anio);
	
	}	
}
