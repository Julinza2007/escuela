/*
Se ingresan las tasas de rendimiento anual de una billetera virtual y de un plazo fijo.
Leer el plazo en meses y el monto a depositar e imprimir el total que retiraria el cliente.
*/
#include <stdio.h>
int i, N=12;
float tasa_bille, tasa_plazo, acum_tasa_bille, acum_tasa_plazo, deposito, total_bille, acum_bille=0, total_plazo, acum_plazo=0;
main(){
	
	for(i=0; i < N; i++){
		printf("Ingrese la tasa de rendimiento del mes %d de una billetera virtual: ", i + 1);
		scanf("%f", &tasa_bille);
		printf("Ingrese la tasa de rendimiento del mes %d de un plazo fijo: ", i + 1);
		scanf("%f", &tasa_plazo);
		printf("Ingrese el monto a depositar: ");
		scanf("%f", &deposito);
		acum_tasa_bille = acum_tasa_bille + tasa_bille;
		acum_tasa_plazo = acum_tasa_plazo + tasa_plazo;		
		acum_bille= acum_bille + deposito;
		acum_plazo= acum_plazo + deposito;		
	}
	total_bille = acum_bille * acum_tasa_bille * 12 / 100;
	total_plazo = acum_plazo * acum_tasa_plazo * 12 / 100;
	
	printf("El rendimiento total que usted retira en una billetera virtual anual es de: %f", total_bille);
	printf("El rendimiento total que usted retira en un plazo fijo anual es de: %f", total_plazo);
	
	
	
	
	
}
