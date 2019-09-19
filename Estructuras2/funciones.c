#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 3

void pedirDatos(sPersona persona[], int indice)
{
    printf("Ingrese DNI: ");
    int auxDni;
    scanf("%d", &auxDni);
    /*while (!validarDNI(persona, auxDni, CANT)== 1)
    {
        printf("Ya existe el DNI, ingrese otro: ");
        scanf("%d", &persona[indice].dni);
    }*/
    persona[indice].dni = auxDni;


    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(persona[indice].nombre);
    printf("Ingrese apellido: ");
    gets(persona[indice].apellido);
    fflush(stdin);

    persona[indice].estaVacio = 0;

}
void mostrarPersona(sPersona p[], int cant)
{
    int i;
    for( i = 0; i<cant; i++)
    {
        if(p[i].estaVacio == 0 )
        {
            printf("Nombre: %s\nApellido:%s\nDNI: %d\n", p[i].nombre, p[i].apellido, p[i].dni);
        }

    }


}

void OrdenarPorDNI(sPersona p[], int cant)
{
    int i;
    int j;
    sPersona auxPer;
    for( i = 0; i<cant-1; i++)
    {
        for (j = i+1; j<cant; j++)
        {

            if(p[i].dni < p[j].dni )
            {
                auxPer = p[i];
                p[i] = p[j];
                p[j] = auxPer;
            }
        }
    }
}

void cargarPersonas(sPersona lista[],int cant)
{
    /*int i;
    for ( i=0; i<cant; i++)
    {
        lista[i] = pedirDatos();
    }*/
}


void inicializarPersonas (sPersona p[], int cant)
{
    int i;
    for (i=0; i<cant; i++)
    {
        p[i].estaVacio = 1;
    }
}

void pedirPersona (sPersona p[], int cant)
{
    int i;
    int flagEncontro = 0;
    for (i = 0; i < cant; i++)
    {
        if(p[i].estaVacio == 1)
        {
            pedirDatos(p,i);
            flagEncontro = 1;
            break;
        }
    }
    if (flagEncontro == 0)
    {
        printf("No hay mas espacio");
    }

}

/*int validarDNI(sPersona personas, int dni, int cant)
{
    int i;
    int salida = 0;
    for(i=0; i<cant; i++)
    {
        if(personas[i].estaVacio==0)
        {
            salida =1;
        }
    }
    return salida;
}*/
