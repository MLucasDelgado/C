#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 15

void cargarArreglo(int arreglo[], int tama, int num1, int num2)
{
    for (int i = 0; i < tama; i++)
    {
        arreglo[i] = (rand() % (num2 - num1)) + num1;
    }
}

void mostrarArreglo(int arreglo[], int tama) {
    printf("Numeros en el arreglo:\n");
    for (int i = 0; i < tama; i++) {
        printf("Arreglo[%d] = %d \n",i, arreglo[i]);  // Mostrar cada elemento
    }

    // Encontrar el número más grande
    int maximo = arreglo[0];
    for (int i = 1; i < tama; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    printf("El numero mas grande es: %d\n", maximo);
}

void mostrarPromedio(int arreglo[], int tama)
{
    int contadorImpares = 0;
    int sumaImpares = 0;
    float promedio = 0.0;
    for (int i = 1; i < tama; i = i + 2)
    {
        sumaImpares += arreglo[i];
        contadorImpares++;
    }

    if (contadorImpares > 0) {
        promedio = (float) sumaImpares / contadorImpares;  // Convertir a float para evitar divisiones enteras
        printf("El promedio en las posiciones impares es: %.2f", promedio);
    } else {
        printf("No hay posiciones impares en el arreglo.\n");
    }
}

int reemplazarMayor(int arreglo[], int tama)
{
    int nuevoValor;
    for(int i = 0; i < tama; i++){
        if(arreglo[i] > 300){
            printf("\nEl numero %d en la posicion %d del arreglo es mayor a 300.\nIngrese un nuevo valor para reemplazarlo: ", arreglo[i], i);
            scanf("%d", &nuevoValor);

            arreglo[i] = nuevoValor;
        }
    }
    
}

void incrementoImpares (int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
       if(arreglo[i] % 2 != 0) {
            arreglo[i] += 1;
       }
    }
    
}



int main()
{
    int arreglo[TAMA];
    srand(time(NULL));

    cargarArreglo(arreglo, TAMA, 10, 350);
    mostrarArreglo(arreglo, TAMA);
    mostrarPromedio(arreglo, TAMA);
    reemplazarMayor(arreglo, TAMA);
    mostrarArreglo(arreglo, TAMA); // muestro el arreglo con los cambios;
    incrementoImpares(arreglo, TAMA);
    mostrarArreglo(arreglo, TAMA);
}