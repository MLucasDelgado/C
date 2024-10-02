#include <stdio.h>

int main () {
    int numeroUno, numeroDos, min, max, rango, cantPares = 0, sumaImpares = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    if(numeroUno > numeroDos){
        min = numeroDos;
        max = numeroUno;
    } else {
        min = numeroUno;
        max = numeroDos;
    }

    rango = (max - min) + 1;

    for(int i = min; i <= max; i++){
        if(i % 2 == 0){
            cantPares++;
        } else {
            sumaImpares += i;
        }
    }

    printf("La cantidad del rango entre los dos numeros es de: %d \n", rango);
    printf("La cantidad de numeros pares entre estos numeros es de: %d \n", cantPares);
    printf("La suma de los numeros impares entre estos numeros es de: %d \n", sumaImpares);

    return 0;
}