#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 4

int binarioParaDecimal(int vetor[], int tamanho)
{
    int decimal = 0;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        decimal = decimal * 2 + vetor[i];
    }

    return decimal;
}

int main()
{
    int vetor[TAMANHO_VETOR];
    int i;

    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = rand() % 2;
    }

    printf("Vetor de numeros aleatorios (0 e 1):\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int decimal = binarioParaDecimal(vetor, TAMANHO_VETOR);
    printf("Numero binario convertido para decimal: %d\n", decimal);

    return 0;
}
