#include <stdio.h>

int rechazados = 0, aceptados = 0, totalPersonas = 0;
float totalInvertido = 0;

void pedirPrestamo(int antiguedad, float sueldo, float monto, int opcion) {
    float cuota, porcentajeRechazados;

    if (antiguedad < 5 || sueldo < 150000) {
        printf("Lo sentimos, usted fue rechazado, no cumple con los años de antiguedad (5) o con el sueldo minimo ($150000).\n");
        rechazados++;
    } else {
        switch (opcion) {
            case 1: // 12 cuotas con 34% de interés
                cuota = monto * (1 + 0.34) / 12;
                printf("La cuota a pagar por el monto elegido es: %.2f\n", cuota);
                totalInvertido += monto * 1.34; // Sumar el monto con interés a lo invertido
                break;
            case 2:
                cuota = monto * (1 + 0.48) / 24;
                printf("La cuota a pagar por el monto elegido es: %.2f\n", cuota);
                totalInvertido += monto * 1.48;
                break;
            case 3: 
                cuota = monto * (1 + 0.68) / 48;
                printf("La cuota a pagar por el monto elegido es: %.2f\n", cuota);
                totalInvertido += monto * 1.68;
                break;
            default:
                printf("Opcion invalida.\n");
            return;
        }
        aceptados++;
    }

    totalPersonas = aceptados + rechazados;
    if (totalPersonas > 0) {
        porcentajeRechazados = ((float)rechazados / totalPersonas) * 100;
        printf("Cantidad de personas aplicadas para el prestamo: %d\n", totalPersonas);
        printf("Porcentaje de personas rechazadas: %.2f%%\n", porcentajeRechazados);
        printf("Total invertido por la financiera: %.2f\n", totalInvertido);
    }
}

void mostrarMenuCuotas() {
    printf("\nOPCIONES DE CUOTAS\n");
    printf("1 - 12 cuotas (34%% de interes)\n");
    printf("2 - 24 cuotas (48%% de interes)\n");
    printf("3 - 48 cuotas (68%% de interes)\n");
    printf("4 - Salir\n");
}

int main() {
    int opcion, antiguedad;
    float sueldo, monto;

    do {
        printf("\nIngrese los años de antiguedad: ");
        scanf("%d", &antiguedad);

        printf("Ingrese el sueldo neto: $");
        scanf("%f", &sueldo);

        printf("Ingrese el monto del prestamo solicitado: $");
        scanf("%f", &monto);

        mostrarMenuCuotas();
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        if (opcion != 4) {
            pedirPrestamo(antiguedad, sueldo, monto, opcion);
        }

    } while (opcion != 4);

    printf("Gracias por utilizar nuestro sistema.\n");
    return 0;
}
