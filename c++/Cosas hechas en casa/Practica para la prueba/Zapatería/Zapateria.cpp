#include <stdio.h>
int cliente, cuotas;
float prec_zap, monto_cuo, descuento, desc_client, monto_final;

main(){
	printf("Si usted es cliente registrado ingrese el numero 1\nSi usted no es cliente registrado ingrese el numero 2 \n");
	scanf("%d", &cliente);
	printf("Ingrese precio del producto: ");
	scanf("%f", &prec_zap);
	printf("Ingrese la cantidad de cuotas que desea: ");
	scanf("%d", &cuotas);
	
	if(prec_zap < 200000){
		if(prec_zap < 100000){
			descuento = 0;
			
		}
			else if(prec_zap >= 100000){
				descuento = prec_zap * 0.10;
			}
	}	
	else if(prec_zap < 300000){
		if(prec_zap >= 200000){
		descuento = prec_zap * 0.25;
	}
}
	
	else if(prec_zap >= 300000){
		descuento = prec_zap * 0.30;
	}
	
	monto_final = prec_zap - descuento;
	
	if(cliente == 1){
		desc_client= prec_zap * 0.05;
		monto_final= monto_final - desc_client;
		printf("El descuento por ser cliente registrado es del 5 porciento y equivale a un: %f \n", desc_client);	
	}
	
	monto_cuo = monto_final / cuotas;
	
	
	printf("\nEl monto total a pagar es de: $%f \n", monto_final);
	printf("\nEl descuento aplicado es de: $%f \n", descuento);
	printf("\nLa cantidad de cuotas que usted eligio son: %d \n", cuotas);
	printf("\nEl monto de cada cuota es de: $%f", monto_cuo);
	
	
	
	
	
	
		
}