#include <stdio.h>

int suma(int x, int y)
{
    return x + y;
}

int resta(int x, int y)
{
    return x - y;
}

int producto(int x, int y)
{
    int resultado = 0;
    for (int i = 0; i < y; i++)
    {
        resultado = suma(resultado, x);
    }
    return resultado;
}

/*  EXPLICACION PRODUCTO
    x = 2, y = 4
    x * y = 8
    resultado = 0
    1) i = 0 ---> resultado = 0 + 2 = 2
    2) i = 1 ---> resultado = 2 + 2 = 4
    3) i = 2 ---> resultado = 4 + 2 = 6
    4) i = 3 ---> resultado = 6 + 2 = 8

    resultado = 8
*/

int division(int x, int y)
{
    int cociente = 0;
    while (x >= y)
    {
        x = resta(x, y);              // Restamos 'y' del dividendo hasta que el dividendo sea menor que el divisor
        cociente = suma(cociente, 1); // Contamos cuántas veces restamos
    }
    return cociente;
}

/*  EXPLICACION DIVISON
    x = 6, y = 3
    x / y = 2
    cociente = 0
    1) (x = 6) >=  (y = 3) ---> x = (6 - 3) ---> x = 3
        cociente = 1

    2) (x = 3) >=  (y = 3) ---> x = (3 - 3) ---> x = 0
        cociente = 2

    se corta el while por que x = 0 y no se cumple la condicion

    cociente = 2
*/

int potencia(int x, int y)
{
    int resultado = 1;
    for (int i = 0; i < y; i++)
    {
        resultado = producto(resultado, x);
    }
    return resultado;
}

/*  EXPLICACION POTENCIA
    x = 2, y = 3
    x ^ y = 8
    resultado = 0
    1) i = 0 ---> resultado = 1 * 2 = 2
    2) i = 1 ---> resultado = 2 * 2 = 4
    3) i = 2 ---> resultado = 4 * 2 = 8

    resultado = 8
*/

int main()
{
    int x, y, codigo;
    char continuar;

    do
    {
        printf("Ingrese el primer numero: ");
        scanf("%d", &x);

        printf("Ingrese el segundo numero: ");
        scanf("%d", &y);

        printf("Seleccione una operacion: \n");
        printf("1 - Suma\n2 - Resta\n3 - Producto\n4 - Division\n5 - Potencia \n");
        scanf("%d", &codigo);

        switch (codigo)
        {
            case 1:
                printf("Resultado de la suma: %d \n", suma(x, y));
                break;

            case 2:
                printf("Resultado de la resta: %d \n", resta(x, y));
                break;

            case 3:
                printf("Resultado de la producto: %d \n", producto(x, y));
                break;

            case 4:
                if (y != 0)
                { 
                    printf("Resultado de la division: %d \n", division(x, y));
                }
                else
                {
                    printf("Error: Division por cero no permitida. \n");
                }
                break;

            case 5:
                printf("Resultado de la potencia: %d \n", potencia(x, y));
                break;

            default:
            break;
        }
        printf("¿Desea realizar otro calculo? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar =='S');
   
   return 0;
}