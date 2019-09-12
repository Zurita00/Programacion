#include <stdio.h>
#include <stdlib.h>
#include "bliblioteca.h"
#include <string.h>

void cargarConDatos(int array[], int cantidad)
{
    int auxiliar[] = {4, 10, 8, 2,};
    int i;
    for ( i = 0; i < cantidad; i++ )
    {
        //array[i] = i*10;
        array[i] = auxiliar[i];
    }
}

void cargarDatosChar(char array[][50], int cantidad)
{
    char auxiliar[][50] = {"Alfredo","Rogelio","Julieta","Pablo"};
    int i;
    for ( i = 0; i < cantidad; i++ )
    {
        strcpy(array[i], auxiliar[i]);// strcpy(destino, origen)
    }
}

int dameMaximo ( int array[], int cantidad)
{
    int i;
    int maximo;
    for ( i = 0; i < cantidad; i++)
    {
        if( i == 0 || array[i]>maximo)
        {
            maximo = array[i];
        }
    }
    return maximo;

}

int indiceDelMaximo ( int array[], int cantidad)
{
    int i;
    int indice;
    int maximo;
    maximo = dameMaximo(array, cantidad);

    for ( i = 0; i < cantidad; i++)
    {
        if(array[i] == maximo)
        {
            indice = i;
        }
    }
    return indice;

}

int DameNombreDeMaximo ( char arrayPalabras[][50],  int array[], int cantidad)
{
    int indice;
    indice = indiceDelMaximo(array, cantidad);
    arrayPalabras[indice];

    return arrayPalabras;
}
