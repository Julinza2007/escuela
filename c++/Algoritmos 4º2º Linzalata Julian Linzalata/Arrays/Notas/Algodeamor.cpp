#include <stdio.h>

int main(){
    int N = 10; // número de estudiantes
    float notas[N], maxNota = 0, promedio = 0, acum = 0;
    int cont_apro = 0, cont_mayor_prom = 0, cont_menor_prom = 0;
    int i, estudiante_max = 0;

    // Ingresar notas
    for(i = 0; i < N; i++){
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
        
        // Calcular acumulado
        acum += notas[i];
        
        // Verificar si es aprobado
        if(notas[i] >= 6){
            cont_apro++;
        }
        
        // Verificar si es la nota máxima
        if(notas[i] > maxNota){
            maxNota = notas[i];
            estudiante_max = i + 1;
        }
    }

    // Calcular promedio
    promedio = acum / N;

    // Contar estudiantes con notas mayores y menores al promedio
    for(i = 0; i < N; i++){
        if(notas[i] > promedio){
            cont_mayor_prom++;
        } else if(notas[i] < promedio){
            cont_menor_prom++;
        }
    }

    // Calcular porcentajes
    float porc_apro = (cont_apro * 100.0) / N;
    float porc_mayor_prom = (cont_mayor_prom * 100.0) / N;
    float porc_menor_prom = (cont_menor_prom * 100.0) / N;

    // Mostrar resultados
    printf("\n\nEl porcentaje de estudiantes aprobados es de: %.2f%%", porc_apro);
    printf("\nEl número de alumnos que obtuvieron notas mayores al promedio es: %d", cont_mayor_prom);
    printf("\nEl porcentaje de alumnos que obtuvieron notas menores al promedio es: %.2f%%", porc_menor_prom);
    printf("\nLa calificación máxima es: %.2f, correspondiente al estudiante %d", maxNota, estudiante_max);

    // Calcular promedio entre los desaprobados
    float acum_desapro = 0;
    for(i = 0; i < N; i++){
        if(notas[i] < 6){
            acum_desapro += notas[i];
        }
    }
    float promedio_desapro = (acum_desapro / (N - cont_apro));
    printf("\nEl promedio entre los desaprobados es: %.2f", promedio_desapro);

    return 0;
}
