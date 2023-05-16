#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void sumarMatrices(int matrizA[FILAS][COLUMNAS], int matrizB[FILAS][COLUMNAS], int matrizResultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[FILAS][COLUMNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[FILAS][COLUMNAS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrizResultado[FILAS][COLUMNAS];

    printf("Matriz A:\n");
    mostrarMatriz(matrizA);

    printf("\nMatriz B:\n");
    mostrarMatriz(matrizB);

    sumarMatrices(matrizA, matrizB, matrizResultado);

    printf("\nMatriz Resultado:\n");
    mostrarMatriz(matrizResultado);

    return 0;
}
