#include <stdio.h>

 

#define NUM_CARRERAS 7

 

// Estructura para almacenar los datos de ingreso de alumnos por carrera y año
typedef struct {
    int anio;
    int cantidad[NUM_CARRERAS];
} DatosAlumnos;

 

int main() {
    DatosAlumnos datos_alumnos[] = {
        {2019, {100, 150, 80, 120, 90, 70, 110}},
        {2020, {120, 160, 90, 110, 100, 80, 130}},
        {2021, {140, 170, 100, 130, 110, 90, 150}},
        {2022, {160, 180, 120, 140, 120, 100, 170}},
        {2023, {180, 190, 130, 150, 130, 110, 190}}
    };
