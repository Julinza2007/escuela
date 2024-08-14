/*
Realizar un programa que calcule el promedio de 3 notas.
Hasta que el usuario ingrese cero como nota.
/*PREGUNTO ANTES DE EJECUTAR EL CICLO = WHILE (pre-testeo)
  PREGUNTO DESPUES DE EJECUTAR EL CICLO = DO WHILE (Post-testeo)
  while(se usa en base de datos muajaja)
*/

#include <stdio.h>
float promedio, nota, acum;
int N=3, i;

main(){
	
	/*	for(i=0; i < N; i++){
		printf("\nIngrese de la nota numero %d: ", i + 1);
		scanf("%d", &nota);
		acum= acum + nota;
	}
	
	promedio = acum / N;
	

	
	while(i < N){
		printf("\nIngrese de la nota %d: ", i + 1);
		scanf("%d", &nota);
		acum= acum + nota;
		i++;
	}
	promedio = acum / N;
	
	printf("\n\nEl promedio de las notas es igual a : %f", promedio);
*/
	printf("Hola, esto es FOR VS WHILE\n");
	do{
		printf("\nIngrese de la nota %d: ", i + 1);
		scanf("%f", &nota);
		acum= acum + nota;
		i++;
	}
	while(nota != 0);
	
	
	promedio = acum / N;

	printf("\n\nEl promedio de las notas es igual a : %f", promedio);
	
}

