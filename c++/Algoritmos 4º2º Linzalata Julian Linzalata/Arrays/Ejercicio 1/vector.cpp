#include <stdio.h>

float vector[5];
int i, N = 5;

int main() {
    for (i = 0; i < N; i++) {
        printf("Ingrese para la posicion %d el valor: ", i);
        scanf("%f", &vector[i]);
    }

    printf("El valor de la lista es igual a:\n");
    printf("_______________________________________________________________\n");

    for (i = 0; i < N; i++) {
        printf("|%f|", vector[i]);
    }

    printf("\n-------------------------------------------------------------\n");

}

