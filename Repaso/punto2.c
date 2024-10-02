#include <stdio.h>
#include <math.h>

void calcularAreaTriangulo (float base, float altura){
    float area = (base * altura)/2;
    printf("El area del triangulo de base %.2f y altura %.2f es: %.2f\n", base, altura, area);
}

void calcularAreaCirculo (float radio) {
    float area = M_PI * radio * radio;
    printf("El area del circulo de radio %.2f es: %.2f\n", radio, area);
}

void calcularAreaRectangulo (float base, float altura) {
    float area = base * altura;
    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f\n", base, altura, area);
}

void mostrarMenu()
{
    printf("MENU DE OPCIONES \n");
    printf("1 - Calcular area del triangulo.\n");
    printf("2 - Calcular area del circulo.\n");
    printf("3 - Calcular area del rectangulo.\n");
    printf("4 - Salir.\n");
}


int main() {
    int opcion;
    float base, altura, radio;

    do {
        mostrarMenu();
        printf("Elegir una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero para la base: ");
                scanf("%f", &base);
                printf("Ingrese un numero para la altura: ");
                scanf("%f", &altura);
                calcularAreaTriangulo(base, altura);
                break;

            case 2:
                printf("Ingrese un numero para el radio: ");
                scanf("%f", &radio);
                calcularAreaCirculo(radio);
                break;

            case 3:
                printf("Ingrese un numero para la base: ");
                scanf("%f", &base);
                printf("Ingrese un numero para la altura: ");
                scanf("%f", &altura);
                calcularAreaRectangulo(base, altura);
                break;

            case 4:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);  // Continuar mientras la opción no sea 4

    return 0;
}