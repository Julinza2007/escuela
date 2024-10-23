/*
Se almacenan en una matriz la cantidad de animalitos que atiende una veterinaria en 4 gabinetes durante 4 dias. Mostrar mediante un menu:
1) Total de animales por gabinete y que gabinete atendio a mas mascotas
2) Promedio de mascotas atendidas por dia 
3) Mostrar por dia que gabinete atendio a menos mascotas 
4) Diagonal principal, minimo valor de la matriz y posiciones de memoria
*/

#include <stdio.h>

int n=4, i, j, acum=0, min, max, acum_gabi=0, anim_max;
float matriz[4][4], prome_animales, total_gabi; 


main(){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("Ingrese la cantidad de animalitos del dia %d y el gabinete %d \n" , i + 1 , j)+1;
				scanf("%d" , & matriz[i][j]);
			}
		}
	
		for(j=0; j<n; j++){
			acum_gabi = acum_gabi + matriz[i][j];
			for(i=0; i<n; i++){
				if(j==0 || acum_gabi > anim_max){
				anim_max = acum_gabi;
				acum_gabi = j+1;
				}
			}
			total_gabi = acum_gabi;
			printf("El total de animales en el gabinete es %d es %f \n", j+1, total_gabi);
			acum_gabi=0;
		}
		printf("El total de animales por gabinete es %d y el gabinete que mas atendio es %d \n", acum_gabi, anim_max);
			
		
		
	
		
			
}
