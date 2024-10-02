#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define FILAS 5
#define COLUMNAS 5
#define INTENTOS 5

// Función para inicializar el mapa
void inicializarMapa(char mapa[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            mapa[i][j] = '.';
        }
    }
}

// Función para mostrar el mapa
void mostrarMapa(char mapa[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}

// Función para calcular la distancia entre las coordenadas del jugador y el tesoro
int calcularDistancia(int posicionX, int posicionY, int xTesoro, int yTesoro) {
    return abs(posicionX - xTesoro) + abs(posicionY - yTesoro);
}

int main() {
    char mapa[FILAS][COLUMNAS];
    int xTesoro, yTesoro, xJugador, yJugador, intentosRestantes = INTENTOS;

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    // Generar posición aleatoria del tesoro
    xTesoro = rand() % FILAS;
    yTesoro = rand() % COLUMNAS;

    // Inicializar el mapa
    inicializarMapa(mapa);

    printf("Bienvenido al juego del tesoro\n");
    printf("Tienes %d intentos para encontrar el tesoro.\n", INTENTOS);

    // Ciclo de juego
    while (intentosRestantes > 0) {
        mostrarMapa(mapa);
        printf("Intentos restantes: %d\n", intentosRestantes);

        // Pedir las coordenadas al jugador
        printf("Ingresa las coordenadas X e Y (0-%d): ", FILAS - 1);
        scanf("%d %d", &xJugador, &yJugador);

        // Verificar si las coordenadas son válidas
        if (xJugador < 0 || xJugador >= FILAS || yJugador < 0 || yJugador >= COLUMNAS) {
            printf("Coordenadas invalidas. Intentalo de nuevo.\n");
            continue;
        }

        // Marcar la celda como explorada
        mapa[xJugador][yJugador] = 'O';

        // Verificar si el jugador encontró el tesoro
        if (xJugador == xTesoro && yJugador == yTesoro) {
            mostrarMapa(mapa);
            printf("Felicidades. Has encontrado el tesoro en %d intentos\n", INTENTOS - intentosRestantes + 1);
            mapa[xTesoro][yTesoro] = 'X';  // Mostrar la ubicación del tesoro
            break;
        } else {
            // Calcular y mostrar la distancia al tesoro
            int distancia = calcularDistancia(xJugador, yJugador, xTesoro, yTesoro);
            printf("Estas a %d celdas del tesoro.\n", distancia);
            intentosRestantes--;
        }
    }

    // Si se agotaron los intentos y no se encontró el tesoro
    if (intentosRestantes == 0) {
        printf("Lo siento. Has agotado todos tus intentos.\n");
        printf("El tesoro estaba en la posicion (%d, %d).\n", xTesoro, yTesoro);
        mapa[xTesoro][yTesoro] = 'X';  // Revelar la ubicación del tesoro
        mostrarMapa(mapa);
    }

    return 0;
}
