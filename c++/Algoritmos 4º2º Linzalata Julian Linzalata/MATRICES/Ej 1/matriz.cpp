#include <stdio.h>
int matriz[3][3], N=3, i, j;

main(){

for(i=0; i < N; i++){
	for(j=0; j < N; j++){
		if(i==0 && j==0){
		printf("Ingrese valor para la fila %d, columna %d: ", i, j);
		}
		else{
		printf("\nIngrese valor para la fila %d, columna %d: ", i, j);
		}
		
		scanf("%d", &matriz[i][j]);
	}
}

printf("La matriz es:\n");
for(i=0; i < N; i++){
	printf("\n");
	for(j=0; j < N; j++){
		printf("|%d|", matriz[i][j]);	
	}
}

printf("La diagonal principal de la matriz es:");
for(i=0; i < N; i++){
	printf("\n");
	for(j=0; j < N; j++){
		if(j == i){
		printf("|%d|", matriz[i][j]);
		}
		
	}
}





}
