#include <stdio.h>
#include <string.h>

#define TAMA 100

int main()
{
    int intentos = 3;
    char palabra[TAMA], palabraOculta[TAMA], letra;

    printf("Ingrese una palabra: ");
    gets(palabra);

    int longitud = strlen(palabra);

    for (int i = 0; i < longitud; i++)
    {
        palabraOculta[i] = '_';
    }

    palabraOculta[longitud] = '\0'; // Asegurarse de que la cadena esté terminada

    printf("Adivina la palabra: \n%s ", palabraOculta);

    while (intentos > 0 && strcmp(palabra, palabraOculta) != 0)
    {
        printf("\nIngresa una letra: ");
        scanf(" %c", &letra); 

        int letrasEncontradas = 0;

        for (int i = 0; i < longitud; i++)
        {
            if (palabra[i] == letra)
            {
                palabraOculta[i] = letra;
                letrasEncontradas = 1; // Marcamos que se encontró la letra
            }
        }

        // Si no se encontraron letras, restar un intento
        if (!letrasEncontradas)
        {
            intentos--;
            printf("Letra incorrecta. Te quedan %d intentos.\n", intentos);
        }

        if (intentos >= 0)
        {
            printf("Adivina la palabra: \n%s", palabraOculta);
        } 
    }

    // Mensajes finales
    if (intentos > 0 && strcmp(palabra, palabraOculta) == 0)
    {
        printf("\nFelicidades. Adivinaste la palabra: %s\n", palabra);
    }
    else
    {
        printf("\nJuego terminado. Perdiste. La palabra era: %s\n", palabra);
    }

    return 0;
}