#include <stdio.h>

#define TAMANHO_VETOR 11

int main()
{
    int vetor[TAMANHO_VETOR];
    int i;

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = 10 + i;
    }

    printf("Elementos pares do vetor de tras para frente:\n");
    for (i = TAMANHO_VETOR - 1; i >= 0; i--)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    printf("Numeros impares:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
