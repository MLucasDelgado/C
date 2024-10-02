#include <stdio.h>

int main()
{
    int cantBlanco = 0, cantLetraComenzadas = 0;

    char frase, letraComenzada, caracterAnterior = ' ';

    printf("Ingrese la letra con la que comienzan las palabras: ");
    scanf("%c", &letraComenzada);

    printf("Ingrese la frase: ");
    getchar(); // Para consumir el salto de línea después de la letra ingresada

    frase = getchar();

    while (frase != '.')
    {
        if (caracterAnterior == ' ' && frase == letraComenzada)
        {
            cantLetraComenzadas++;
        }

        if (frase == ' ')
        {
            cantBlanco++;
        }

        caracterAnterior = frase;

        scanf("%c", &frase);
    }

    printf("Cantidad de palabas que comienzan con la letra: %d \n", cantLetraComenzadas);
    printf("Cantidad de espacios en blancos: %d", cantBlanco);

    return 0;
}