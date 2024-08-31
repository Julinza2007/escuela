/*
En un consultorio medico se atienden pacientes, por presentacion espontanea. 
Se atienden 3 especialidades: 1. Guardia, 2. Odontologia. 3. Dermatologia. Como maximo se atienden 3 pacientes. Se leen la edad de cada paciente y si tiene o no obra social. 
Finaliza el programa al ingresar 0 como especialdidad.
Mostrar:
1. Que porcentaje asistio a cada especialidad.
2. Edad minima y por que especialidad consulta.
3. Porcentaje de los menores de edad que se presentaron a la guardia.
4. Rango de edades que se presentaron en odontologia, y si tenian o no cobertura de obra social.
5. Entre los que tienen obra social, que porcentaje se atendieron en dermatologia. Mostrar el promedio de edades.
*/

#include <stdio.h>
int, i=0, N=3, edad, obra_soc, espec; 
float

main(){
	
	printf("Ingrese de la persona numero %d la edad: ");
	scanf("%d", &edad);
	printf("Obra social si 1.\n No otro.\n");
	scanf("%d", &obra_soc);
	printf("Ingrese para guardia 1.\nIngrese para odontologia 2.\Ingrese para dermatologia 3.\n")
	scanf("%d", &espec);
	
	while(espec != 0 && i < N){
		
	printf("Ingrese de la persona numero %d la edad: ");
	scanf("%d", &edad);
	printf("Obra social si 1.\n No. 2.\n");
	scanf("%d", &obra_soc);
	printf("Ingrese para guardia 1.\nIngrese para odontologia 2.\Ingrese para dermatologia 3.\n")
	scanf("%d", &espec);

	if(espec == 1){
		cont_espec1 = cont_espec1 + 1;
	}
	
	else if(espec == 2){
		cont_espec2 = cont_espec2 + 1;
		if(cont_espec2 == 1 || edad < edad_odoMin){
			edad_odoMin = edad;
			if(obra_soc == 1){
				opcion_min = 1;
			}
			else{
				opcion_min = 0;
			}
			
		}
		
		if(cont_espec2 == 1 || edad > edad_odoMax){
			edad_odoMax = edad;
			if(obra_soc == 1){
				opcion_max = 1;
			}
			else{
				opcion_max = 0;
			}
		}
	}
	
	else if(espec == 3){
		cont_espec3 = cont_espec3 + 1;
	}
	
	if(i==0 || edad < edad_min){
		edad_min = edad;
		espec_min = espec;
	}
	
	if(edad < 18){
		cont_menor = cont_menor + 1;
		if(espec == 1){
			cont_menorGuard = cont_menorEspec + 1;
		}
	}
	
	if(obra_soc == 1){
		cont_obraSoc = cont_obraSoc + 1;
		if(espec == 3){
			cont_obraSocDerma = cont_obraSocDerma + 1;
			acum = acum + edad;
		}
	}
	
	i++
		
	}
	
	
	
	if(i != 0){
	porc_espec1 = (cont_espec1 * 100) / i
	}
	else{
		porc_espec1 = 0;
	}
	
	if(i != 0){
	porc_espec2 = (cont_espec2 * 100) / i
	}
	else{
		porc_espec2 = 0;
	}
	
	if(i != 0){
	porc_espec3 = (cont_espec3 * 100) / i
	}
	else{
		porc_espec3 = 0;
	}
	
	if(cont_menor != 0){
	porc_menorGuard	= (cont_menorGuard * 100) / cont_menor;
	}
	else{
		porc_menorGuard = 0;
	}
	
	
	if(cont_obraSoc != 0){
	porc_obraSocDerma = (cont_obraSocDerma * 100) / cont_obraSoc;
	}
	else{
		porc_obraSocDerma = 0;
	}
	
	if(cont_obraSocDerma != 0){
	prom_obraSocDerma = acum / cont_obraSocDerma
	}
	else{
		prom_obraSocDerma = 0;
	}
	
	printf("\n\nEn la especialidad de guardia, el porcentaje de asistencia es de: %f", porc_espec1);
	printf("\n\nEn la especialidad de odontologia, el porcentaje de asistencia es de: %f", porc_espec2);
	printf("\n\nEn la especialidad de dermatologia, el porcentaje de asistencia es de: %f", porc_espec3);
	printf("\n\nLa edad minima es de: %d.", edad_min);
	
	if(espec_min == 1){
		printf(" Corresponde a la especialidad de guardia.");
	}
	else if(espec_min == 2){
		printf(" Corresponde a la especialidad de odontologia.");
	}
	else if(espec_min == 3){
		printf(" Corresponde a la especialidad de dermatologia.");
	}
	
	printf("\n\nEl porcentaje de los menores de edad que se presentaron a la guardia es de: %f.", porc_menorGuard);
	printf("\n\nEl minimo de edad que asistio a dermatologia es de: %d", edad_odoMin);
	if(opcion_min == 1){
	printf("Tiene obra social");	
	}
	else{
		printf("No tiene obra social");
	}
	printf("\n\nEl maximo de edad que asistio a dermatologia es de: %d", edad_odoMax);
	if(opcion_max == 1){
		printf("Tiene obra social.");
	}
	else{
		printf("No tiene obra social.")
	}
	
	printf("\n\n Entre los que tienen obra social, el porcentaje que se atendieron en dermatologia es de: %f.", porc_obraSocDerma);
	printf(" Y la edad promedio entre esos es de: %f", prom_obraSocDerma);
	
	
}



