#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 3


int main()
{
    sPersona persona[CANT];
    inicializarPersonas(persona,CANT);
    int opcion;
    do{
        printf("Ingrese una opción: ");
        printf("1.Agregar Persona.");
        printf("2.Mostrar Todos.");
        printf("3.Ordenar por DNI");
        printf("4.Ordenar por Apellido y Nombre");

        switch (opcion)
        {
        case 1:
            pedirPersona(persona,CANT);
            break;
        case 2:

            break;

        }


    }while(opcion != 3);





    /*pedirDatos(persona);
    mostrarPersona(persona);
    inicializarPersonas (persona, TAM);
   */

}
