#include <stdio.h>

int main() {
    const float IVA = 0.21;

    float precio, precioDescuento, precioIva, precioFinal;
    printf("Ingrese el precio de su producto: $");
    scanf("%f", &precio);

    char categoria;
    printf("Ingrese su categoria (A, B, C): ");
    scanf(" %c", &categoria);

    precioIva = precio + (precio * IVA);
    printf("Su precio con IVA es: $%.f \n", precioIva);

    if(categoria == 'A' || categoria == 'a'){
        precioDescuento = precio - (precio*0.20);
        printf("Su precio con descuento es de: $%.2f \n", precioDescuento);
    } else if(categoria == 'B' || categoria == 'b'){
        precioDescuento = precio - (precio*0.10);
        printf("Su precio es de: $%.2f \n", precioDescuento);
    } else  {
        precioDescuento = precio;
        printf("Su precio es de: $%.2f \n", precioDescuento);
    }

    precioFinal = precioDescuento + precioIva;

    if(precioFinal > 10000) {
        precioFinal -= (precioFinal*0.05);
    }

    printf("El precio final de su producto es de: %.2f", precioFinal);

    return 0;
}