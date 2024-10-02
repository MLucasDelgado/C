#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mostrarMatriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transponerMatriz(int N, int matriz[N][N], int transpuesta[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int N, matriz[N][N], transpuesta[N][N];
    srand(time(NULL));

    printf("Ingrese el tamano de la matriz NxN: ");
    scanf("%d", &N);

    // Llenar la matriz original con valores aleatorios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100; // valores aleatorios entre 0 y 99
        }
    }

    printf("\nMatriz original:\n");
    mostrarMatriz(N, matriz);

    // Transponer la matriz
    transponerMatriz(N, matriz, transpuesta);

    printf("\nMatriz transpuesta:\n");
    mostrarMatriz(N, transpuesta);

    return 0;
}