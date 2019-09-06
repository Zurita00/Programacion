#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[15];
    char apellido[15];
    char apellidoNombre[30];
    //char todo[50];
    //int i;

    printf("Ingrese el nombre: ");
    gets(nombre);
    printf("Ingrese el apellido: ");
    gets(apellido);


    strcpy(apellidoNombre,nombre);
    strcat(apellidoNombre,apellido);


    printf("%s", apellidoNombre);

    /*for (i = 0; i < 15; i++)
    {
        apellidoNombre;
    }*/

    return 0;
}
