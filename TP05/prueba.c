#include <stdio.h>

#define TAMA 5
int arreglo[TAMA];
/*
    AL ESTAR DECLARADO EN FORMA GLOBAL SE INICIA EN 0 TODOS SUS ELEMENTOS DEL ARRRAY.
    SI TENGO MAS ELEMENTOS EN EL ARRAY QUE EL TAMA, ESTE SOLO RECORRE HASTA DONDE CUMPLE LA CONDICION DEL BUCLE
    ES DECIR, QUE SE PIERDEN LOS DATOS QUE FALTAN.
    SI HAY MENOS ELEMENTOS QUE EL TAMA, ENTONCES ESTOS SE LLENAN CON NUMEROS ALEATORIOS (DECLARADOS BASURA).
*/


int main () {
   int arreglo1[TAMA];
   printf("El arreglo declarado de forma global es: ");

   for(int i = 0; i < TAMA; i++){
    printf("\n arreglo[%d] = %d", i, arreglo[i]);
   }

    printf("\nEl arreglo declarado en el main es: ");

    //Estos nos daras numeros aleatorios conocidos como "basura almacenada"
    for(int j = 0; j < TAMA; j++){
        printf("\narreglo1[%d] = %d", j, arreglo1[j]);
    }

     printf("\nEl arreglo2 declarado en main es: ");

    int arreglo2[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < TAMA; i++)
    {
        printf("\narreglo2[%d] = %d", i, arreglo2[i]);
    }
    
    char nombre[TAMA];

    printf("\nIngrese su nombre: ");
    gets(nombre);

    printf("El nombre ingresado fue: ");
    puts(nombre);
    
    return 0;
}