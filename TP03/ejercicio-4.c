#include <stdio.h>

int main () {
    int cantAgua, cantCarbon, distanciaARecorrer;
    int distanciaIntervarloAgua = 15;
    int distanciaIntervarloCarbon = 10;

    printf("Ingrese la cantidad inicial de agua: ");
    scanf("%d", &cantAgua);

    printf("Ingrese la cantidad inicial de carbon: ");
    scanf("%d", &cantCarbon);

    printf("Ingrese la distancia a recorrer: ");
    scanf("%d", &distanciaARecorrer);

    for(int i = 0; i <= distanciaARecorrer; i++){
        if(i % distanciaIntervarloAgua == 0){
            cantAgua -= 5;
        } else if (i % distanciaIntervarloCarbon == 0) {
            cantCarbon -= 2;
        }

        printf("Kilometro: %d \n Agua restante: %d litros. \n Carbon restante = %d kilos \n", i, cantAgua, cantCarbon);

        if(cantAgua == 0){
            printf("El tren no llego a su destino por falta de agua a los %d kilometros. \n", i);
            return 0;
        }
        if(cantCarbon == 0){
            printf("El tren no llego a su destino por falta de carbon a los %d kilometros. \n", i);
            return 0;
        }
    }

    printf("El tren llego a su destino.");

    return 0;
}