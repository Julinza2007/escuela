#include <stdio.h>
int numero, resto;

main (){
	printf("CALCULADORA PARA SABER SI UN NUMERO ES PAR O IMPAR \n \n Por favor Ingrese un numero para saber si es par o impar: ");
	scanf("%d", & numero);
	resto= numero - (numero / 2) * 2;
	if (resto == 0){
		printf("El numero %d es par", numero);
	}
		else {
			printf("El numero %d es impar", numero);		
	}
}