/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
int nif(int x)
{
int resto;
const char *letra[23];
letra[0] = "T";
letra[1] = "R";
letra[2] = "W";
letra[3] = "A";
letra[4] = "G";
letra[5] = "M";
letra[6] = "Y";
letra[7] = "F";
letra[8] = "P";
letra[9] = "D";
letra[10] = "X";
letra[11] = "B";
letra[12] = "N";
letra[13] = "J";
letra[14] = "Z";
letra[15] = "S";
letra[16] = "Q";
letra[17] = "V";
letra[18] = "H";
letra[19] = "L";
letra[20] = "C";
letra[21] = "K";
letra[22] = "E";
resto = x % 23;
printf("Su DNI completo es %i %s ",x,letra[resto]);
//printf("%i",numero);
//printf(letra[resto]);
return (0);
}