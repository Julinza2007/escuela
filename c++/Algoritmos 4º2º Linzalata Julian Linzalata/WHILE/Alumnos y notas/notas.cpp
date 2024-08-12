/*
Se desea realizar un programa para procesar las edades y las notas de un curso. 
Se leen 1 a 1 los datos, las edades, y las notas de un curso. Y finaliza el programa al ingresar 0 como edad. El curso tiene 15 estudiantes. Puede ser que ninguno se presente a la evaluación.
Informar:
1. Porcentaje de aprobados.
2. Promedio entre las calificaciones de los mayores a 18 años de edad.
3. Nota minima y a que edad corresponde.
4. Promedio de edad, entre los desaprobados.
*/
#include <stdio.h>
float nota, cont_apro=0, porc_apro, acum18=0, cont18=0, prom18, cont_desapro=0, acum_desapro=0, prom_desapro;
int i=0, N=15, edad, nota_min, edad_min;
main(){
		while(edad != 0 && i < N){			
		printf("\nIngrese del alumno numero %d, la nota: ", i + 1);
		scanf("%f", &nota);
		printf("Ingrese la edad de ese alumno: ");
		scanf("%d", &edad);
		
		if(nota >= 6){
			cont_apro + 1;
		}
		else if(nota < 6){
			acum_desapro = acum_desapro + edad;
			cont_desapro = cont_desapro + 1;
		}
		
		if(edad > 18){
			acum18 = acum18 + nota;
			cont18 = cont18 + 1;
		}
		
		if(i == 0 || nota < nota_min){
			nota_min = nota;
			edad_min = edad;
			
		}	
		i++;
	}
	
	

porc_apro = (cont_apro * 100) / N;
prom18 = acum18 / cont18;
prom_desapro = acum_desapro / cont_desapro;


printf("\n\nEl porcentaje de aprobados es de: %f", porc_apro);
printf("\n\nEl promedio entre las calificaciones mayores a 18 anios es de: %f", prom18);
printf("\n\nLa nota minima es de: %d, y corresponde a la edad de: %d", nota_min, edad_min);
printf("\n\nEl promedio de edad entre los desaprobados es igual a: %f", prom_desapro);	
	
}
