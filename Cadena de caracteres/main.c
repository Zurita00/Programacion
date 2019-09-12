#include <stdio.h>
#include <stdlib.h>
#include "bliblioteca.h"
#define TAM 4

int main()
{
    int notas [TAM];
    char nombres [TAM][50];
    int i;
    int indiceMaximo;
    //int asistencias = { 1,0,1,1 }

    cargarConDatos(notas, TAM);
    cargarDatosChar(nombres, TAM);

    indiceMaximo = indiceDelMaximo(notas,TAM);
    nombres[indiceMaximo];


    for ( i = 0; i < TAM; i++)
    {
        printf("%d %s\n", notas[i], nombres[i]);
    }

    return 0;
}

/* for ( i = 0; i < TAM ; i++ )
     {
         printf("Ingrese la edad: ");
         scanf("%d", &edades[i]);
         printf("Ingrese el nombre: ");
         fflush(stdin);
         gets(nombres[i]);
     }*/
