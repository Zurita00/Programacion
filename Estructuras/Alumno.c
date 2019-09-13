#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"

void cargarAlumnos(sAlumno lista[], int cant)
{
    int i;
    for ( i = 0; i<cant; i++)
    {
        lista[i] = pedirAlumno();
    }

}
void mostrarListadoDeAlumnos(sAlumno lista[],int cant)
{
    int i;
    for ( i = 0; i<cant; i++)
    {
        mostrarAlumno(lista[i]);
    }
}

void mostrarAlumno(sAlumno unAlumno)
{

    printf("%d---%s---%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.nota);

}


sAlumno pedirAlumno()
{
    sAlumno miAlumno; //= {1000, "Pepe", 7};// creo en memoria o reserva para poder guardar algo de tipo alumno.
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    //otroAlumno = miAlumno; se puede copiar una estructura en otra

    return miAlumno;


    //printf("%d", sizeof(miAlumno)); - sizeof es para saber el peso del dato

}
int compararAlumnoPorLegajo(sAlumno unAlumno, sAlumno otroAlumno)
{
    int comp;
    comp = 0;
    if ( unAlumno.legajo == otroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}

void ordenarAlumnosPorNombre(sAlumno lista[],int cant)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for ( i = 0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(strcmp(lista[i].nombre,lista[i].nombre))
            {
                auxAlumno = lista[i];
                lista[i]= lista[j];
                lista[j] = auxAlumno;
            }
        }
    }
}

void hardcoderAlumnos(sAlumno list[], int cant)
{
    int legajo[] = {101, 102, 105, 100, 103};
    int nota[] = {10 , 5, 9, 7, 8};
    char nombre[][50] = {"Juan", "Maria", "Jose", "Mateo", "Rocio"};

    int i;
    for( i = 0; i <cant; i++)
    {
        list[i].legajo = legajo[i];
        list[i].nota = nota[i];
        strcpy(list[i].nombre,nombre[i]);
    }

}
