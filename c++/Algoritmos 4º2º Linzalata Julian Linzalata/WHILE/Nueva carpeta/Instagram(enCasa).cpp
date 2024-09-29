/*
Una cuenta recibe interacciones a lo largo de un día. Pueden ser de 3 tipos:
1. Seguimientos.
2. Mensajes.
3. Likes.
Las interacciones pueden ser de cuentas publicas o privadas. Termina el dia al ingresar 0 como interaccion.
Mostrar:
1. Que porcentaje de las interacciones fueron seguimientos.
2. Que porcentaje de los seguimientos fueron de cuentas publicas.
3. Cuantas interacciones de cada tipo tuvo la cuenta

Puede que no tenga interacciones y tiene como maximo 10 interacciones en total. ---> Esto me está diciendo que es un while.

Parte 2:
Repetir esto para 4 dias.
Mostrar:
1. Dia en el que hubo mas mensajes.
2. Que porcentaje de los dias hubo nuevos seguidores.
3. Promedio de likes por dia.
*/

#include <stdio.h>
int i=0, N=10, interac, privaci, d, cont_mensajeMax=0, dia_mensajeMax=0, i_total=0, cont_seguiNuevoXdia=0;
float cont_segui=0, cont_mensaje=0, cont_like=0, porc_segui=0, cont_seguiPublic=0, porc_seguiPublic=0, acum_seguiPublic, acum_segui, acum_mensaje, acum_like, promedio_likesXdia, porc_seguiNuevoXdia;
main(){

	
	
	for(d=0; d < 4; d++){	
	printf("Ingrese de la interaccion numero %d:\nSi es de seguimiento marque 1.\nSi es de mensaje marque 2.\nSi es de like marque 3.\n", i + 1);
	scanf("%d", &interac);
	
	while(interac < 0 || interac > 3){
		printf("Error, flaco hiciste mal lo que te pedi. Ingresa de nuevo:");
		scanf("%d", &interac);
	}
	while(interac != 0 && i < N){
	printf("Si la cuenta es publica ingrese 1.\nSi la cuenta es privada ingrese 2.\n");
	scanf("%d", &privaci);
	
	while(privaci < 1 || privaci > 2){
		printf("Error, flaco hiciste mal lo que te pedi. Ingresa de nuevo:");
		scanf("%d", &privaci);
	}
	
	if(interac == 1){
		cont_segui = cont_segui + 1;
		if(privaci == 1){
			cont_seguiPublic = cont_seguiPublic + 1;
		}
	}
	
	else if(interac == 2){
		cont_mensaje = cont_mensaje + 1;
	}
	
	else if(interac == 3){
		cont_like = cont_like + 1;
	}
	
	i++;
    i_total++; //  ----> Para hacer correctamente calculos.

	if(i < 10){
		printf("Ingrese de la interaccion numero %d:\nSi es de seguimiento marque 1.\nSi es de mensaje marque 2.\nSi es de like marque 3.\n", i + 1);
		scanf("%d", &interac);
		while(interac < 0 || interac > 3){
		printf("Error, flaco hiciste mal lo que te pedi. Ingresa de nuevo:");
		scanf("%d", &interac);
		}
	}
	
	}
	acum_seguiPublic = acum_seguiPublic + cont_seguiPublic;
	acum_segui = acum_segui + cont_segui;
	acum_mensaje = acum_mensaje + cont_mensaje;
	acum_like = acum_like + cont_like;
	
	if(d == 0 || cont_mensaje > cont_mensajeMax){
		cont_mensajeMax = cont_mensaje;
		dia_mensajeMax = d + 1;
	}
	
	if(cont_segui != 0){
		cont_seguiNuevoXdia = cont_seguiNuevoXdia + 1;
	}
	
	if(i != 0){
	promedio_likesXdia = acum_like / i;
	}
	else{
		promedio_likesXdia = 0;
	}
	
	printf("El promedio de likes en el dia numero %d, es de: %f ", d + 1, promedio_likesXdia);
	
	i=0;
	cont_segui = 0;
	cont_seguiPublic = 0;
	cont_mensaje = 0;
	cont_like = 0;
}
	
	if(i_total != 0){
	porc_segui = (acum_segui * 100) / i_total;
	}
	else{
		porc_segui = 0;
	}
	
	if(acum_segui != 0){
	porc_seguiPublic = (acum_seguiPublic * 100) / acum_segui;
	}
	else{
		porc_seguiPublic = 0;
	}
	
	porc_seguiNuevoXdia= (cont_seguiNuevoXdia * 100) / 4;
	
	
printf("\n\nEl porcentaje de las interacciones que fueron seguimientos es de: %f", porc_segui);
printf("\n\nEl porcentaje de los seguimientos que fueron cuentas publicas es de: %f", porc_seguiPublic);
printf("\n\nCantidad de seguimientos: %f\nCantidad de mensajes: %f\nCantidad de likes: %f.", acum_segui, acum_mensaje, acum_like);	

printf("\n\nCon %f mensajes, el dia que mas tuvo de estos fue el dia numero %d", cont_mensajeMax, dia_mensajeMax);
printf("\n\nEl porcentaje de dias que se registraron nuevos seguidores es de: %f", porc_seguiNuevoXdia);
		
}