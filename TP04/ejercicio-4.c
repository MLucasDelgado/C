#include <stdio.h>

int calcularPrecio(int categoria, int producto) {
    int precio = 0;

    if (categoria == 1) { // Electrodomésticos
        switch (producto) {
            case 1: precio = 850000; break; // Heladera
            case 2: precio = 759000; break; // Lavarropas
            case 3: precio = 520000; break; // Microondas
            default: printf("Producto no valido.\n"); break;
        }
    } else if (categoria == 2) { // Informática
        switch (producto) {
            case 1: precio = 1500000; break; // Laptop
            case 2: precio = 755000; break; // Tablet
            case 3: precio = 539000; break; // Smartphone
            default: printf("Producto no valido.\n"); break;
        }
    } else {
        printf("Categoria no valida.\n");
    }

    return precio;
}

int calcularPrecioFinal (int precio, int formaPago) {
    int precioFinal = precio;
    switch (formaPago)
    {
    case 1: // efectivo
        precioFinal = precio - (precio * 0.10);
    break;

    case 2: // tarjeta 1 cuota
        precioFinal;
    break;

    case 3: // tarjeta 3 cuota
        precioFinal = precio + (precio * 0.15);
    break;

    case 4: // tarjeta 6 cuota
        precioFinal = precio + (precio * 0.25);
    break;
    
    default:
        printf("Metodo de pago invalido. \n");
    break;
    }
    return precioFinal;
}

// Función para mostrar el menú de categorias.
int mostrarMenuCategorias() {
    printf("OFERTA EN LAS SIGUIENTES CATEGORIAS:\n");
    printf("1. Electrodomesticos\n");
    printf("2. Informatica\n");
}

// Función para mostrar el menú de formas de pago.
int mostrarMenuFormasPago() {
    printf("Seleccione su forma de pago:\n");
    printf("1. Efectivo (10%% de descuento)\n");
    printf("2. Tarjeta de credito a 1 cuota (sin recargo)\n");
    printf("3. Tarjeta de credito a 3 cuotas (15%% de recargo)\n");
    printf("4. Tarjeta de credito a 6 cuotas (25%% de recargo)\n");
}

int main() {
    int categoria, producto, formaPago, precio;
    float precioFinal;
    float totalRecaudado = 0; 
    char continuar;

    do {
        mostrarMenuCategorias();
        printf("Elija su categoria: \n");
        scanf("%d", &categoria);

        if (categoria == 1) {
            printf("Seleccione su producto:\n");
            printf("1. Heladera: $850.000\n");
            printf("2. Lavarropas: $759.000\n");
            printf("3. Microondas: $520.000\n");
        } else if (categoria == 2) {
            printf("Seleccione su producto:\n");
            printf("1. Laptop: $1.500.000\n");
            printf("2. Tablet: $755.000\n");
            printf("3. Smartphone: $539.000\n");
        }

        printf("Elija su producto: \n");
        scanf("%d", &producto);

        precio = calcularPrecio(categoria, producto);

        if (precio > 0) {
            mostrarMenuFormasPago();
            printf("Elija su forma de pago: \n");
            scanf("%d", &formaPago);

            precioFinal = calcularPrecioFinal(precio, formaPago);

            printf("El precio final a pagar es: $%.2f\n", precioFinal);

            totalRecaudado += precioFinal;
        }

        printf("\n¿Desea procesar otro cliente? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Mostrar el total recaudado en el día
    printf("El total recaudado en el dia es: $%.2f\n", totalRecaudado);

    return 0;
}