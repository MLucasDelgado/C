#include <stdio.h>

int main () {
    float lengua, matematicas, sociales, promedio;
    printf("Indique la nota de Lengua: ");
    scanf("%f", &lengua);

    printf("Indique la nota de Matematicas: ");
    scanf("%f", &matematicas);

    printf("Indique la nota de Sociales: ");
    scanf("%f", &sociales);

    promedio = (lengua + matematicas + sociales) / 3;
    printf("Su promedio fue de: %.2f \n", promedio);

    if(promedio >= 9){
        printf("Excelente");
    } else if (promedio >= 7){
        printf("Muy bueno");
    } else if(promedio >= 5){
        printf("Regular");
    } else {
        printf ("Reprobado");
    }
    return 0;
}