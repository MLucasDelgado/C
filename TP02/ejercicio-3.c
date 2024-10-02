#include <stdio.h>

int main () {
    int dni, cbu, saldo, deposito, retirar, opcion;

    printf("Hola, Bienvenido \n");

    printf("Ingrese su dni: ");
    scanf("%d", &dni);

    printf("Ingrese su cbu: ");
    scanf("%d", &cbu);

    printf("Ingrese su saldo: ");
    scanf("%d", &saldo);

    printf("Menu de operaciones: ");
    printf("\n 1. Depositar dinero \n 2. Retirar dinero \n 3. Consultar saldo \n 4. Mostrar dato de la cuenta \n 5. Salir del programa");

    printf("\n Elige una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            if(saldo >= 0){
                printf("Ingrese la cantidad que desea depositar: ");
                scanf("%d", &deposito);
                saldo += deposito;
                printf("Su saldo ahora es de: $%d", saldo);
            }
        break;
        
        case 2:
            printf("Ingrese la cantidad que desea retirar: ");
            scanf("%d", &retirar);
            if(saldo > 0 && saldo >= retirar) {
                saldo -= retirar;
                printf("Su saldo actual es de: $%d", saldo);
            } else printf("No cuenta con la cantidad necesaria para realizar la extraccion.");
        break;

        case 3:
            printf("Su saldo es de: $%d", saldo);
        break;

        case 4:
            printf("dni: %d \n", dni);
            printf("cbu: %d \n", cbu);
            printf("saldo: $%d \n", saldo);
        break;

        case 5:
        break;

        default:
        break;
    }
    
    return 0;
}