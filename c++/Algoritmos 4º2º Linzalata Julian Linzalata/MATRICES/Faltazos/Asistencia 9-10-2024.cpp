/*
Se almacenan en una matriz la cantidad de asistencias de los tres talleres que se dictan en un espacio en tres turnos. Almacenar en un vector los nobres de cada taller 
e imprimir mediante un menu
1) Total de asistencias por taller y a que taller asistio mas gente
2) Total de asistencias por turno y en que turno asistio menos gente 
3) Traza, valor maxima de la matriz y posiciones de memoria 
4) Por taller mostrar en que turnos asistio menos gente 
*/

#include <stdio.h>

int asistencia[3][3], i=0, j=0,n=3, turno=0, taller=0, tallerMax, asistenciaMax, asistenciaMin, turnoMin, asistenciaMinTurno, turnoMinTaller, traza, acum_traza=0;

main(){
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Ingrese la cantidad de asistencias del taller %d y su turno %d \n", i+1, j+1);
			scanf("%d", &asistencia[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			taller = taller + asistencia[i][j];
		}
		printf("La cantidad de asistencias en el taller %d es %d \n", i+1, taller);
		if(i==0 || asistencia[i][j] > asistenciaMax){
			asistenciaMax = asistencia[i][j];
			tallerMax = i+1;
		}
		taller=0;
	}
	printf("El taller al que asistio mas gente fue %d y con la cantidad de %d \n", tallerMax, asistenciaMax);


	for(j=0; j<n; j++){
		for(i=0; i<n; i++){
			turno = turno + asistencia[i][j];
		}
			printf("La cantidad de asistencias en el turno %d es %d \n", j+1, turno);
			if(j==0 || asistencia[i][j] > asistenciaMin){
				asistenciaMin = asistencia[i][j];
				turnoMin = j+1;
			}
			turno=0;
		}
		printf("El turno al que menos gente fue es %d y con la cantidad de %d \n", turnoMin, asistenciaMin);
		
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==j){
				traza = acum_traza + asistencia[i][j];
			}
		}
	}
	printf("La traza de la matriz es %d \n", traza);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j==0 || asistencia[i][j] < asistenciaMinTurno){
				asistenciaMinTurno = asistencia[i][j];
				turnoMinTaller = j+1;
			}
		}
		printf("El turno %d al que menos gente fue es %d y con la cantidad de %d \n", i+1, turnoMinTaller, asistenciaMinTurno);
	}
	
}
