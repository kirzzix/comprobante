/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esteban
 *
 * Created on 16 de noviembre de 2017, 14:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    float num;
    int valor;
    scanf("%f",&num);
    valor =num / 1;
    
   if ( valor == num ) {
        printf("%i",valor);
   }else {
        printf("numero no valido");
   }
    
    return (0);
}

