/*
Para procesar los datos de un censo, realizar un programa que procese los datos de 8 personas máximo. Se leen de cada persona su género y edad.
Puede ser que no se procesen datos. Finaliza el programa al ingresar 0 como edad.
Mostrar:
1.	Porcentaje de cada género.
2.	Edad menor masculina y edad mayor entre todos los censados.
3.	Promedio de las edades entre todos los censados y promedio de edades masculinos.
4.	Qué porcentaje de las mujeres son menor a 40 años.
5.	Entre las personas mayores a 50 años, que porcentaje son varones.

*/


#include <stdio.h>
float acum=0, promedio, cont_varon=0, porc_var, cont_mujer=0, porc_muj, acumVaron=0, prom_var, cont_mujerMenos40=0, porc_mujerMenos40, cont_mas50=0, cont_varMas50=0, porc_varMas50;   
int i, N=8, edad, edad_varMenor, edad_mayor, genero;

main(){
	
	printf("Ingrese de la persona numero %d la edad: ", i + 1);
	scanf("%d", &edad);
	
	while(edad != 0 ){
		printf("Ingrese genero de esa persona:\n1. Si es varon.\n2. Si es mujer.\n");
		scanf("%d", genero);
		
		acum = acum + edad;
				
		if(genero == 1){
			cont_varon = cont_varon + 1;
			acumVaron = acumVaron + edad;
			if(i==0 || edad < edad_varMenor){
				edad_varMenor = edad;
			}			
		}
		
		else if(genero == 2){
			cont_mujer = cont_mujer + 1;
			if(edad < 40){
				cont_mujerMenos40 = cont_mujerMenos40 + 1;
			}
		}
		
		if(edad > 50){
			cont_mas50 = cont_mas50 + 1;
			if(genero == 1){
				cont_varMas50 = cont_varMas50 + 1;
			}
		}
		
		if(i==0 || edad > edad_mayor){
			edad_mayor = edad_mayor;
		}		
		
	printf("Ingrese de la persona numero %d la edad: ", i + 1);
	scanf("%d", &edad);
	
		i++;
	}
	
	porc_var = (cont_varon * 100) / i;
	porc_muj = (cont_mujer * 100) / i;
	promedio = acum / i;
	prom_var = acumVaron / cont_varon;
	porc_mujerMenos40 = (cont_mujerMenos40 * 100) / cont_mujer;
	porc_varMas50 = (cont_varMas50 * 100) / cont_mas50;
	
	printf("\n\nEl porcentaje de varones es igual a: %f", porc_var);
	printf("\n\nEl porcentaje de mujeres es igual a: %f", porc_muj);
	printf("\n\nLa edad menor masculina es igual a: %d", edad_varMenor);
	printf("\n\nLa edad mayor entre todos los censados es igual a: %d", edad);
	printf("\n\nEl porcentaje de mujeres menores a 40 anios es igual a: %f", porc_mujerMenos40);
	printf("\n\nEntre los mayores a 50 anios, el porcentaje es igual a: %f", porc_varMas50);
}
