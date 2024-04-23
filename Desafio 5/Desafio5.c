#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 15

int main()
{

    int min = 1;
    int max = 25;
    int vetor[TAMANHO_VETOR], i, j, num;

    srand(time(NULL));

    for (i = 0; i <= TAMANHO_VETOR; i++)
    {
        int cont = 0;
        num = min + rand() % (max - min + 1);

        for (j = 0; j <= TAMANHO_VETOR; j++)
        {
            if (vetor[j] == num)
            {
                cont++;
            }
        }
        if (cont == 0)
        {
            vetor[i] = num;
        }
        else
        {
            i--;
        }
    }

    for (i = 0; i <= TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
        vetor[i] = min + rand() % (max - min + 1);
    }

    return 0;
}
