#include <stdio.h>
float num1, num2, num3;
main(){

printf("Calculadora de numero mayor \n \n");
printf("Por favor ingrese el primer numero: ");
scanf("%f", &num1);
printf("Ingrese el segundo numero: ");
scanf("%f", &num2);
printf("Ingrese el tercer numero: ");
scanf("%f", &num3);

if (num1 > num2 && num1 > num3){
	printf("El numero mayor es el %f", num1);
}
else if (num2 > num1 && num2 > num3){
	printf("El numero mayor es el %f", num2);
}
else if (num3 > num1 && num3 > num2){
	printf("El numero mayor es el %f", num3);
}
}