// --------------- PUNTO 1 ---------------

#include <stdio.h>

int main()
{
    int cantidadPalabrasConOn = 0;
    char frase, caracterAnterior1 = ' ', caracterAnterior2 = ' ';

    printf("Ingrese la frase (con un punto final): ");
    scanf("%c", &frase);

    while (frase != '.')
    {
        if (frase != ' ')
        {
            if (caracterAnterior2 == 'o' && caracterAnterior1 == 'n')
            {
                cantidadPalabrasConOn += 1;
            }
        }

        caracterAnterior2 = caracterAnterior1;
        caracterAnterior1 = frase;

        if (caracterAnterior2 == 'o' && caracterAnterior1 == 'n')
        {
            cantidadPalabrasConOn += 1;
        }

        scanf("%c", &frase);
    }

    printf("Cantidad de palabras terminadas en 'on': %d\n", cantidadPalabrasConOn);

    return 0;
}

// --------------- PUNTO 2 ---------------