#include <stdio.h>
/*
Leia vários números até que o usuário digite 0.
Calcule e mostre:
 
A média dos valores
Quantos números foram digitados
*/
int main()
{
    float numeros;
    float media = 0;
    int i = 0; 

    printf("//////////////\n");
    printf("  Bagunça\n");
    printf("Digite 0 para sair!\n");

    while(1)
    {   
        printf("Numero %i:",i + 1);
        scanf("%f",&numeros);
        if(numeros == 0)
        {
            break;
        }
        media = media + numeros;
        i++;
    }
    
    printf(" \n");
    printf("//////////////\n");
    printf("Voce digitou ao todo %i números!\n", i);
    printf("A media entre eles ficou de :%1.f\n",media / i);
    printf("//////////////\n");
}