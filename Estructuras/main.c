#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#define A 5

int main()
{
    sAlumno listaAlumnos[A];
    int opcion;
    int index;
    int retorno;

    if(inicializarAlumnos(listaAlumnos,A)==0)
    {
        do
        {
            printf("1.Cargar alumnos\n");
            printf("2.Mostrar alumnos\n");
            printf("3.Ordenar alumnos por nombre\n");
            printf("4.Buscar Alumno\n");
            printf("5.Eliminar alumno\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            switch(opcion)
            {
            case 1:

                /*if(cargarAlumnos(listaAlumnos,A)==1)
                {
                    printf("Alumno ingresado");
                }
                else
                {
                    printf("No hay espacio");
                }*/
                hardcoderAlumnos(listaAlumnos,A);

                break;
            case 2:
                mostrarListadoDeAlumnos(listaAlumnos,A);
                break;
            case 3:
                ordenarAlumnosPorNombre(listaAlumnos,A);
                break;
            case 4:
                index = buscarAlumnoPorLegajo(listaAlumnos,A,100);
                mostrarAlumno(listaAlumnos[index]);
                break;
            case 5:
               retorno = eliminarAlumno(listaAlumnos,A);
               switch(retorno)
               {
               case 0:
                printf("Se elimino");
                break;
               case 1:
                printf("Accion cancelada");
               case -1:
                printf("No se encontro el dato");
               }
            }
            system("pause");
            system("cls");
        }
        while(opcion!='s');
    }
    else
    {
        printf("Hubo un error al crear la lista");
    }

    return 0;
}

/*sAlumno miAlumno;
sAlumno otroAlumno;
miAlumno = pedirAlumno();
otroAlumno = pedirAlumno();
mostrarAlumno(miAlumno,otroAlumno);

if(compararAlumnoPorLegajo(miAlumno, otroAlumno))
{
    printf("Los alumnos son iguales");
}
else
{
    printf("No son iguales");
}

//printf("%d", sizeof(miAlumno)); - sizeof es para saber el peso del dato*/

