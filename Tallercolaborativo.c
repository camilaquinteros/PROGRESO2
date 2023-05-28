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
 
    int num_anios = sizeof(datos_alumnos) / sizeof(DatosAlumnos);

 

    // a) Calcular el año en que ingresó la mayor cantidad de alumnos a la universidad
    int max_cantidad_total = 0;
    int anio_max_cantidad_total = 0;

 

    for (int i = 0; i < num_anios; i++) {
        int cantidad_total = 0;
        for (int j = 0; j < NUM_CARRERAS; j++) {
            cantidad_total += datos_alumnos[i].cantidad[j];
        }
        if (cantidad_total > max_cantidad_total) {
            max_cantidad_total = cantidad_total;
            anio_max_cantidad_total = datos_alumnos[i].anio;
        }
    }
 
    printf("a) El año con la mayor cantidad de alumnos ingresados fue: %d\n", anio_max_cantidad_total);

 

    // b) Calcular la carrera que recibió la mayor cantidad de alumnos en el último año
    int ultimo_anio = datos_alumnos[num_anios - 1].anio;
    int max_cantidad_carrera = 0;
    int carrera_max_cantidad = 0;

 

    for (int i = 0; i < NUM_CARRERAS; i++) {
        int cantidad = datos_alumnos[num_anios - 1].cantidad[i];
        if (cantidad > max_cantidad_carrera) {
            max_cantidad_carrera = cantidad;
            carrera_max_cantidad = i + 1;
        }
    }
    
    const char* nombres_carreras[NUM_CARRERAS] = {
        "Ingeniería de Software",
        "Administración",
        "Economía",
        "Relaciones Internacionales",
        "Matemáticas",
        "Contabilidad",
        "Ingeniería Industrial"
    };

 

    printf("b) La carrera con la mayor cantidad de alumnos en el último año fue: %s\n", nombres_carreras[carrera_max_cantidad - 1]);

 

    // c) Calcular el año en que la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos
    int carrera_ingenieria_software = 1;
    int max_cantidad_ingenieria_software = 0;
    int anio_max_cantidad_ingenieria_software = 0;

 

    for (int i = 0; i < num_anios; i++) {
        int cantidad_ingenieria_software = datos_alumnos[i].cantidad[carrera_ingenieria_software - 1];
        if (cantidad


 
 
 
