/*
Para procesar las personas que viajan en un crucero, indicar:

1. Porcentaje que viajan a cada destino.
2. En el destino 1 cuantas personas entre 21 y 35 anios viajan. Expresar en porcentaje.
3. Entre las mujeres, cuantas viajan al destino 3. Expresar en porcentaje.
4. Promedio de edades entre los varones.
5. Edad maximo en el destino 1, y minima en el destino 3, y a que genero corresponde.
Se leen la edad de cada uno, si viajan hasta el destino 1, 2 o 3, el genero, y si se siguen cargando datos. Como maximo viajan 20 personas y el usuario indica el fin de la carga.
*/

#include <stdio.h>
int i, N=20, edad, genero, opc_dest, preg, edad_dest1, gen_max, edad_dest3, gen_min;
float cont_dest1=0, cont_dest2=0, cont_dest3=0, porc_dest1, porc_dest2, porc_dest3, cont_21y35=0, porc_21y35, cont_muj=0, cont_mujdest3=0, porc_mujdest3, cont_varon=0, acum_varon=0, prom_varon;

main(){
	do{
		printf("\nIngrese de la persona numero %d la edad: ", i + 1);
		scanf("%d", &edad);
		printf("Indique genero. Si es mujer, 1.\Si es hombre, 2\n");
		scanf("%d", &genero);
		
		 /*VALIDA LA ENTRADA DE DATOS*/while(opc_dest > 3 || opc_dest <= 0){
		printf("Ingrese la opcion del destino, 1, 2 o 3\n");
		scanf("%d", &opc_dest);
		}
		
		printf("Va a seguir queriendo ingresar datos, ingrese 1 si quiere, ingrese otro valor si no quiere.\n");
		scanf("%d", &preg);
		
		if(opc_dest == 1){
			cont_dest1 = cont_dest1 + 1;
			if(edad >= 21 && edad <= 35){
				cont_21y35 = cont_21y35 + 1;
			}
			
			if(cont_dest1 == 1 || edad > edad_dest1){
				edad_dest1 = edad;
				gen_max = genero;
			}
			
		}
		
		else if(opc_dest == 2){
			cont_dest2 = cont_dest2 + 1;
		}
		
		else if(opc_dest == 3){			
			cont_dest3 = cont_dest3 + 1;
			
			if(cont_dest3 == 1 || edad < edad_dest3){
				edad_dest3 = edad;
				gen_min = genero;
			}
		}
			if(genero == 1){
				cont_muj = cont_muj + 1;
				if(opc_dest == 3){
					cont_mujdest3 = cont_mujdest3 + 1;
				}
			}
		
		else if(genero == 2){
			cont_varon = cont_varon + 1;
			acum_varon = acum_varon + edad;
		}
		i++;
		}
		
		while(i < N && preg == 1);	
		
		
		if(i != 0){
			porc_dest1 = (cont_dest1 * 100) / i;
		}
		else{
			porc_dest1 = 0;
		}
		
		if(i != 0){
			porc_dest2 = (cont_dest2 * 100) / i;
		}
		else{
			porc_dest2 = 0;
		}
	
		if(i != 0){
			porc_dest3 = (cont_dest3 * 100) / i;
		}
		else{
			porc_dest3 = 0;
		}
		
		if(cont_dest1 != 0){
		porc_21y35 = (cont_21y35 * 100) / cont_dest1;
		}
		else{
		porc_21y35 = 0;
		}
		
		if(cont_muj != 0){
		porc_mujdest3 = (cont_mujdest3 * 100) / cont_muj;
		}
		else{
			porc_mujdest3 = 0;
		}
		
		if(cont_varon != 0){
		prom_varon = acum_varon / cont_varon;
		}
		else{
			prom_varon = 0;
		}
		
		printf("\n\nEn el destino 1, el porcentaje de personas que viajan es de: %f", porc_dest1);
		printf("\n\nEn el destino 2, el porcentaje de personas que viajan es de: %f", porc_dest2);
		printf("\n\nEn el destino 3, el porcentaje de personas que viajan es de: %f", porc_dest3);
		printf("\n\nEn el destino 1 el porcentaje de personas que viajan que tienen entre 21 y 35 anios es de: %f", porc_21y35);
		printf("\n\nEntre las mujeres, el porcentaje que viajan al destino 3 es de: %f", porc_mujdest3);
		printf("\n\nEl promedio de edades entre los varones es de: %f", prom_varon);
		printf("\n\nEn el destino 1, la edad maxima es de: %d", edad_dest1);
	
		if(gen_max == 1){
			printf(" Y corresponde al genero femenino.");
		}
		else if(gen_max == 2){
			printf(" Y corresponde al genero masculino.");
		}
		printf("\n\nEn el destino 3, la edad minima es de: %d.", edad_dest3);
		if(gen_min == 1){
			printf(" Y corresponde al genero femenino.");
		}
		else if(gen_min == 2){
			printf(" Y corresponde al genero masculino.");
		}
	
	}
	
