#include <stdio.h>
/*
Mostre todas as tabuadas de 1 a 10
no formato organizado (usando laço dentro de laço)
*/
int main()
{
    for(int i = 1;i <= 10; i++)
    {
        for(int j = 1;j <= 10; j++)
        {
            printf("%i X %i = %i\n", i, j, (i * j));
        }
        printf("/////////////////////////////\n");
        printf(" \n");
    }
}