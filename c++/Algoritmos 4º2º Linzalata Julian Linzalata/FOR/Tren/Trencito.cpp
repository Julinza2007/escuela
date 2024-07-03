/* SE DESEA REALIZAR UN PROGRAMA PARA PROCESAR LA CANTIDAD DE PERSONAS QUE USAN EL TREN.EN CADA ESTACION,SE LEEN LA CANTIDAD DE PERSONAS QUE INGRESAN.SON 10 ESTACIONES.
INFORMAR:
1_PORCENTAJE DE LAS ESTACIONES DONDE SUBIERON MAS DE 100 PERSONAS
2_NUMERO DE ESTACION EN LA QUE SUBIO MENOS GENTE
3_PROMEDIO DE LAS PERSONAS QUE SUBEN POR ESTACION
4_PROMEDIO ENTRE LAS ESTACIONES EN LAS QUE SUBIERON MAS DE 250 PERSONAS
5_MAXIMO DE PERSONAS ENTRE LAS ESTACIONES EN LAS QUE HUBO MAS DE 250 PERSONAS 
*/

#include <stdio.h>

float personas, cont_mas100=0, porc_mas100=0, personas_min=0, estacion_min, acum_personas=0, prom_personas=0, cont_mas250=0, acum_mas250, prom_mas250=0, personas_maxMas250=0, estacion_maxMas250=0;
int i, N=5;

main(){
	
	for(i=0; i < N; i++){
	printf("Ingrese de la estacion numero %d la cantidad de personas que ingresan: ", i + 1);
	scanf("%f", &personas);
	
	if(personas > 100){
		cont_mas100 = cont_mas100 + 1;
	}
	
	if(i == 0 || personas < personas_min){
		personas_min = personas;
		estacion_min = i + 1;
	}
	
	acum_personas = acum_personas + personas;

	if(personas > 250){
		cont_mas250 = cont_mas250 + 1;
		acum_mas250 = acum_mas250 + personas;
		
		if(i == 0 || personas > personas_maxMas250){
			personas_maxMas250 = personas;
			estacion_maxMas250 = i + 1;
		}
	}
	}
	
	porc_mas100 = (cont_mas100 * 100) / N;
	prom_personas = acum_personas / N;
	
		if(cont_mas250 > 0){
			prom_mas250 = acum_mas250 / cont_mas250;
		}
		else{
			prom_mas250 = 0;
		}
		
	printf("\n\nEl porcentaje de las estaciones donde subieron mas de 100 personas es de: %f", porc_mas100);
	printf("\n\nLa estacion en la que subio menos gente corresponde al numero de estacion: %f. ", estacion_min);
	printf("\nY el numero de personas es de: %f", personas_min);
	printf("\n\nEl promedio entre las personas que suben por estacion es de: %f", prom_personas);
	printf("\n\nEl promedio entre las estaciones que subieron mas de 250 personas es de: %f", prom_mas250);
	printf("\nY la cantidad maxima de personas que se encontro en esta categoria es de: %f ", personas_maxMas250);
	printf("\nY corresponde a la estacion numero %f", estacion_maxMas250);
}