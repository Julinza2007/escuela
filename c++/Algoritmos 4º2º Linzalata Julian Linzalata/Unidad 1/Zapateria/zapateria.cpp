#include <stdio.h>
int client, cant_cuo;
float prec_zap, desc, desc_client, cuotas, monto_total;

main(){
	printf("¿Usted es cliente registrado? \n Opcion 1 si \n Opcion 2 no \n");
	scanf("%d", &client);
	printf("Ingrese por favor el precio del producto: ");
	scanf("%f", &prec_zap);
	printf("Ingrese la cantidad de cuotas: ");
	scanf("%d", &cant_cuo);
	
	if (prec_zap < 200000){
		
		if(prec_zap >= 100000){
			desc= prec_zap * 0.10;
		}
	}
	
	else if (prec_zap < 300000){
	 if (prec_zap >= 200000){
		desc= prec_zap * 0.25;		
	}
}
	else if (prec_zap >= 300000){
		desc= prec_zap * 0.30;
	}
	monto_total= prec_zap - desc;	
	
	if (client == 1){
	 desc_client= prec_zap * 0.05;
	 monto_total= monto_total - desc_client;
	 printf("\n El descuento aplicado por ser cliente registrado es de: $ %f \n", desc_client);
	}
	
	
	
	cuotas= monto_total / cant_cuo;
	
	printf("El descuento aplicado es de: $ %f \n", desc);
	printf("El monto total es de:$ %f \n", monto_total);
	printf("La cantidad de cuotas es de: %d \n", cant_cuo);
	printf("Cada cuota vale: $ %f", cuotas);	
}
