/* Realizar un programa para procesar las temperaturas de una semana.
Informar:
1. Promedio de las temperaturas menores a 10°.
2. Porcentaje de las temperaturas mayores a 20°.
3. Cuantos días la temperatura superó los 25°
Modificar el programa anterior, también si hubo precipitaciones o no.
Informar:
1. Porcentaje de los dias con lluvia.
2. Promedio de las temperaturas de los dias que no llovio.
3. Temperatura mínima.
 */
#include <stdio.h>
int i, N=7, min, temp, cont_temp_meno=0, acum_temp=0, contMayo=0, cant_dia=0, opc_precip, cont_lluvia=0, cont_no_lluvia=0, acum_no_lluvia=0;
float promedio=0, promedio_tempNo_lluvia=0, porc_lluvia, porcTempMayor;
main(){
	for(i=0; i < N; i++){
	printf("Ingrese la temperatura del dia %d ", i);
	scanf("%d", &temp);
	printf("\nIngrese el numero 1 si llovio. En caso contrario ingrese cualquier otro numero.\n");
	scanf("%d", &opc_precip);
				
		if(temp < 10){
			cont_temp_meno= cont_temp_meno + 1;
			acum_temp= acum_temp + temp;
		}
		
		if(temp > 20){
			contMayo= contMayo + 1;
		}
		
		if(temp > 25){
			cant_dia= cant_dia + 1;
		}
		
		if(opc_precip == 1){
			cont_lluvia= cont_lluvia + 1;
		}
		else{
			cont_no_lluvia= cont_no_lluvia + 1;
			acum_no_lluvia= acum_no_lluvia + temp;
		}
		
		if(i == 0 || temp < min){
			min=temp;
		}
		
	}
		/* SALIDA */
		
		 porc_lluvia = (cont_lluvia * 100) / N;
		 
		 if(cont_no_lluvia > 0){
		 	promedio_tempNo_lluvia = acum_no_lluvia / cont_no_lluvia;
		 }
		 else{
		 	promedio_tempNo_lluvia = 0;
		 }
		 
		if(cont_temp_meno > 0){
			promedio = acum_temp / cont_temp_meno;
		}
		else{
			promedio = 0;
		}
		
			porcTempMayor= (contMayo * 100) / N;
			
			printf("\nEl porcentaje de los dias de lluvia es de: %f\n", porc_lluvia);			
			printf("\nEl promedio de la temperatura en los dias que no llovio es de: %f\n", promedio_tempNo_lluvia);
			printf("\nEl promedio de las temperaturas menores a 10 grados es de: %f \n", promedio);
			printf("\nEl porcentaje de temperaturas mayores a 20 grados es de: %f \n", porcTempMayor);
			printf("\nLa cantidad de dias en que hubo temperaturas mayores a 25 grados fue de: %d\n", cant_dia);
			printf("\nLa temperatura minima en la semana fue de: %d", min);
  	}