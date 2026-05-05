#include <stdio.h>

/*
Leia dois números A e B e calcule a soma de todos os números primos nesse intervalo.
*/
int main()
{
    int a, b, maior, menor;
    int soma = 0;
    printf("Digite valor:");
    scanf("%i", &a);
    printf("Digite valor:");
    scanf("%i", &b);

    if (a > b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }

    for (int i = menor; i <= maior; i++)
    {
        int primo = 1;

        if (i < 2)
        {
            primo = 0;
        }
        else 
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo == 1)
        {
            soma += i;
        }
    }
    printf("A soma dos primos no intervalo é de:%i", soma);
}