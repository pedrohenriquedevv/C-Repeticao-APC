#include <stdio.h>

/*
Escreva um programa
em C que lê 10 valores reais, 
encontra o maior e o menor deles e 
mostra o resultado.
*/
int main()
{
        int valor;
        int maior = 0;
        int menor = 0;

    for(int i = 1; i <= 10; i++)
    {
        printf("Digite o número %i*:",i);
        scanf("%i",&valor);

        if(i == 1)
        {
            maior = valor;
            menor = valor;
        }

        if(valor < menor)
        {
            menor = valor;
        }
        else if(valor > maior)
        {
            maior = valor;
        }

    }
    printf("Maior:%i\n",maior);
    printf("Menor:%i",menor);

}