#include <stdio.h>

int main()
{
    int numeroIntroducido;
    printf("Ingrese un valor numerico entre 0 y 255: ");
    scanf("%d", &numeroIntroducido);

    if (numeroIntroducido < 0 || numeroIntroducido > 255) {
        printf("Valor fuera de rango. Ingrese un numero entre 0 y 255.\n");
        return 1; // para que corte la ejecucion.
    }

    char numeroConvertido = (char)numeroIntroducido; // Convertimos el num ingresado en un caracter segun la tabla ASCII.

    if (numeroConvertido >= 48 && numeroConvertido <= 57) { // numeros del 0 al 9
        printf("Su caracter es un numero: %c. \n", numeroConvertido);
    } else if (numeroConvertido >= 65 && numeroConvertido <= 90) { // letras mayusculas
        printf("Su caracter es una letra mayuscula: %c. \n", numeroConvertido);
        if (numeroConvertido == 'A' || numeroConvertido == 'E' || numeroConvertido == 'I' || numeroConvertido == 'O' || numeroConvertido == 'U') {
            printf("Su caracter es una vocal mayuscula: %c. \n", numeroConvertido);
        }
    } else if (numeroConvertido >= 97 && numeroConvertido <= 122) { // letras minisculas
        printf("Su caracter es una letra miniscula: %c. \n", numeroConvertido);
        if (numeroConvertido == 'a' || numeroConvertido == 'e' || numeroConvertido == 'i' || numeroConvertido == 'o' || numeroConvertido == 'u') {
            printf("Su caracter es una vocal miniscula: %c. \n", numeroConvertido);
        }
    } else {
        // Identificar caracteres especiales
        if (numeroConvertido == '@') {
            printf("El caracter es el simbolo '@'.\n");
        } else if (numeroConvertido == '+' || numeroConvertido == '-' || numeroConvertido == '*' || numeroConvertido == '/' || numeroConvertido == '%') {
            printf("El caracter %c es un operador aritmetico.\n", numeroConvertido);
        } else {
            printf("El caracter %c es un caracter especial.\n", numeroConvertido);
        }
    }
    // Mostrar el número transformado en carácter
    printf("El numero %d corresponde al caracter %c en la tabla ASCII.\n", numeroIntroducido, numeroConvertido);

    return 0;
}