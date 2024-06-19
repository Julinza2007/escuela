/* Se ingresan la cantidad de ventas y el monto total facturado en un negocio por dia lo largo de una semana.
Mostrar:
1. Dia en el que hubo mas ventas y cuanto se facturo
2. Dia en el que mas se facturo
3. Cuantos dias se realizaron mas de 10 ventas. Expresar el valor en porcentaje.
4. Promedio de los dias en los que se facturo mas de 5 mil pesos.
5. Promedio de ventas de los dias en los que se facturo menos de 10 mil pesos.
*/

#include <stdio.h>
int i, N=7, ventas, /*1*/ventas_max,  /*2*/dia_max_factu;
float monto_dia, /*1*/ventas_factu_max, /*3*/cont_dia=0, /*3*/porc_ventas=0, /*4*/cont_may=0, /*4*/acum_may=0, /*4*/prom_may=0, 
/*5*/cont_vent_min=0, /*5*/acum_vent_min=0, /*5*/prom_vent_min=0; 
main(){
    for(i=0; i < N; i++){

        printf("Ingrese la cantidad de ventas hechas en el dia numero %d: ", i);
        scanf("%d", &ventas);
        printf("Ingrese el monto total que se facturo: ");
        scanf("%f", &monto_dia);
        
        if(i==0 || ventas > ventas_max){
        
        ventas_max=ventas;
        ventas_factu_max= monto_dia;
               
            }
        
        if(i==0 || monto_dia > dia_max_factu){
            
           dia_max_factu= i;

            }
        
        if(ventas > 10){
            cont_dia= cont_dia + 1;
            }
        
        
        if(monto_dia > 5000){
            cont_may= cont_may + 1;
            acum_may= acum_may + monto_dia;
            if(monto_dia < 10000){
            cont_vent_min= cont_vent_min + 1;
            acum_vent_min= acum_vent_min + ventas;
            }
        }
       
    }    
    
    /*3*/ porc_ventas=(cont_dia * 100) / N;
    /*4*/ prom_may= acum_may / cont_may;
    /*5*/ prom_vent_min= acum_vent_min / cont_vent_min;
    
    /*SALIDAS*/
    printf("\n\nEl dia en el que hubo mas ventas fue el dia: %d ", ventas_max);     
    printf("Y se facturo: %d",  ventas_factu_max);        
    printf("\nEl dia en el que mas se facturo fue el dia: %d", dia_max_factu);
    printf("\nLa cantidad de dias en que se realizaron mas de 10 ventas en base al total es de: %f", porc_ventas);
    printf("\nEl promedio de los dias en los que se facturo mas de 5000$ es de: %f", prom_may);
    printf("\nEl promedio de las ventas de los dias en que se facturo menos de 10000$ es de: %f", prom_vent_min);
    


}

