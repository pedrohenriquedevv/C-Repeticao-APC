#include <stdio.h>

/*
 Escreva um programa em C 
 que gera números entre 1000 e 1999 e 
 mostra aqueles que divididos por 11 
 dão resto 5.
*/
int main()
{
    for(int i = 1000; i < 2000; i ++)
    {
        if((i % 11) == 5)
        {
            printf("-%i\n",i);
        }
    }
}