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

Puede que no tenga interacciones y tiene como maximo 10 interacciones en total.

Parte 2:
Repetir esto para 4 dias.
Mostrar:
1. Dia en el que hubo mas mensajes.
2. Que porcentaje de los dias hubo nuevos seguidores.
3. Promedio de likes por dia.
*/

#include <stdio.h>
int i=0, N=2, cont_dia, dias=4, interaccion, cuenta, dia_mensajeMax, cont_consulta=0;
float cont_segui, cont_seguiPublic, cont_mensajes, cont_likes, porc_segui, porc_seguiPublic, mensaje_max, seguidores, acum_likes, porc_nuevosSegui, promedio_likes;

main(){
	printf("Ingrese el tipo de interaccion por favor:\n1. Si hay Seguimientos.\n2. Si hay mensajes.\n3. Si son likes.\n");
	scanf("%d", &interaccion);
	
	for(cont_dia=0; cont_dia < dias; cont_dia++){		
	
	while(interaccion != 0 && i < N){
	
	printf("Ingrese el tipo de cuenta.\n1. Si es una cuenta publica.\n2. Si es una cuenta privada.\n");
	scanf("%d", &cuenta);	
	
	
	if(interaccion == 1){
		cont_segui = cont_segui + 1;
		if(cuenta == 1){
			cont_seguiPublic = cont_seguiPublic + 1;
		}
	}
	else if(interaccion == 2){
		cont_mensajes = cont_mensajes + 1;
	}
	else if(interaccion == 3){
		cont_likes = cont_likes + 1;
	}
	
	if(cont_dia==0 || cont_mensajes > mensaje_max){
		mensaje_max =  cont_mensajes;
		dia_mensajeMax = cont_dia;
	}
	
	
	cont_consulta++;
	i++;
	
	printf("Ingrese el tipo de interaccion por favor:\n1. Si hay Seguimientos.\n2. Si hay mensajes.\n 3. Si son likes.\n");
	scanf("%d", &interaccion);
	
	}
		i=0;
		
		if(cont_segui != 0){
			seguidores = seguidores + 1;
		}
		
		acum_likes = acum_likes + cont_likes;
}
	
	if(cont_consulta != 0){
	porc_segui = (cont_segui * 100) / cont_consulta;
	}
	else{
		porc_segui = 0;
	}
	
	if(cont_segui != 0){
	porc_seguiPublic = (cont_seguiPublic * 100) / cont_segui;
	}
	else{
		porc_seguiPublic = 0;
	}
	
	porc_nuevosSegui = (seguidores * 100) / dias;
	promedio_likes = acum_likes / cont_likes;


printf("\n\nEl porcentaje de las interacciones que fueron seguimientos es de: %f", porc_segui);
printf("\n\nEl porcentaje de los seguimientos que fueron cuentas publicas es de: %f", porc_seguiPublic);
printf("\n\nCantidad de seguimientos: %f\nCantidad de mensajes: %f\nCantidad de likes: %f.", cont_segui, cont_mensajes, cont_likes);
printf("\n\nEl dia en el que hubo mas mensajes es el dia numero %d", dia_mensajeMax);
printf("\n\nEl porcentaje de dias en los que hubo nuevos seguidores es de: %f", porc_nuevosSegui);
printf("\n\nEl promedio de likes por dia es igual a: %f", promedio_likes);


}
