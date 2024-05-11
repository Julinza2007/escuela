#include <stdio.h>
int numero;

main(){
	printf("Ingrese un numero para saber si es positivo, negativo o igual a cero: ");
	scanf("%d", & numero);
	if (numero < 0){
		printf("El numero %d es negativo", numero);
	}
	else if (numero > 0){
		printf("El numero %d es positivo", numero);
	}
	else if (numero == 0){
		printf("El numero que usted introdujo es igual a cero");
	}
	
}