/* SE DESEA REALIZAR UN PROGRAMA PARA PROCESAR LA CANTIDAD DE PERSONAS QUE USAN EL TREN.EN CADA ESTACION,SE LEEN LA CANTIDAD DE PERSONAS QUE INGRESAN.SON 10 ESTACIONES.
INFORMAR:
1_PORCENTAJE DE LAS ESTACIONES DONDE SUBIERON MAS DE 100 PERSONAS
2_NUMERO DE ESTACION EN LA QUE SUBIO MENOS GENTE
3_PROMEDIO DE LAS PERSONAS QUE SUBEN POR ESTACION
4_PROMEDIO ENTRE LAS ESTACIONES EN LAS QUE SUBIERON MAS DE 250 PERSONAS
5_MAXIMO DE PERSONAS ENTRE LAS ESTACIONES EN LAS QUE HUBO MAS DE 250 PERSONAS 
*/
#include <stdio.h>
float personas,cont_100=0,estacion_min,min_person,acum_person=0,cont_person=0,acum_250=0,cont_250=0,max_person250,estacion_max,por_100,pro_personas,pro_250;
int n=10,i;
main(){
	for(i=0;i<n;i++)
{
        printf("Ingresar la cantidad de personas en la estacion de tren \n");
        scanf("%f", & personas);
        acum_person=acum_person + personas;
        cont_person=cont_person+1;
        if(personas > 100)
        {
        	cont_100=cont_100+1;
		}
		if(i==0 || personas<min_person)
		{
			min_person=personas;
			estacion_min=i;
		}
		if(personas>250)
		{
			acum_250=acum_250+personas;
			cont_250=cont_250+1;
		}
		if(i==0 || cont_250>max_person250)
		{
			max_person250=personas;
			estacion_max=i;
		}
}
        if(cont_100 == 0)
        {
        	por_100=0;
        	printf("No hubieron estaciones con mas de 100 personas \n");
		}
		else
		{
			por_100=(cont_100*100)/n;
			printf("El porcentaje de estaciones en las cuales subieron mas de 100 personas es %f \n",por_100);
		}
		if(cont_250==0)
		{
			pro_250=0;
			printf("No hay estaciones en las cuales existan mas de 250 personas \n");
			max_person250=0;
			printf("No hay estaciones con mas de 250 personas como para tomar un valor maximo \n");
		}
		else
		{
			pro_250=acum_250/cont_250;
			printf("El promedio de las personas donde subieron mas de 250 personas entre cada estacion es %f \n",pro_250);
			printf("El maximo de personas que hay en las estaciones mayores de 250 pasajeros es %f \n",max_person250);
		    printf("| Y el numero de estacion correspondiente a ese valor es la %f \n",estacion_max);
		}
		pro_personas=acum_person/cont_person;
		printf("El promedio de las personas que suben por estacion es %f \n",pro_personas);
		printf("La estacion en la cual subio menos gente es la %f \n",estacion_min);
		printf("| Y la cantidad de personas en esa estacion es %f \n",min_person);
}

