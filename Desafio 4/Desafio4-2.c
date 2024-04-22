#include <stdio.h>

int main()
{
    int limite = 1000;
    int soma = 0;

    for (int i = 1; i < limite; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma += i;
            printf("%d + ", soma);
        }
    }

    printf("\n\nA soma de todos os multiplos de 3 ou 5 abaixo de %d e %d.\n", limite, soma);

    return 0;
}
