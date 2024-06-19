/*
Se ingresan las tasas de rendimiento anual de una billetera virtual y de un plazo fijo.
Leer el plazo en meses y el monto a depositar e imprimir el total que retiraria el cliente.
*/
#include <stdio.h>
int i, N=12;
float tasa_bille, tasa_plazo, deposito, total_bille, acum_bille=0, total_plazo, acum_plazo=0;
main(){
		printf("Ingrese la tasa de rendimiento anual de una billetera virtual: ");
		scanf("%f", &tasa_bille);
		printf("Ingrese la tasa de rendimiento anual de un plazo fijo: ");
		scanf("%f", &tasa_plazo);
		printf("Ingrese el monto a depositar: ")
		scanf("%f", &deposito);	
	for(i=0; i < N; i++){
		acum_bille= acum_bille + deposito;
		acum_plazo= acum_plazo + deposito;		
	}
	
	total_bille= acum_bille * (tasa_bille);
	total_plazo= acum_plazo + (acum_plazo * (tasa_plazo));
	
	
	
	
	
	
}
