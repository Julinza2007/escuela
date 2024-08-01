/*
Se almacena en un vector los puntos que obtuvieron los deportistas de 10 paises en esgrima.
El numero de pais corresponde a la posicion de memoria. Informar:

1. Numero del pais ganador.
2. Paises cuyo puntaje supero al del promedio.
3. Porcentaje de los paises que obtuvieron mas de 30 puntos.
4. Ordenar el vector de menor a mayor.

*/

#include <stdio.h>
int pais[10], i, N=10, ganador, num, J, aux;
float contMas30=0, acum=0, promedio, porcMas30;

main(){
	
	for(i=0; i < N; i++){
		
		printf("Ingrese del pais numero %d la cantidad de puntos que obtuvo: ", i + 1);
		scanf("%d", &pais[i]);
		
		if(i == 0 || pais[i] > ganador){
			ganador = pais[i];
			num = i + 1;
		}
		
		if(pais[i] > 30){
			contMas30 = contMas30 + 1;
		}
			
		acum = acum + pais[i];
		
	}
	
	promedio = acum / N;
	
	porcMas30 = (contMas30 * 100) / N;
		
	printf("\n\n|El pais ganador es el pais numero %d con %d|", num, ganador);
	printf("\n\n|Paises que superaron el puntaje promedio:|\n");
	
	for(i=0; i < N; i++){
		if(pais[i] > promedio){
			printf("\n Pais numero |%d|, Puntos |%d| ", i + 1, pais[i]);
			}
	}
	printf("\n\n|El porcentaje de los paises que obtuvieron mas de 30 puntos es de: %f|\n", porcMas30);

for(J=1; J < N; J++){
	for(i=0; i < N-J; i++){
		if(pais[i] > pais[i + 1]){
			aux = pais[i];
			pais[i] = pais[i + 1];
			pais[i + 1] = aux;
		}
}
}
printf("Posiciones de menor a mayor:\n");
	for(i=0; i < N; i++){
		printf("\n Pais numero |%d|, Puntos |%d|", i + 1, pais[i]);
	}


}
