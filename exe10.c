#include <stdio.h>

/*
Leia um número inteiro e mostre o número invertido.
Ex: 1234 → 4321
*/
int main()
{
    int numero;
    int invertido = 0;
    printf("Digite o número que deseja inverter:");
    scanf("%i",&numero);

    while(numero != 0)
    {
        invertido = invertido * 10 + (numero % 10);
        numero = (numero / 10);
    }

    printf("%i",invertido);
}