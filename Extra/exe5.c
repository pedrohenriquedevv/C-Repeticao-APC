#include <stdio.h>
/*
Pirâmide numérica crescente

Exemplo para N = 5:

1
12
123
1234
12345
*/
int main()
{
    int n;
    printf("Digite um número:");
    scanf("%i",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}