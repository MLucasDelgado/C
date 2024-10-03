#include <stdio.h>

int main() {
    char frase, caracterAnterior1 = ' ', caracterAnterior2 = ' ';
    int cantidadError = 0, palabraGrande = 0, palabraChica = 100, longitudPalabra = 0;

    printf("Ingrese una frase: ");
    scanf("%c", &frase);

    while (frase != '.') {
        // Contar caracteres de la palabra
        if (frase != ' ' && frase != '.') {
            longitudPalabra++;
        } else {
            if (longitudPalabra > palabraGrande) {
                palabraGrande = longitudPalabra;
            }
            if (longitudPalabra < palabraChica && longitudPalabra > 0) {
                palabraChica = longitudPalabra;
            }
            longitudPalabra = 0; // Reiniciar contador de longitud para la próxima palabra
        }

        if (caracterAnterior2 == 'n' && caracterAnterior1 == 'p') {
            cantidadError++;
        }

        caracterAnterior2 = caracterAnterior1;
        caracterAnterior1 = frase;

        scanf("%c", &frase);
    }

    printf("Cantidad de errores: %d\n", cantidadError);
    printf("Cantidad de caracteres en la palabra mas grande: %d\n", palabraGrande);
    printf("Cantidad de caracteres en la palabra mas chica: %d\n", palabraChica);

    return 0;
}
