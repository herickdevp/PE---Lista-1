#include <stdio.h>

#define TAMANHO_VETOR 10

int main()
{
    int vetor[TAMANHO_VETOR];
    int i, numero = 2;

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = numero;
        numero += 2;
    }

    printf("Vetor de numeros pares de 2 a 20:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
