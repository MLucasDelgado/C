#include <stdio.h>
#include <math.h>

int esTrianguloRectangulo(float a, float b, float c) {
    float hipotenusa, cateto1, cateto2;

    // Ordeno los lados
    if (a > b && a > c) {
        hipotenusa = a;
        cateto1 = b;
        cateto2 = c;
    } else if (b > a && b > c) {
        hipotenusa = b;
        cateto1 = a;
        cateto2 = c;
    } else {
        hipotenusa = c;
        cateto1 = a;
        cateto2 = b;
    }

    // Verificar el teorema de Pitágoras: hipotenusa^2 = cateto1^2 + cateto2^2
    if (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2)) {
        return 1;  // Es un triángulo rectángulo
    }
    return 0;  // No es un triángulo rectángulo
}

void triangulo(float a, float b, float c, int angulo) {
    if (esTrianguloRectangulo(a, b, c)) {
        printf("No es posible realizar esta operacion.\n");
    } else {
        switch (angulo)
        {
        case 1:
            a = acos((pow(a,2) - pow(b,2) - pow(c,2))/(-2 * b * c));
            float gradosA = a * (180 / M_PI);
            printf("Radianes: %.2f \nGrados: %.2f", a, gradosA);
        break;

        case 2:
            b = acos((pow(b,2) - pow(a,2) - pow(c,2))/(-2 * a * c));
            float gradosB = b * (180 / M_PI);
            printf("Radianes: %.2f \nGrados: %.2f", b, gradosB);
        break;

        case 3:
            c = acos((pow(c,2) - pow(a,2) - pow(b,2))/(-2 * a * b));
            float gradosC = c * (180 / M_PI);
            printf("Radianes: %.2f \nGrados: %.2f", c, gradosC);
        break;
        
        default:
            printf("Opcion invalida."); 
        break;
        }
        
    }
}

void elegirAngulo (){
    printf("OPCIONES A ELEGIR: \n");
    printf("1 - Angulo A: \n");
    printf("2 - Angulo B: \n");
    printf("3 - Angulo C: \n");;
}
int main (){
    float a, b, c;
    int angulo;

    printf("Ingrese Lado A: ");
    scanf("%f", &a);
    printf("Ingrese Lado B: ");
    scanf("%f", &b);
    printf("Ingrese Lado C: ");
    scanf("%f", &c);

    elegirAngulo();
    printf("Elegir el angulo: \n");
    scanf("%d", &angulo);

    triangulo(a, b, c, angulo);

    return 0;
}