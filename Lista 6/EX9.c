#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double matriz[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] = ((double)rand() / RAND_MAX) * 2 - 1;
        }
    }

    printf("Matriz 6x6 com valores aleatorios decimais entre -1 e 1:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%8.6lf ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplicando todos os elementos por 2:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] *= 2;
            printf("%8.6lf ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraindo de todos os elementos o valor 1:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] -= 1;
            printf("%8.6lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
