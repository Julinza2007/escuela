/*
Almacenar en un vector los nombres de los modelos de los autos.
*/

#include <stdio.h>
int i, N=3;
char modelo[3][12]; /*el 3 son la cantidad de palabras. El 12 cuantas letras tiene cada palabra*/
main(){
	
	for(i=0; i < N; i++){
		printf("Ingrese el modelo %d: ", i);
		scanf("%s", &modelo[i]);
	}
	
	for(i=0; i <N; i++){
		printf("Modelo %d, %s\n", i + 1, modelo[i]);
	}
	
		
}

