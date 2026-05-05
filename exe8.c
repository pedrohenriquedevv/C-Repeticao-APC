#include <stdio.h>

/*
Faça um programa que leia um número n e mostre na tela os n primeiros números primos.
*/
int main()
{

    int numero;
    int numeroTeste = 2;
    int quant = 0;

    printf("Quantos numeros primos deseja ver?");
    scanf("%i",&numero);

    printf("Os %i primeiros primos são:\n", numero);

    while(quant < numero)
    {
        int primo = 1;

        for(int i = 2; i <= numeroTeste / 2; i++)
        {
            if(numeroTeste % i == 0)
            {
                primo = 0;
                break;
            }
        }

        if(primo)
        {
            printf("-%i ",numeroTeste);
            quant ++;
        }

        numeroTeste ++;
    }
}