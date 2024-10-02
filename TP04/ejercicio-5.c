#include <stdio.h>
#include <math.h>

void cuadrado(float lado) { // Utilizo void cuando no devuelvo un valor.
    float area = lado * lado;
    float perimetro = 4 * lado;
    printf("El area del cuadrado es: %.2f.\nEl perimetro del cuadrado es: %.2f\n", area, perimetro);
}

void rectangulo(float base, float altura) {
    float area = base * altura;
    float perimetro = 2 * (base + altura);
    printf("El area del rectangulo es: %.2f.\nEl perimetro del rectangulo es: %.2f\n", area, perimetro);
}

void circulo(float radio) {
    float area = M_PI * pow(radio, 2);
    float perimetro = 2 * M_PI * radio;
    printf("El area del circulo es: %.2f.\nEl perimetro del circulo es: %.2f\n", area, perimetro);
}

void trianguloEquilatero(float lado) {
    float area = (sqrt(3) / 4) * pow(lado, 2);
    float perimetro = 3 * lado;
    printf("El area del triangulo equilatero es: %.2f.\nEl perimetro del triangulo equilatero es: %.2f\n", area, perimetro);
}

void ElegirFigura() {
    printf("FIGURAS:\n");
    printf("1 - Cuadrado.\n");
    printf("2 - Rectangulo.\n");
    printf("3 - Circulo.\n");
    printf("4 - Triangulo equilatero.\n");
}

int main() {
    int figura;
    float lado, radio, base, altura;
    char continuar;

    do {
        ElegirFigura();
        printf("Elegir la figura: ");
        scanf("%d", &figura);

        switch (figura) {
            case 1:
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &lado);
                cuadrado(lado);
            break;

            case 2:
                printf("Ingrese la base del rectangulo: ");
                scanf("%f", &base);

                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &altura);

                rectangulo(base, altura);
            break;

            case 3:
                printf("Ingrese el radio del circulo: ");
                scanf("%f", &radio);
                circulo(radio);
            break;

            case 4:
                printf("Ingrese el lado del triangulo equilatero: ");
                scanf("%f", &lado);
                trianguloEquilatero(lado);
            break;

            default:
                printf("Opcion invalida.\n");
            break;
        }

        printf("\n¿Desea procesar otra figura? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}
