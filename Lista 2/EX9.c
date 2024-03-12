#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 200)
    {
        printf("Voce digitou um numero entre 100 e 200");
    }
    else
    {
        printf("Voce digitou um numero fora da faixa");
    }

    return 0;
}