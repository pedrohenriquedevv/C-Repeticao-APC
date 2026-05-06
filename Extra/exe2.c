#include <stdio.h>
/*
Mostre todas as tabuadas de um intervalo definido pelo usuário.
Ex: de 3 até 7
*/
int main()
{
    int a,b,maior,menor;
    printf("Digite um intervalo para ver as tabuada:\z");
    scanf("%i", &a);
    scanf("%i", &b);

    if(a > b)
    {
        maior = a;
        menor = b;
    }else if(b > a)
    {
        maior = b;
        menor = a;
    }

    for(int i = menor; i <= maior; i++)
    {
        printf(" \n");
        printf("////////////////\n");
        for(int j = 1; j <= 10; j ++)
        {
            printf("%i x %i = %i\n",i,j,( i * j ));
        }
        printf("////////////////\n");
    }
}