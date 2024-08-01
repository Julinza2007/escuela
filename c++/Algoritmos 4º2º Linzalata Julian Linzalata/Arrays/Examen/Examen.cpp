/*
Parecido a la prueba:
Se almacenan en un vector las calificaciones de 5 examenes.
Mostrar:
1. Entre los aprobados que porcentaje tuvieron 9(nueves) y 10(dieces)
2. Nota maxima entre los desaprobados, y su posicion de memoria.
3. Posiciones de memoria de las notas menores al promedio.
4. Posiciones de memoria de las notas mayores a un valor que ingrese el usuario.
5. Mostrar el vector ordenado de menor a mayor.
*/

#include <stdio.h>
int i, nota[5], J, aux, N=5, max_desap=0, maxDesap_i, valor;
float cont_apro=0, cont_nueve=0, cont_diez=0, acum, promedio, porcNueve, porcDiez;
main(){
	for(i=0; i < N; i++){
		printf("Ingrese del examen numero %d, la nota: ", i + 1);
		scanf("%d", &nota[i]);
		
		if(nota[i] >= 6){
			cont_apro = cont_apro + 1;
			if(nota[i] == 9){
				cont_nueve= cont_nueve + 1;
			}
			else if(nota[i] == 10){
				cont_diez = cont_diez + 1;
			}
		}
		
		else if(nota[i] < 6){
			if(i==0 || nota[i] < max_desap){
				max_desap = nota[i];
				maxDesap_i = i + 1;
			}
		}
		
		acum= acum + nota[i];
	}
	promedio = acum / N;
	
	porcNueve = (cont_nueve * 100) / cont_apro;
	porcDiez = (cont_diez * 100) / cont_apro;
	
	printf("Las posiciones de memoria en el que las notas superaron al promedio:\n\n");
	
	for(i=0; i < N; i++){
		if(nota[i] > promedio){
			printf("Posicion |%d|, Nota|%d|\n\n", i + 1, nota[i]);
		}
	}
	
	printf("Ahora ingrese un valor por favor: ");
	scanf("%d", &valor);
	
	for(i=0; i < N; i++){
		if(nota[i] > valor){
			printf("\n\nPosicion de memoria |%d| Nota |%d| ", i + 1, nota[i]);
		}
	}
	
	for(J=1; J < N; J++){
		for(i=0; i < N-J; J++){
			if(nota[i] > nota[i + 1]){
				aux = nota[i];
				nota[i] = nota[i + 1];
				nota[i + 1] = aux;
			}
			
		}
		
	}
	
	printf("\n\nPosiciones de menor a mayor:");
	for(i=0; i < N; i++){
		printf("\n\nPosicion |%d|, Nota |%d|", i + 1, nota[i]);
	}	
	
}
