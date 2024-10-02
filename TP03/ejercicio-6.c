#include <stdio.h>

int main() {
    int numEmpleados, anosAntiguedad;
    float sueldo, descuentoObraSocial, sueldoFinal, aporteAntiguedad, extra, totalGastado = 0;
    char categoria;

    // Pedimos la cantidad de empleados
    printf("Ingrese el numero de empleados: ");
    scanf("%d", &numEmpleados);

    for (int i = 0; i < numEmpleados; i++) {
        printf("\nEmpleado %d:\n", i + 1);
        
        printf("Ingrese su categoria (G - Gerencial, A - Administrativo, M - Maestranza): ");
        scanf(" %c", &categoria);  // El espacio antes de %c para ignorar posibles saltos de línea previos

        // Pedimos los años de antigüedad
        printf("Ingrese los aportes de antiguedad: ");
        scanf("%d", &anosAntiguedad);

        switch (categoria) {
        case 'G':
            sueldo = 350000;
            break;
        case 'A':
            sueldo = 250000;
            break;
        case 'M':
            sueldo = 100000;
            break;
        default:
            printf("Categoria no valida.\n");
            continue; // Saltar al siguiente empleado si la categoría es inválida
        }

        descuentoObraSocial = sueldo * 0.12;

        aporteAntiguedad = sueldo * (anosAntiguedad * 0.02);

        sueldo += aporteAntiguedad;

        if (categoria == 'G' || categoria == 'A') {
            extra = sueldo * 0.25; 
        } else if (categoria == 'M') {
            extra = sueldo * 0.15; 
        } else {
            extra = 0;
        }

        sueldo += extra;

        sueldoFinal = sueldo - descuentoObraSocial;

        printf("Sueldo a cobrar para el empleado %d: $%.2f\n", i + 1, sueldoFinal);

        totalGastado += sueldoFinal;
    }

    printf("\nTotal gastado por la empresa en sueldos: $%.2f\n", totalGastado);

    return 0;
}
