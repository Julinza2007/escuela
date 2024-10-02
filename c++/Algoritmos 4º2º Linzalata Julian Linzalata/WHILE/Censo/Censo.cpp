/*
para procesar los datos de un censo, se necesita un programa que determine: 
1) el promedio de edad
2) que porcentaje de los censados es de genero masculino
3) la edad maxima de las mujeres 
4) que porcentaje de los mayores de edad son varones

se cargan por cada censado, el genero y edad. Finaliza la carga al ingresar 0 como edad. Pueden existir 0 o mas censados.
modificar el programa anterior para poder calcular lo solicitado anteriormente en tres barrios. 
Mostrar tambien:
1) en que barrio se censaron mas personas
2) edad minima entre todos los barrios y a que barrio pertenece
*/

#include <stdio.h>
int i=0, genero, b, b_edadMin, i_barrioMax, b_max;
float edad, acum_edad, prom_edad, cont_mascu=0, cont_feme=0, edad_maxFeme, cont_mayor=0, cont_mayorMascu=0, porc_mascu, porc_mayorMascu,
edad_min;

main(){
	
	for(b=0; b < 3; b++){
	
	printf("\nIngrese del censado numero %d la edad: ", i + 1);
	scanf("%f", &edad);
	while(edad < 0){
		printf("Error, ingrese de nuevo: ");
		scanf("%f", &edad);
	}
	
	while(edad != 0){
		printf("Ingrese el genero de esa persona.\n1. Si es masculino.\n2. Si es femenino\n");
		scanf("%d", &genero);
		while(genero < 1 || genero > 2){
			printf("Error, ingrese de nuevo: ");
			scanf("%d", &genero);
		}
			
			acum_edad = acum_edad + edad;
			
			if(genero == 1){
				cont_mascu = cont_mascu + 1;
			}
			
			else if(genero == 2){
				cont_feme = cont_feme + 1;
				if(cont_feme == 1 || edad > edad_maxFeme){
					edad_maxFeme = edad ;
				}
			}
			
			if(edad >= 18){
				cont_mayor = cont_mayor + 1;
				if(genero == 1){
					cont_mayorMascu = cont_mayorMascu + 1;
				}
			}
			
			if(i == 0 || edad < edad_min){
				edad_min = edad;
				b_edadMin = b + 1;
			}
			
			i++;
			
		printf("\nIngrese del censado numero %d la edad: ", i + 1);
		scanf("%f", &edad);
		while(edad < 0){
			printf("Error, ingrese de nuevo: ");
			scanf("%f", &edad);
		}	
					
	}
	
	if(i != 0){
	prom_edad = acum_edad / i;
	}
	else{
		prom_edad = 0;
	}
	
	if(i != 0){
	porc_mascu = (cont_mascu * 100) / i;
	}
	else{
		porc_mascu = 0;
	}
	
	if(cont_mayor != 0){
	porc_mayorMascu = (cont_mayorMascu * 100) / cont_mayor;
	}
	else{
		porc_mayorMascu = 0;
	}
	
	if(b == 0 || i > i_barrioMax){
		i_barrioMax = i + 1;
		b_max = b + 1;
	}
	
	printf("\n\n\nEn el barrio %d se registro:", b + 1);
	
	printf("\n\nEl promedio de edad es de: %f", prom_edad);
	printf("\n\nEl porcentaje de censados masculinos es de: %f", porc_mascu);
	printf("\n\nLa edad maxima entre las mujeres es de: %f", edad_maxFeme);
	printf("\n\nEl porcentaje de mayores de edad que son varones es de: %f\n", porc_mayorMascu);
	
	i=0;
	edad=0;
	acum_edad=0;
	prom_edad=0,
	cont_mascu=0;
	porc_mascu=0;
	cont_feme=0;
	edad_maxFeme=0;
	cont_mayor=0;
	cont_mayorMascu=0;
	porc_mayorMascu=0;
		
}

	printf("\n\n\nDe entre todos los barrios: ");
	printf("\n\nEl barrio numero %d fue aquel en el que se censaron mas personas. Con %d personas.", b_max, i_barrioMax);
	printf("\n\nLa edad minima de entre todos los barrios es de: %f. Y corresponde al barrio numero %d", edad_min, b_edadMin);


}


