#include <stdio.h>

#define TAMANHO_VETOR 9

int main()
{
    int vetorA[TAMANHO_VETOR];
    int vetorB[TAMANHO_VETOR];
    int vetorSoma[TAMANHO_VETOR];
    int i, numeroA = 2, numeroB = 10;

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetorA[i] = numeroA;
        numeroA += 2;
    }

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetorB[i] = numeroB++;
    }

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }

    printf("Vetor A (numeros pares de 2 a 20):\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B (numeros de 10 a 19):\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    printf("Vetor Soma (soma de A + B):\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetorSoma[i]);
    }
    printf("\n");

    return 0;
}
