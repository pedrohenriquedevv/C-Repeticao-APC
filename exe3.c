#include <stdio.h>

/*
 Faça um programa em C que calcula e escreve a seguinte soma:

soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/
int main()
{
    float denominador = 1.0;
    float numerador = 1.0;
    float soma = 0.0;

    while(denominador <= 50)
    {
        soma += numerador / denominador;

        numerador += 2;
        denominador += 1;
    }

    printf(" O resultado da soma é de:%1.f",soma);
}