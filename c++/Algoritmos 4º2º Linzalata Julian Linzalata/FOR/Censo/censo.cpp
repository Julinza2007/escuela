/* Se desea procesar los datos de un censo.
Se leen la edad y el género de 10 personas.
Informar: 
1. Que porcentaje de varones son menores de edad.
2. Qué porcentaje de personas mayores de edad son mujeres.
3. Porcentaje de personas no binarias.
4. Edad máxima y a qué genero corresponde.
5. Promedio de edad de las mujeres.
6. Edad máxima de los hombres. */
#include <stdio.h>
int i, N=10, edad, opc_genero, /*4*/edad_max=0, /*4*/max_gen=0, /*4*/varon_edad_max=0, /*1*/cont_varon=0, /*1*/cont_varon_menor=0, /*2*/cont_muj_mayor=0, /*2*/cont_total_mayor=0, /*5*/cont_muj=0, /*5*/acum_muj_edad=0, /*3*/cont_nobin=0;
float /*1*/porc_varon_menor, /*2*/porc_mujer_mayor, /*3*/porc_nobin, /*5*/prom_mujer_edad=0; 

main(){
	printf("Bienvenido al censo del 2022 de Argentina.\n");
	
	for(i=0; i < N; i++){
	printf("\nIngrese la edad de la persona %d por favor: ", i);
	scanf("%d", &edad);
	printf("Si la persona se reconoce hombre, ingrese el numero 0.\nSi se reconoce mujer, ingrese el numero 1.\nSi se reconoce como genero no binario ingrese 2.\n");
	scanf("%d", &opc_genero);	
	
	if(opc_genero == 0){
		cont_varon = cont_varon + 1;
		/*Cuando pide una edad maxima o minima de un genero en especifico se debe poner el contador de varones en 1*/
		if(cont_varon=1 || edad > varon_edad_max){
			varon_edad_max=edad;
		}
		
		if(edad < 18){
			cont_varon_menor = cont_varon_menor + 1;
			}
	}	
	
	 if(edad >= 18){
	cont_total_mayor = cont_total_mayor + 1;
		if(opc_genero == 1){
			cont_muj_mayor = cont_muj_mayor + 1;
		}
	}
	
	if(opc_genero == 2){
		cont_nobin = cont_nobin + 1;
	}	
	else if(opc_genero == 1){
		cont_muj = cont_muj + 1;
		acum_muj_edad = acum_muj_edad + edad;
	}
	
	if (i == 0 || edad > edad_max){
		edad_max=edad;
		
		/*No hace falta poner esos if.
		Se puede poner as�:
		
		if(i == 0 || edad > edad_max){
		edad_max = edad;
		max_gen = opc_genero;
		}*/
		
		if(opc_genero == 0){
			max_gen=0;
		}
		else if(opc_genero == 1){
			max_gen=1;
		}
		else if(opc_genero == 2){
			max_gen=2;
		}	
		}
		
	}
	if(cont_varon > 0){
	/*1*/ porc_varon_menor = (cont_varon_menor * 100) / cont_varon;
	}
	else{
		porc_varon_menor=0;
	}
	if(cont_total_mayor > 0){
	/*2*/ porc_mujer_mayor = (cont_muj_mayor * 100) / cont_total_mayor;
	}
	else{
		porc_mujer_mayor=0;
	}
	/*3*/ porc_nobin = (cont_nobin * 100) / N;
	
	/*5*/ if (cont_muj > 0){
	prom_mujer_edad = acum_muj_edad / cont_muj;
	}
	else{
		prom_mujer_edad=0;
	}
	/* Salida */
	
	if(max_gen == 0){
		printf("\nLa edad maxima de las 10 personas pertenece al genero masculino y es de: %d", edad_max);
	}
	else if(max_gen == 1){
		printf("\nLa edad maxima de las 10 personas pertenece al genero femenino y es de: %d", edad_max);
	}
	else if(max_gen == 2){
		printf("\nLa edad maxima de las 10 personas pertenece al genero no binario y es de: %d", edad_max);
	}
	
	printf("\nLa edad maxima del genero masculino es de: %d", varon_edad_max);
	printf("\nEl porcentaje de varones menores de edad es de: %f", porc_varon_menor);
	printf("\nEl porcentaje de personas mayores de edad que son mujeres es de: %f", porc_mujer_mayor);
	printf("\nEl porcentaje de personas que se reconocen con el genero no binario es de: %f", porc_nobin);
	printf("\nEl promedio de edad de las mujeres es de: %f", prom_mujer_edad);
		
}
