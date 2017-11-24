/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int nif(int*x);
int romanos(int*j);
int comprobante(int z, char p[])
{
    //char numero[20];
    int longitud;
    int controlas = 1;

    longitud = strlen(p);
    longitud = longitud ;
    printf("%i\n",longitud);
   
for (int a=0;a <= longitud -1;a++)
    {
        if (isdigit(p[a]))
        {
            printf("%c--",p[a]);
        }else{
            printf("%c no es un número ueputa \n",p[a]);
        }
 /*   int numeras = atoi(p);
    printf("%i\n",numeras); */       
    } /*  
    if (*z == 1)
    {
        if (( numeras > 0) && ( numeras <= 99999999))
        {
            nif(&numeras);
        }
        else{
            printf("Introduzca un valor comprendido entre 00000001 y 99999999");
        }
    }
    if (*z == 2)
    {
        if ((( numeras > 0) && ( numeras <= 3999))  )
        {
            romanos(&numeras);
        }
        else{
            printf("Introduzca un número entero válido comprendido entre 1 y 3999");
        }
    }*/
}

