#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OCUPADO 1  //estado dentro del array
#define LIBRE 0

typedef struct//siempre arriba de main
{
    //campos o atributos.
    int legajo; //no se puede modificar
    char nombre[50];//datos modificables
    int nota;
    int dni;
    int estado;//estado para saber si hay espacio o no

}sAlumno; // nombre de la estructura siempre al final de la llave.


//int buscarAlumnoPorLegajo(sAlumno*,int,int);

int buscarAlumnoLibre(sAlumno[],int);
int inicializarAlumnos(sAlumno[], int); //permite inicializar el estado de 0
void mostrarAlumno (sAlumno);
sAlumno pedirAlumno(void);
int compararAlumnoPorLegajo(sAlumno, sAlumno);
int cargarAlumnos(sAlumno[], int);
void mostrarListadoDeAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno[],int);
void hardcoderAlumnos(sAlumno[], int);
int eliminarAlumno(sAlumno[],int);
