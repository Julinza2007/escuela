/*
Se leen los valores de las precipitaciones a lo largo de un mes en milimetros (mm). Finaliza la carga al ingresar un valor negativo.
Puede ser que ese mes no se hayan provocado lluvias. Indicar:

1.	Porcentaje de las lluvias que superaron los 3mm. 	
2.	Dia en que mas llovio.
3.	Promedio entre las precipitaciones menores a 3mm.
4.	Entre los dias en que las lluvias fueron menores a 5mm, que porcentaje supero los 3.5mm.
*/

#include <stdio.h>

int i=0, N=3, diaMax;
float preci, cont_mas3=0, acum_menos3, cont_menos3, promedio, cont_5, cont_3_con5, porc_mas3, porc_mas3_con5, preci_max;

main(){
	printf("Ingrese del dia numero %d las precipitaciones: ", i);
	scanf("%f", &preci);
	
	while(preci >=0 && i < N){
		i++;
		
		if(preci > 3){
			cont_mas3 = cont_mas3 + 1;
		}
		
		else if(preci < 3){
			acum_menos3 = acum_menos3 + preci;
			cont_menos3 = cont_menos3 + 1;
		}
		
		if(i == 1 || preci > preci_max){
			diaMax = i;
		}
		
		if(preci < 5){
			cont_5 = cont_5 + 1;
			if(preci > 3.5){
				cont_3_con5 = cont_3_con5 + 1;
			}
		}
		
		printf("Ingrese del dia numero %d las precipitaciones: ", i);
		scanf("%f", &preci);
			
	}
	
	if(i != 0){
	porc_mas3 = (cont_mas3 * 100) / i;
	}
	else{
		porc_mas3 = 0;
	}
	
	if(cont_menos3 ){
	promedio = acum_menos3 = cont_menos3;	
	}
	else{
	promedio = 0;
	}
	
	porc_mas3_con5 = (cont_3_con5 * 100) / cont_5;
	
	printf("\n\nEl porcentaje de los dias en los que las precipitaciones fueron menores a 3 es de: %f", porc_mas3_con5);
	printf("\n\nEl dia de mas precipitaciones es el dia numero %d", diaMax);
	printf("\n\nEl promedio entre las precipitaciones menores a 3mm es de: %f", promedio);
	printf("\n\nEntre los dias en que las precipitaciones son menores a 5mm, las precipitaciones que fueron mayores a 3.5mm es de: %f", porc_mas3_con5);
		
	
}
