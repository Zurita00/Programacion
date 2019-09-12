#include <stdio.h>
#include <stdlib.h>
#include "bliblioteca.h"
#define TAM 8

int main()
{
    int edades [TAM];
    char nombres [TAM][50];
    int i;

    cargarConDatos(edades, TAM);
    cargarDatosChar(nombres, TAM);

   /* for ( i = 0; i < TAM ; i++ )
    {
        printf("Ingrese la edad: ");
        scanf("%d", &edades[i]);
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombres[i]);
    }*/

    for ( i = 0; i < TAM; i++)
    {
        printf("%d %s\n", edades[i], nombres[i]);
    }


    return 0;
}
