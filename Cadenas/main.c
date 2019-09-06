#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat
    */

    char palabra[10];
    char palabra2[10];
    char todo[50];
    //int comp;
    printf("Ingrese una palabra: ");

    gets(palabra); // recibe cadena de caracteres
    strcpy(palabra2, "perro");
    //comp = strcmp(palabra, palabra2);

    if (stricmp(palabra2, palabra)==0)
    {
        printf("Son iguales");
    }
    else
    {
        printf("No son iguales");
    }

    strcpy(todo, palabra);
    strcat(todo, palabra2);
    strcat(todo, "Chau");

    printf("\ntodo %s", todo);

    return 0;


    //lenght = strlen(palabra);// muestra el largo de la palabra
    //printf("La palabra es %s y largo %d", palabra, lenght);
}
