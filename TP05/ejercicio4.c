#include <stdio.h>

#define TAMA 100

void cargarMatriz(int matriz[TAMA][TAMA], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[TAMA][TAMA], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrizUna[TAMA][TAMA], matrizDos[TAMA][TAMA], matrizSuma[TAMA][TAMA];
    int filas, columas;

    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d", &filas);
    columas = filas;

    printf("Cargar la primera matriz:\n");
    cargarMatriz(matrizUna, filas, columas);

    printf("Cargar la segunda matriz:\n");
    cargarMatriz(matrizDos, filas, columas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columas; j++)
        {
            matrizSuma[i][j] = matrizUna[i][j] + matrizDos[i][j];
        }
    }

    printf("\nMatriz 1:\n");
    mostrarMatriz(matrizUna, filas, columas);

    printf("\nMatriz 2:\n");
    mostrarMatriz(matrizDos, filas, columas);

    printf("\nMatriz Suma:\n");
    mostrarMatriz(matrizSuma, filas, columas);

    return 0;    
}