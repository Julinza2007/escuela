/*
Se desea realizar un programa para procesar las edades y las notas de un curso. 
Se leen 1 a 1 los datos, las edades, y las notas de un curso. Y finaliza el programa al ingresar 0 como edad. El curso tiene 15 estudiantes. Puede ser que ninguno se presente a la evaluación.
Informar:
1. Porcentaje de aprobados.
2. Promedio entre las calificaciones de los mayores a 18 años de edad.
3. Nota minima y a que edad corresponde.
4. Promedio de edad, entre los desaprobados.

--Segunda parte--
5. Entre los desaprobados que porcentaje fueron 1, 2 o 3.
6. Edad maxima entre los desaprobados y que nota obtuvo.
7. Promedio entre las calificaciones mayores a 8.

*/
#include <stdio.h>
float nota, cont_apro=0, porc_apro, acum18=0, cont18=0, prom18, nota_min, cont_desapro=0,  acum_desapro=0, prom_desapro, cont_123=0, porc_123, nota_max, cont_mas8=0, acum_mas8=0, prom_mas8, porc_mas8;
int i=0, N=15, edad, edad_min, edad_max;
main(){
	
	
		printf("Ingrese la edad de ese alumno: ");
		scanf("%d", &edad);
				
		while(edad != 0 && i < N){			
		printf("\nIngrese del alumno numero %d, la nota: ", i + 1);
		scanf("%f", &nota);
		
		if(nota >= 6){
			cont_apro = cont_apro + 1;
			if(nota > 8){
				cont_mas8 = cont_mas8 + 1;
				acum_mas8 = acum_mas8 + nota;
			}
		}
		else if(nota < 6){
			acum_desapro = acum_desapro + edad;
			cont_desapro = cont_desapro + 1;
			if(nota == 1 || nota == 2 || nota == 3){
				cont_123 = cont_123 + 1;
			}
			
			if(i==1 || edad > edad_max){
				edad_max = edad;
				nota_max = nota;
			}
		}
		
		if(edad >= 18){
			acum18 = acum18 + nota;
			cont18 = cont18 + 1;
		}
		
		if(i == 1 || nota < nota_min){
			nota_min = nota;
			edad_min = edad;
		}	
		
		
		
		printf("Ingrese la edad de ese alumno: ");
		scanf("%d", &edad);
		
		i++;
	}
	
	

porc_apro = (cont_apro * 100) / i;
prom18 = acum18 / cont18;
if(cont_desapro != 0){
	prom_desapro = acum_desapro / cont_desapro;
}
else{
	prom_desapro = 0;
}
porc_123 = (cont_123 * 100) / cont_desapro;

if(cont_mas8 !=0){
	prom_mas8 = acum_mas8 / cont_mas8;
}
else{
	prom_mas8 = 0;
}


printf("\n\nEl porcentaje de aprobados es de: %f", porc_apro);
printf("\n\nEl promedio entre las calificaciones mayores a 18 anios es de: %f", prom18);
printf("\n\nLa nota minima es de: %f, y corresponde a la edad de: %d", nota_min, edad_min);
printf("\n\nEl promedio de edad entre los desaprobados es igual a: %f", prom_desapro);	
printf("\n\nEntre los desaprobados el porcentaje de notas que fueron 1, 2 o 3 es de: %f", porc_123);
printf("\n\nLa edad maxima entre los desaprobados es de: %d. Con nota %f", edad_max, nota_max);
printf("\n\nEl promedio entre las calificaciones mayores a 8 es de: %f", prom_mas8);
}
