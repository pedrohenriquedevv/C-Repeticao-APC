#include <stdio.h>
/*
Duas cidades:

A cresce 3% ao ano
B cresce 1.5% ao ano

Descubra em quantos anos A ultrapassa B.
*/

int main()
{
    float cidMaior, cidMenor;
    float a,b;
    int contador = 0;
    printf("Digite a população da primeira cidade:");
    scanf("%f",&a);
    printf("Digite a população da segunda cidade:");
    scanf("%f",&b);

    if(a > b)
    {
        cidMaior = a;
        cidMenor = b;
    }else
    {
        cidMaior = b;
        cidMenor = a;
    }

    while(cidMenor <= cidMaior)
    {
        cidMaior = cidMaior * 1.015;
        cidMenor = cidMenor * 1.03;
        contador++;
    }

    printf("A cidade menor ultrapassara a maior em %i anos\n",contador);
    printf("População final menor: %.0f\n", cidMenor);
    printf("População final maior: %.0f\n", cidMaior);
}