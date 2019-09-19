#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int dni;
    char nombre[50];
    char apellido[50];
    int estaVacio;
} sPersona;


void pedirDatos(sPersona[], int);
void mostrarPersona(sPersona[], int);
void mostrarListadoDePersonas(sPersona lista[],int);
void cargarPersonas( sPersona[], int);
void mostrarMenu();
void inicializarPersonas();
void pedirPersona (sPersona p[], int indice);
int validarDNI(sPersona personas, int dni, int cant);
