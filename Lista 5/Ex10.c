#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 20

int main()
{
    int vetor[TAMANHO_VETOR];
    int i;

    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }

    printf("Vetor usando a mascara de numeros inteiros:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor usando a mascara de char:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    return 0;
}
