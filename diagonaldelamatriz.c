#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;
    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    
    // Crear la matriz y asignar memoria dinámicamente
    int **matriz = (int **)malloc(filas * sizeof(int *));
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
    }
    
    // Llenar la matriz con ceros y colocar 1 en la diagonal principal
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    // Imprimir la matriz
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
    
