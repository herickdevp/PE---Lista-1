#include <stdio.h>

#define TAMANHO_VETOR 5

int main()
{
    int vetor[TAMANHO_VETOR];
    int cubos[TAMANHO_VETOR];
    int i;

    printf("Digite cinco numeros:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%d", &vetor[i]);
        cubos[i] = vetor[i] * vetor[i] * vetor[i];
    }

    printf("Vetor original:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor com os cubos dos numeros:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", cubos[i]);
    }
    printf("\n");

    return 0;
}
