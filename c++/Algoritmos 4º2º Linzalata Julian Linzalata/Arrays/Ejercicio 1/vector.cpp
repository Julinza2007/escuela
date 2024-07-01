#include <stdio.h>
float vector[5];
int i, N=5;

main(){
	for(i=0; i < N; i++){
		printf("Ingrese para la posicion %d el valor: ", i);
		scanf("%f", &vector[i]);
	}
	printf("El valor de la lista es |%f||%f||%f||%f||%f|", vector[0],vector[1],vector[2],vector[3],vector[4]);
}
