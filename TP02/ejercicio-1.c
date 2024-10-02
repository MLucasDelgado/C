#include <stdio.h>

int main() {
    int incremento;
    int decremento;
    
    printf("Ingrese un numero entero para 'incremento': ");
    scanf("%d", &incremento);

    printf("Ingrese un numero entero para 'decremento': ");
    scanf("%d", &decremento);

    incremento++;
    // incremento = incremento + 1;
    // incremento += 1
    decremento--;
    // decremento = decremento - 1;
    // decremento -= 1

    printf("Valor de la variable incremento: %d \n", incremento);
    printf("Valor de la variable decremento: %d \n", decremento);

    int cambio;
    cambio = incremento;
    incremento = decremento;
    decremento = cambio;

    printf("Valor nuevo de la variable incremento: %d \n", incremento);
    printf("Valor nuevo de la variable decremento: %d \n", decremento);

    return 0;
}