#include <stdio.h>
#define base 1000
float kilometraje, valor, total;
main(){
	
	printf("Por favor indique distancia en kilometros: ");
	scanf("%f", & kilometraje);
	
	if (kilometraje <= 6)
	{
	total= (kilometraje / 0.5) * 350;		
}
else if (kilometraje <= 12)
	{
	total=(kilometraje / 0.5) * 250 + (6 / 0.5) * 350;		
}
total= total + base;

	printf("La cantidad de kilometraje que usted esta haciendo es de %f km \n", kilometraje);
	printf("El total a pagar es de: $ %f", total);
}
