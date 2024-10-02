#include <stdio.h>
#include <string.h>

#define TAMA 100

int main() {
    char nombre[50], apellido[50];
    char nombreCompleto[TAMA];
    int i, j;

    // Ingreso del nombre y apellido
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);

    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    // Copiamos el apellido a nombreCompleto
    for (i = 0; apellido[i] != '\0'; i++) {
        nombreCompleto[i] = apellido[i];
    }

    // Añadimos la coma y el espacio
    nombreCompleto[i++] = ',';  // Añadimos la coma
    nombreCompleto[i++] = ' ';  // Añadimos el espacio

    // Copiamos el nombre después de la coma y el espacio
    for (j = 0; nombre[j] != '\0'; j++, i++) {
        nombreCompleto[i] = nombre[j];
    }

    /*
        Añadimos el carácter nulo al final para que
        el programa sepa cuándo detenerse al leer la cadena y no siga
        leyendo basura de memoria más allá de lo que debería.
    */ 
    nombreCompleto[i] = '\0';

    // Mostramos el resultado
    printf("Nombre completo: %s\n", nombreCompleto);

    return 0;
}