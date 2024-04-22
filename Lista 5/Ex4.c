#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 8

int main()
{
    int vetor[TAMANHO_VETOR];
    int i, contador_maior_que_30 = 0, soma_maior_que_30 = 0, soma_total = 0;

    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = rand() % 51;
    }

    printf("Vetor de numeros aleatorios:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        soma_total += vetor[i];
        if (vetor[i] > 30)
        {
            contador_maior_que_30++;
            soma_maior_que_30 += vetor[i];
        }
    }

    printf("Quantidade de numeros maiores que 30: %d\n", contador_maior_que_30);
    printf("Soma dos numeros maiores que 30: %d\n", soma_maior_que_30);
    printf("Soma total dos numeros do vetor: %d\n", soma_total);

    return 0;
}
