#include <stdio.h>
int cliente, cuotas;
float monto_entrada, monto_final, monto_cuo, descuento;

main(){
	
	printf("Si usted es cliente habitual ingrese el numero 1 \nSi usted no es cliente habitual ingrese el numero 2 \n");
	scanf("%i", &cliente);
	printf("\nIngrese el precio del vuelo por favor: ");
	scanf("%f", &monto_entrada);
	printf("\nIngrese la cantidad de cuotas que quiere realizar el pago.\n \nHasta 3 cuotas inclusive se aplica un interes del 10 porciento.\nDe 3 hasta 6 cuotas inclusive se aplica un interes del 20 porciento\n");
	scanf("%i", &cuotas);
	
	if(cuotas > 1){
			
		if (cuotas <= 3){
			monto_final = monto_entrada * 1.10;			
		}
		
		else if(cuotas <= 6){
			monto_final = monto_entrada * 1.20;
		}	
	}
	else if(cuotas == 1){
		monto_final = monto_entrada * 1;
	}
		else{
		printf("La cantidad de cuotas que usted ingreso no es valida");
	}
			
	if(cliente == 1){
		descuento = monto_final * 0.15;
		monto_final = monto_final - descuento;	
		printf("Como usted es cliente habitual, se le hizo un descuento del 15 porciento que equivale a un: $%f \n", descuento);
	}
	
	monto_cuo = monto_final / cuotas;
	
	printf("El monto total a pagar es de: $%f \n", monto_final);
	printf("La cantidad de cuotas es de %i \n", cuotas);
	printf("El monto de cada cuota es de $%f", monto_cuo);
		
	
}