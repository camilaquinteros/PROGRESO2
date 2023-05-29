#include <stdio.h>

#define NUM_CARRERAS 7
#define NUM_ANIOS 5

int main() {
    int datosAlumnos[NUM_ANIOS][NUM_CARRERAS];
    int totalAlumnosAnio[NUM_ANIOS] = {0};
    int totalAlumnosCarrera[NUM_CARRERAS] = {0};

    // Ingresar los datos de los alumnos por año y carrera
    for (int i = 0; i < NUM_ANIOS; i++) {
        printf("Año %d:\n", i + 1);
        for (int j = 0; j < NUM_CARRERAS; j++) {
            printf("Ingrese la cantidad de alumnos para la carrera %d: ", j + 1);
            scanf("%d", &datosAlumnos[i][j]);
            totalAlumnosAnio[i] += datosAlumnos[i][j];
            totalAlumnosCarrera[j] += datosAlumnos[i][j];
        }
        printf("\n");
    }

    // Calcular el año con la mayor cantidad de alumnos
    int maxAlumnosAnio = totalAlumnosAnio[0];
    int anioMaxAlumnos = 1;
    for (int i = 1; i < NUM_ANIOS; i++) {
        if (totalAlumnosAnio[i] > maxAlumnosAnio) {
            maxAlumnosAnio = totalAlumnosAnio[i];
            anioMaxAlumnos = i + 1;
        }
