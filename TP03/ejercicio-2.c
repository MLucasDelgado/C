#include <stdio.h>

int main() {
    char frase;
    int longitudPalabra = 0, palabraLarga = 0, palabraCorta = 100;

    printf("Ingrese su frase: ");
    scanf("%c", &frase); 

    while (frase != '.') {
        if (frase != ' ') {
            longitudPalabra++;
        } else if (longitudPalabra > 0) {
            if (longitudPalabra > palabraLarga) {
                palabraLarga = longitudPalabra; 
            }
            if (longitudPalabra < palabraCorta) {
                palabraCorta = longitudPalabra; 
            }
            longitudPalabra = 0;  // Reiniciar el contador para la siguiente palabra
        }
        scanf("%c", &frase);
    }

    // Ultima palabra antes del punto (ya que esta no tiene un espacio despues).
    if (longitudPalabra > 0) {
        if (longitudPalabra > palabraLarga) {
            palabraLarga = longitudPalabra;
        }
        if (longitudPalabra < palabraCorta) {
            palabraCorta = longitudPalabra;
        }
    }

    printf("La palabra mas larga tiene %d letras\n", palabraLarga);
    printf("La palabra mas corta tiene %d letras\n", palabraCorta);

    return 0;
}
