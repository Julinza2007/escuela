#include <stdio.h>
/* Se desea procesar los datos de un censo. Se leen la edad y el género de 10 personas.
Informar:
1. Qué porcentaje de varones son menores de edad.
2. Qué porcentaje de mayores son mujeres.
3. Porcentaje de personas no binarias.
4. Edad máxima y a qué género corresponde.
5. Promedio de edad de las mujeres.
6. Edad máxima de los hombres. */

int i, N=10, edad, opc_gen, /*1*/ cont_varon=0, /*1*/cont_meno_varon=0, /*2*/cont_mayo_edad=0, /*2*/cont_mayo_muj=0, /*3*/cont_noBin=0, /*4*/edad_max=0, /*4*/gen_max, /*5*/cont_muj=0, /*5*/acum_edad_muj=0, /*6*/varo_max; 
float /*1*/porc_meno_varon=0, /*2*/porc_mayo_muj=0, /*3*/porc_noBin=0, /*5*/prom_muj_edad=0;
main(){
	printf("Bienvenido al censo de Argentina 2022.");
	
		for(i=0; i < N; i++){
			printf("Ingrese la edad de la persona %d: ", i);
			scanf("%d", &edad);
			printf("Si la persona se identifica como hombre ingrese el numero 0\nSi se identifica mujer ingrese el numero 1.\nSi se identifica como no binario ingrese el numero 2.\n ");
			scanf("%d", &opc_gen);			
						
			if(opc_gen == 0){
				cont_varon = cont_varon + 1;
				if(edad < 18){
					cont_meno_varon =  cont_meno_varon + 1;
				}
				
				if(i==0 || varo_max > edad){
					varo_max=edad;
				}
			}
			
			if(edad >= 18){
				cont_mayo_edad = cont_mayo_edad + 1;
				if(opc_genero == 1){
					cont_mayo_muj= cont_mayo_muj + 1;
				}
			}
			
			if(opc_gen == 2){
				cont_noBin = cont_noBin + 1;
			}
			
			if(opc_gen == 1){
				cont_muj = cont_muj + 1;
				acum_edad_muj = acum_edad_muj + edad;
			}
			
			if(i==0 || edad > edad_max){
				edad_max = edad;
				if(opc_gen == 0){
					gen_max=0;
				}
				else if(opc_gen == 1){
					gen_max=1;
				}
				else if(opc_gen == 2){
					gen_max=2;
				}
			}
						
 		}
 		
/*1*/	porc_meno_varon = (cont_meno_varon * 100) / cont_varon;
/*2*/	porc_mayo_muj = (cont_mayo_muj * 100)	/ cont_mayo_edad;	
/*3*/	porc_noBin = (cont_noBin * 100)	/ N;

	/*5*/if(cont_muj > 0){
		prom_muj_edad = acum_edad_muj / cont_muj;
		}
		else{
			prom_muj_edad=0;
		}
		
 		/*SALIDA*/
 		
 		if(gen_max == 0){
 			printf("El genero con maxima edad de todos es el masculino y la edad es de: %d", edad_max);
		 }
		else if(gen_max == 1){
			printf("El genero con maxima edad de todos es el femenino y la edad es de: %d", edad_max);
		}
		else if(gen_max == 2){
			printf("El genero con maxima edad de todos es el no binarias y la edad es de: %d", edad_max);
		}		
		printf("El porcentaje de varones que son menor de edad es de: %f", porc_meno_varon);
		printf("El porcentaje sobre el total de mayores de edad que son mujeres es de: %f", porc_mayo_muj);
		printf("El porcentaje de personas no binarias es de: %f", porc_noBin);
		printf("El promedio de la edad de las mujeres es de: %f", prom_muj_edad);
		printf("La edad maxima de los hombres es de: %d", varo_max);
 		
 		
	
	
	
	
	
}
