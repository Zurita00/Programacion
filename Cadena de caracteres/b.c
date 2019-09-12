#include <stdio.h>
#include <stdlib.h>
#include "bliblioteca.h"
#include <string.h>

void cargarConDatos(int array[], int cantidad)
    {
        int auxiliar[] = {55, 11, 22, 33,18,15,10,66};
        int i;
        for ( i = 0; i < cantidad; i++ )
        {
            //array[i] = i*10;
            array[i] = auxiliar[i];
        }
    }

void cargarDatosChar(char array[][50], int cantidad)
{
    char auxiliar[][50] = {"P","R","T","Y","G","P","S" ,"J"};
    int i;
    for ( i = 0; i < cantidad; i++ )
    {
        strcpy(array[i], auxiliar[i]);
    }
}
