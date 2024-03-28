#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, soma, resposta;

    srand(time(NULL));

    num1 = rand() % 100;
    num2 = rand() % 100;

    soma = num1 + num2;

    printf("Digite a soma de %d e %d: ", num1, num2);
    scanf("%d", &resposta);

    if (resposta == soma)
    {
        printf("Parabens! A resposta esta correta.\n");
    }
    else
    {
        printf("A resposta esta incorreta. A soma e %d.\n", soma);
    }

    return 0;
}
