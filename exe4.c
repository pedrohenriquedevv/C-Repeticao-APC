#include <stdio.h>
/*
Faça um programa em C que calcula o produto dos números
digitados pelo usuário. O programa em C deve permitir que 
o usuário digite uma quantidade não determinada de números. 
O programa em C encerra quando o usuário digita o valor zero.
*/
int main()
{
    int entrada = 1;
    while(entrada != 0)
    {
        printf("/////////////////////////////////////\n");
        printf("/// Calculadora de Multiplicação ///\n");
        printf("/////////////////////////////////////\n");
        printf("Digite 1 para continuar ou 0 para encerrar!\n");
        scanf("%i",&entrada);

        if(entrada != 1)
        {
            break;
        }
        
        float a,b,produto;

        printf("Digite o 1 número:");
        scanf("%f",&a);
        printf("Digite o 2 número:");
        scanf("%f",&b);

        produto = a * b;
        printf(" \n");
        printf("Produto:%1.f\n",produto);
        printf(" \n");
    }
}