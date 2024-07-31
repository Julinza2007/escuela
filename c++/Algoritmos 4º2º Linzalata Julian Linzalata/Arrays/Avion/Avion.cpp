/*
Un programa almacena las edades de las personas que viajan en avion. Se leen 10 edades.
Informar:

1. Porcentaje de jubilados (edad mayor a 65 años).
2. Promedio de edad y posiciones de memoria de las edades menores al promedio.
3. Rango de edades y sus posiciones de memoria.
4. Buscar una edad, informar si se encontro o no. En caso afirmativo, imprimir su posicion de memoria.
*/

#include <stdio.h>
float cont_jubi=0, porc_jubi=0, acum_edad=0, prom_edad=0;
int edad[10], i, i_busc, N=10, edad_min, edad_max, min, max, edad_busc;
main(){
	printf("Programa:\n");
	
	for(i=0; i < N; i++){
		
		printf("\n\nIngrese de la persona numero %d la edad: ", i + 1);
		scanf("%d",&edad[i]);
		
		if(edad[i] > 65){
			cont_jubi = cont_jubi + 1;
		}
		
		acum_edad = acum_edad + edad[i];
		
		if(i == 0 || edad[i] < edad_min){
			edad_min= edad[i];
			min = i + 1;
		}
		
		if(i == 0 || edad[i] > edad_max){
			edad_max= edad[i];
			max = i + 1;
		}
		
	}
	
	porc_jubi = (cont_jubi * 100) / N;
	
	
	prom_edad = acum_edad / N;
	
	printf("\n\nEl porcentaje de jubilados es de: %f", porc_jubi);
	printf("\n\nEl promedio de edad es igual a %f\n", prom_edad);
	printf("\n\n\nMenores de edad al promedio:\n");
	for(i=0; i < N; i++){
		
		if(edad[i] < prom_edad){
			printf("\n Persona |%d|, Edad |%d| ", i + 1, edad[i]);
		}
		
	}
	
	printf("\n\nEl rango de edades va desde el minimo que es igual a %d.", edad_min);
	printf(" Con posicion de memoria %d", min);
	printf(" Y hasta El maximo que es igual a %d.\n", edad_max);
	printf("Con posicion de memoria %d	", max);
	
	printf("\n\nIngrese la edad que desea buscar: ");
	scanf("%d", &edad_busc);
	
	for(i=0; i < N; i++){
		if(edad_busc == edad[i]){
			i_busc = i + 1;	
		}	
		
	}
		if(edad_busc == edad[i]){
		printf("La edad que usted busca corresponde a la posicion de memoria numero %d", i_busc);
		}
		else{
		printf("\nNo se encontro ninguna edad correspondiente a lo ingresado.");
		}
}
