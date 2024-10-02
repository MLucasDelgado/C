#include <stdio.h>
#include <ctype.h>

int Seguridad() {
    int tiene_mayuscula = 0, tiene_minuscula = 0, tiene_numero = 0, tiene_especial = 0;
    int longitud = 0;
    char caracter;

    printf("Ingrese la contrasena: ");

    // Leer un carácter a la vez hasta que se presione Enter
    while ((caracter = getchar()) != '\n') {
        longitud++;  

        if (isupper(caracter)) {
            tiene_mayuscula = 1;
        } else if (islower(caracter)) {
            tiene_minuscula = 1;
        } else if (isdigit(caracter)) {
            tiene_numero = 1;
        } else if (ispunct(caracter)) {  // Verifica si es un carácter especial
            tiene_especial = 1;
        }
    }

    if (longitud < 8) {
        printf("La contrasena no es valida. Debe tener al menos 8 caracteres.\n");
        return 0; 
    }

    // Comprobar las condiciones
    if (!tiene_mayuscula || !tiene_minuscula || !tiene_numero || !tiene_especial) {
        printf("La contrasena no es valida. Debe contener:\n");
        if (!tiene_mayuscula) printf("- Al menos una letra mayuscula \n");
        if (!tiene_minuscula) printf("- Al menos una letra minuscula \n");
        if (!tiene_numero) printf("- Al menos un numero \n");
        if (!tiene_especial) printf("- Al menos un caracter especial (!, @, #, $, etc.) \n");
        return 0;  // Contraseña no válida
    }

    printf("La contrasena es valida. \n");
    return 1;  // Contraseña válida
}

int main() {
    Seguridad(); 
    return 0;
}
