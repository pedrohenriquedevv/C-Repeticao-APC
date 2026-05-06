#include <stdio.h>
/*
Conversão decimal → binário
*/
int main()
{
    int numero,resto;
    int binario = 0, ordem = 1;

    printf("Digite um numero:");
    scanf("%i",&numero);

    while(numero > 0)
    {
        resto = numero % 2;
        binario = binario + (resto * ordem);
        numero = numero / 2;
        ordem = ordem * 10;
    }

    printf("Binario: %i",binario);
}