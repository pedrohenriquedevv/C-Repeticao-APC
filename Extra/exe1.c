#include <stdio.h>
/*
Leia vários números até o usuário digitar 0.
Conte quantas vezes o dígito 5 aparece 
no total de todos os números digitados.
*/
int main()
{
    int numero;
    int contador = 0;

    printf("DIgite numeros, digite 0 para encerrar!\n");

    while(1)
    {
        scanf("%i",&numero);

        if(numero == 0)
        {
            break;
        }
        if(numero == 5)
        {
            contador ++;
        }
    }

    printf("O 5 apareceu %i vezes",contador);
}