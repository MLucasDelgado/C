#include <stdio.h>

int main () {
    int numeroIngresado, totalPrimos = 0, sumaPrimos = 0, divisorPrimos;

    for (int i = 1; i <= 10; i++) {
        printf("Ingrese su numero: ");
        scanf("%d", &numeroIngresado);

        divisorPrimos = 0;
        for (int j = 1; j <= numeroIngresado; j++) {
            if (numeroIngresado % j == 0) {
                divisorPrimos++;
            }
        }

        if (divisorPrimos == 2) {
            printf("El numero ingresado es primo: %d\n", numeroIngresado);
            totalPrimos++;
            sumaPrimos += numeroIngresado;
        } else {
            printf("El numero ingresado no es primo: %d\n", numeroIngresado);
        }
    }

    printf("\nSe termino la secuencia, los resultados son: \n");
    printf("Cantidad total de primos: %d \n", totalPrimos);
    printf("Suma total de todos los primos: %d \n", sumaPrimos);

    return 0;
}
// scanf("%c", &ar) es lo mismo que ar = getchar()