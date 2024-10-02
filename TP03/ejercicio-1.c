#include <stdio.h>

int main () {
    int cant_a = 0, cant_e = 0, cant_o = 0, cant_total = 0;

    char frase;
    printf("Ingrese la frase deseada: ");
    fflush(stdin); // limpia la entrada
    scanf("%c", &frase);

    while (frase != '.'){
        switch (frase)
        {
        case 'a':
        case 'A': cant_a++;
        break;

        case 'e':
        case 'E': cant_e++;
        break;

         case 'o':
        case 'O': cant_o++;
        break;
        
        default:
            break;
        }

        cant_total = cant_a + cant_e + cant_o;
        scanf("%c", &frase);
    }

    printf("Cantidad total de vocales con a: %d \n", cant_a);
    printf("Cantidad total de vocales con e: %d \n", cant_e);
    printf("Cantidad total de vocales con o: %d \n", cant_o);
    printf("Cantidad total de vocales: %d ", cant_total);

    return 0;
}