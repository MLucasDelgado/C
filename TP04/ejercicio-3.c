#include <stdio.h>

int invertirNumero(int numero)
{
    int invertido = 0;
    while (numero > 0)
    {
        invertido = invertido * 10 + numero % 10; // numero % 10, es para obtener el último dígito: Si fuera 12, entonces 2
        numero /= 10;                             // Eliminamos el ultimo digito del numero, Si fuera 12, entonces nos quedaria 1.
    }
    return invertido;
}

int digitosImpares(int numero)
{
    int cantImpares = 0;

    while (numero > 0)
    {
        int digito = numero % 10;
        if (digito % 2 != 0)
        {
            cantImpares++;
        }
        numero /= 10;
    }
    printf("Cantidad de impares: %d \n", cantImpares);
}

int main()
{
    int numero;

    do {
        printf("Ingrese un numero positivo: ");
        scanf("%d", &numero);

        if (numero >= 0){
            int numeroInvertido = invertirNumero(numero);
            printf("Su numero invertido es: %d \n", numeroInvertido);
            digitosImpares(numero);
        } else 
        {
            printf("Error. El numero no puede ser negativo. \n");
        }
        
    } while (numero >= 0);

    return 0;
}