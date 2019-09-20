#include <stdio.h>
#include <stdlib.h>

int incrementar (int*); //funcion para trabajar con referencia
int main()
{
    int numero = 0;
    incrementar(&numero);
    incrementar(&numero);
    incrementar(&numero);

    printf("%d", numero);
    return 0;
}

int incrementar(int* n)//si la funcion recibe un puntero es con el *
{
    *n = *n+1;
    return 1;
}
// cuando doy algo de baja debere ponerle el estado en eliminado
