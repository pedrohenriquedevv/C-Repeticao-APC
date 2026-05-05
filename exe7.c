#include <stdio.h>

/*
Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares
e a soma dos números ímpares. 
O programa para quando entrar um número maior que 1000.
*/
int main()
{

    int numero = 0;
    int somaPar = 0;
    int somaImpar = 0;

    while(1)
    {
        printf("Digite um número, se digitar um valor acima de mil ele fecha!");
        scanf("%i",&numero);

        if(numero > 1000)
        {
            break;
        }

        if(numero % 2 == 0)
        {
            somaPar += numero;
        }else
        {
            somaImpar += numero;
        }
    }

    printf("\n");
    printf("\n Soma Numeros pares:%i",somaPar);
    printf("\n Soma Numeros impares:%i",somaImpar);
}