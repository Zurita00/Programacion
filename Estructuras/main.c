#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#define A 5

int main()
{
    sAlumno listaAlumno[A];

    int opcion;

    do
    {
        printf("1.Cargar alumnos.\n");
        printf("2.Mostrar alumnos.\n");
        printf("3.Ordenar alumnos por nombre.\n");
        printf("Elija una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            hardcoderAlumnos(listaAlumno,A);
            break;
        case 2:
            mostrarListadoDeAlumnos(listaAlumno,A);
            break;
        case 3:
            ordenarAlumnosPorNombre(listaAlumno,A);
        }

        system("pause");
        system("cls");
    }
    while(opcion != 5);

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

