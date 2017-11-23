/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>
int nif(int*x);
int romanos(int*j);
/*int comprobante(int*z, int*a)
{

    if (*z == 1)
    {
        if (( *a > 0) && ( *a <= 99999999))
        {
            nif(&*a);
        }
        else{
            printf("Introduzca un valor comprendido entre 00000001 y 99999999");
        }
    }
    if (*z == 2)
    {
        if ((( *a > 0) && ( *a <= 3999))  )
        {
            romanos(&*a);
        }
        else{
            printf("Introduzca un número entero válido comprendido entre 1 y 3999");
        }
    }
}*/
int comprobante(int*z, int*a)
{

    if (*z == 1)
    {
        if (( *a > 0) && ( *a <= 99999999))
        {
            nif(&*a);
        }
        else{
            printf("Introduzca un valor comprendido entre 00000001 y 99999999");
        }
    }
    if (*z == 2)
    {
        if ((( *a > 0) && ( *a <= 3999))  )
        {
            romanos(&*a);
        }
        else{
            printf("Introduzca un número entero válido comprendido entre 1 y 3999");
        }
    }
}

