#include <stdio.h>

/*
6. Faça um programa em C para gerar os n primeiros termos da seqüência:

                     1 1 2 3 5 8 13 21 34 55 89 …
*/
int main()
{
    int entrada;
    int termo1 = 1;
    int termo2 = 1;
    int termoAtual;

    
    printf("Quantos termos você deseja ver?:");
    scanf("%i",&entrada);

    for(int i = 1; i <= entrada; i++)
    {

        if(i == 1 || i == 2)
        {
            printf("-1\n");
        }else
        {
            termoAtual = termo1 + termo2;
            printf("-%i\n",termoAtual);
            termo1 = termo2;
            termo2 = termoAtual;
        }   
    }
}