/* 
Se desea realizar un programa para procesar las edades y las notas de un curso. El curso posee 10 estudiantes
Informar:
1. Porcentaje de estudiantes aprobados.
2. Promedio de notas entre los mayores a 16 años.
3. Promedio de edades de los desaprobados.
4. Nota mínima y a que edad corresponde.
5. Edad máxima y qué nota obtuvo.
6. Que porcentaje de los aprobados son mayores de edad.
*/

#include <stdio.h>
int i, N=10, edad, /*5*/edad_max, /*5*/nota_edad_max, nota, /*4*/nota_min, /*4*/edad_nota_min, /*1 y 6*/cont_estuApro=0, /*6*/cont_may_apro=0;
float /*1*/porc_apro, /*2*/prom_nota, /*2*/acum_nota=0, /*2*/cont_mayo=0, /*3*/cont_desap=0, /*3*/prom_edad_desap,  /*3*/acum_edad_desap=0, /*6*/porc_mayo_apro; 

main(){
	
	for(i=0; i < N; i++){
		printf("\nIngrese la edad del estudiante %d: ", i);
		scanf("%d", &edad);
		printf("Ingrese la nota del estudiante: ");
		scanf("%d", &nota);
		
		if(nota >= 6){
			cont_estuApro= cont_estuApro + 1;
			if(edad >= 18){
				cont_may_apro = cont_may_apro + 1;
			}
		}
		else if (nota < 6){
			cont_desap= cont_desap + 1;
			acum_edad_desap = acum_edad_desap + edad;
		}
		
		if(edad > 16){
			cont_mayo= cont_mayo + 1;
			acum_nota= acum_nota + nota;
		}
		
		if(i==0 || nota < nota_min){
			nota_min = nota;
			edad_nota_min = edad;
		}
		
		if(i==0 || edad > edad_max){
			edad_max = edad;
			nota_edad_max = nota;
		}				
	}
	
	/*1*/ porc_apro= (cont_estuApro * 100 ) / N;
	
	if(cont_mayo > 0){
	/*2*/ prom_nota= acum_nota / cont_mayo;
 	}
 	else{
 		prom_nota = 0;
	 }
	 	if(cont_desap > 0){
	/*3*/ prom_edad_desap= acum_edad_desap / cont_desap;
		}
		else{
			prom_edad_desap= 0;
		}
		if(cont_estuApro > 0){
	/*6*/  porc_mayo_apro= (cont_may_apro * 100) / cont_estuApro; 
		}
		else{
			porc_mayo_apro=0;
		}
	/*SALIDA*/
	
	printf("\nEl porcentaje de estudiantes aprobados es de: %f", porc_apro);
	printf("\nEl promedio de las notas entre los estudiantes mayores a 16 anios es de: %f", prom_nota);
	printf("\nEl promedio de las edades de los desaprobados es de: %f", prom_edad_desap);
	printf("\nLa nota minima es de: %d. ", nota_min);
	printf("Y la edad correspondiente es de: %d", edad_nota_min);
	printf("\nLa edad maxima es de: %d ", edad_max);
	printf("La nota correspondiente a esa edad es de: %d", nota_edad_max);
	printf("\nEl porcentaje de aprobados que son mayor de edad es de: %f", porc_mayo_apro);
	
}
