#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main() {
    char numero[20];
    int longitud;
    printf("Indicame un número\n");
    scanf("%c",&numero);
    longitud = strlen(numero);
    longitud = longitud - 1;
    //return (EXIT_SUCCESS);
    //printf("%i",longitud);
    /*for (int a=1;a <= longitud;a++)
    {
        printf("%c",numero[a]);
    }*/
    printf(numero[1]);
}

