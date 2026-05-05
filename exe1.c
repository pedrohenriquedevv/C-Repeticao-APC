#include <stdio.h>
/*
Faça um programa que 
receba dois números inteiros e
gere os números inteiros que estão no
intervalo compreendido por eles.
*/

int main()
{
    int a,b,maior,menor;

    printf("Digite um número:");
    scanf("%i",&a);
    printf("Digite um número:");
    scanf("%i",&b);

    if(a > b)
    {
        maior = a;
        menor = b;
    }else
    {
        maior = b;
        menor = a;
    }

    for(int i = menor + 1; i < maior; i++)
    {
        printf("-%i\n",i);
    }

}