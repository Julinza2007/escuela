/*Se desea realizar un programa para cargar las puntuaciones de 5 participantes como maximo en un torneo.
Se leen los puntos y la edad de cada participante. Se desea saber:

1.	Participante ganador y que edad tiene (el participante que hizo mas puntos).
2.	Promedio de los puntos obtenidos entre los menores a 18 anios.
3.	Porcentaje de los participantes, dentro de los mayores de edad, que hayan superado los 50 puntos.
4.	Que puntuacion obtuvo el participante mas joven.
5. 	Porcentaje de los participantes mayores a 50 anios.
Finaliza la carga al ingresar 0 como puntuacion. Puede que ser que no se presenten participantes.
*/

#include <stdio.h>
int i=0, N=5, puntos, edad, puntos_max=0, i_max=0, edad_ganador=0, edad_min=0, puntos_jov=0;
float acum=0, cont_mas18=0, cont_mas50anios=0, cont_mas50punt=0, promedio=0, porc_mas50punt, porc_mas50anios;

main(){
	
	printf("Ingrese del participante numero %d la puntuacion: ", i);
	scanf("%d", &puntos);

	
	while(puntos != 0 && i < N){
		printf("Ingrese de ese participante su edad: ");
		scanf("%d", &edad);
		
		if(i==0 || puntos > puntos_max){
			puntos_max = puntos;
			i_max = i;
			edad_ganador = edad;
		}
		
		if(i==0 || edad < edad_min){
			edad_min = edad;
			puntos_jov = puntos;
		}
		
		if(edad < 18){
			acum = acum + puntos;
		}
		
		
		else if(edad >= 18){
			cont_mas18 = cont_mas18 + 1;
			
			if(edad > 50){
				cont_mas50anios = cont_mas50anios + 1;
			}
			
			if(puntos > 50){
				cont_mas50punt = cont_mas50punt + 1;
			}
		}
				
	i++;
	
	printf("\nIngrese del participante numero %d la puntuacion: ", i);
	scanf("%d", &puntos);
	}
	
	if(i!=0){
		promedio = acum / i;
	}
	else{
		promedio = 0;
	}
	
	if(cont_mas18 != 0){
	porc_mas50punt = (cont_mas50punt * 100) / cont_mas18;
	}
	else{
		porc_mas50punt = 0;
	}
	
	if(i != 0){
	porc_mas50anios = (cont_mas50anios * 100) / i;
	}
	else{
		porc_mas50anios = 0;
	}
	
	printf("\n\nEl participante ganador es el participante numero %d, con %d puntos, con %d anios de edad.", i_max, puntos_max, edad_ganador);
	printf("\n\nEl promedio de puntos obtenidos entre los menores a 18 anios es de: %f", promedio);
	printf("\n\nEl porcentaje de los participantes, dentro de los mayores de edad, que superaron los 50 puntos es de: %f", porc_mas50punt);
	printf("\n\nLa puntuacion que obtuvo el participante mas joven es de: %d puntos, con %d anios de edad", puntos_jov, edad_min);
	printf("\n\nEl porcentaje de los participantes mayores a 50 anios es de: %f", porc_mas50anios);
}

