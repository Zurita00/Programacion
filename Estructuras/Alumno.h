#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct//siempre arriba de main
{
    //campos o atributos.
    int legajo;
    char nombre[50];
    int nota;
    int dni;
}sAlumno; // nombre de la estructura siempre al final de la llave.

void mostrarAlumno (sAlumno);
sAlumno pedirAlumno();
int compararAlumnoPorLegajo(sAlumno, sAlumno);
void cargarAlumnos(sAlumno[], int);
void mostrarListadoDeAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno[],int);
void hardcoderAlumnos(sAlumno[], int);
