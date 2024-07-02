/*
Se almacenan en un vector las notas de 10 estudiantes en algoritmos. La posición de memoria corresponde al número de estudiante.
Informar:
1. Porcentaje de estudiantes aprobados.
2. Número de los alumnos que obtuvieron notas mayores al promedio.
3. Porcentaje de alumnos que obtuvieron notas menores al promedio.
4. Calificacion maxima y a que estudiante corresponde.
5. Promedio entre los desaprobados. 
*/
#include <stdio.h>
float notas[5], notaMax=0, cont_apro=0, porc_apro=0, acum=0, promedio=0, cont_mayor_prom=0, cont_menor_prom=0, porc_menor_prom=0;
int i, N=5, estudiante_max=0;
main(){
	for(i=0; i < N; i++){
	printf("Ingrese del alumno %d la nota: ",  i + 1);
	scanf("%f", &notas[i]);
	
	if(notas[i] >= 6){
		cont_apro = cont_apro + 1;
	}
	
	acum = acum + notas[i];
	
	if(notas[i] > notaMax){
            notaMax = notas[i];
            estudiante_max = i + 1;
        }
	}
	
	/*SALIDAS*/
	porc_apro = (cont_apro * 100) / N;
	promedio = acum / N;
	porc_menor_prom = (cont_menor_prom * 100) / N;
	
	
	for(i=0; i < N; i++){
		if(notas[i] > promedio){
			cont_mayor_prom = cont_mayor_prom + 1;
		}
			else if(notas[i] < promedio){
				cont_menor_prom = cont_menor_prom + 1;
			}
	
		
	}
	
	for (i=0; i < N; i++) {
        printf("\nAlumno %d |%f| ", i + 1, notas[i]);
    }
    
    printf("\n\nEl porcentaje de estudiantes aprobados es de: %f", porc_apro);
	printf("\nEl número de alumnos que obtuvieron notas mayores al promedio es: %f", cont_mayor_prom);
    printf("\nEl porcentaje de alumnos que obtuvieron notas menores al promedio es: %f", porc_menor_prom);
    printf("\nLa calificación máxima es: %f, correspondiente al estudiante %d", notaMax, estudiante_max);
	
}
