#include <stdio.h>
int i, N=10, edad, acum_meno= 0, cont_meno=0, cont_mayo=0, cont_jubi=0;
float promedio= 0, porc_mayo=0;

main(){	
	for(i=0; i < N; i++){	
	printf("Ingrese la edad de la persona: ");
	scanf("%d", &edad);
	
		if(edad < 18){
		cont_meno = cont_meno + 1;
		acum_meno= acum_meno + edad;
		}
			else if(edad >= 18){
				cont_mayo = cont_mayo + 1;
				if(edad >= 60){
				cont_jubi = cont_jubi + 1;
			}				
			}
			
		}
	
	  porc_mayo = (cont_mayo * 100) / N;
	  
	  if(cont_meno > 0){
	  	promedio = acum_meno / cont_meno;
	  }
	  else{
	  	promedio=0;
	  }	 
	  
	  printf("El porcentaje de mayores de edad es de: %f \n", porc_mayo);
	  printf("\nLa cantidad de mayores de 60 es de: %d \n", cont_jubi);
	  printf("\nEl promedio de los menores de edad es de: %f", promedio);
		
}
