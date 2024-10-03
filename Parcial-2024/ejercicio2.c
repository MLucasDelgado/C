#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatriz(int N, int arreglo[N], int numeroInicial, int numeroFinal) 
{
    int rango, contador = 0;
    
    // Corregimos el rango si está desordenado
    if (numeroInicial > numeroFinal) {
        int temp = numeroInicial;
        numeroInicial = numeroFinal;
        numeroFinal = temp;
    }

    // Generar números aleatorios y buscar múltiplos de 3
    while (contador < N) {
        rango = numeroInicial + rand() % (numeroFinal - numeroInicial + 1);
        
        if (rango % 3 == 0) {
            arreglo[contador] = rango;
            contador++;
        }
    }

    // Imprimir los elementos del arreglo
    printf("Multiplos de 3 dentro del rango:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int N;
    int numeroInicial = 100, numeroFinal = 350;

    // Semilla para los números aleatorios
    srand(time(NULL));

    printf("Ingrese una N cantidad de multiplos de 3 que desea generar: ");
    scanf("%d", &N);

    // Crear el arreglo dinámicamente
    int arreglo[N];

    // Llamar a la función para generar e imprimir los múltiplos
    mostrarMatriz(N, arreglo, numeroInicial, numeroFinal);

    return 0;
}
