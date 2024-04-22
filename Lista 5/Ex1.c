#include <stdio.h>

#define TAMANHO_VETOR 8

int main()
{
    int vetor[TAMANHO_VETOR];
    int i, numero, encontrado = 0;

    printf("Digite %d numeros inteiros para preencher o vetor:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para pesquisar no vetor: ");
    scanf("%d", &numero);

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (vetor[i] == numero)
        {
            printf("O numero %d foi encontrado na posicao %d do vetor.\n", numero, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("O numero %d nao foi encontrado no vetor.\n", numero);
    }

    return 0;
}
