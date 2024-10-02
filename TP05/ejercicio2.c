#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMA 20

int seguridad(char arreglo[], int tama)
{
    int tiene_mayuscula = 0, tiene_minuscula = 0, tiene_numero = 0;
    int longitud = strlen(arreglo);

    for (int i = 0; i < tama; i++)
    {
        if (isupper(arreglo[i]))
        {
            tiene_mayuscula += 1;
        } else if(islower(arreglo[i])){
            tiene_minuscula += 1;
        } else if(isdigit(arreglo[i])){
            tiene_numero += 1;
        }
    }

    if (longitud < 8 || !tiene_mayuscula || !tiene_minuscula || !tiene_numero) {
        printf("The password is not valid. It must contain:\n");
        if (longitud < 8) printf("- At least 8 characters.\n");
        if (!tiene_mayuscula) printf("- At least one capital letter \n");
        if (!tiene_minuscula) printf("- At least one lowercase letter \n");
        if (!tiene_numero) printf("- At least one number \n");
        return 0;  // Contraseña no válida
    } else {
        printf("The password is valid.");
    }
}

int main() {
    char password1[TAMA], password2[TAMA];
    int es_valida = 0;

    do {
        printf("Enter the password: ");
        scanf("%s", password1);

        // Verificar si la contraseña es válida
        es_valida = seguridad(password1, TAMA);

        if (!es_valida) {
            printf("Please, try again.\n");
            continue;  // Si no es válida, vuelve a pedir la contraseña
        }

        printf("\nConfirm password: ");
        scanf("%s", password2);

        // Verificar si las contraseñas coinciden, devuelve 0 si las cadenas son iguales.
        if (strcmp(password1, password2) != 0) {
            printf("\nPasswords do not match. Try again.\n");
            es_valida = 0;  // Resetea la validez para continuar el ciclo
        }

    } while (!es_valida);  // Repite el ciclo hasta que la contraseña sea válida y coincida

    printf("Valid and confirmed password.\n");

    return 0;
}