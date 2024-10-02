#include <stdio.h>
#include <string.h>

#define TAMA 100

int main () {
    char primerNombre[50], segundoNombre[50], apellido[50];
    char nombreCompleto[TAMA];
    int i, j, k;

    // Ingreso del nombre y apellido
    printf("Ingrese su primer nombre: ");
    scanf("%s", primerNombre);

    printf("Ingrese su segundo nombre: ");
    scanf("%s", segundoNombre);

    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    for (i = 0; apellido[i] != '\0'; i++)
    {
        nombreCompleto[i] = apellido[i];
    }

    for (j = 0; primerNombre[j] != '\0'; j++, i++)
    {
        nombreCompleto[i] = primerNombre[j];
    }

     for (k = 0; segundoNombre[k] != '\0'; k++, i++)
    {
        nombreCompleto[i] = segundoNombre[k];
    }

    nombreCompleto[i++] = '.';
    
    nombreCompleto[i] = '\0';

     // Mostramos el resultado
    printf("Nombre completo: %s\n", nombreCompleto);

    return 0;
    
}