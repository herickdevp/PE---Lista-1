#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double matriz[6][6];
    double soma = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] = (double)rand() / RAND_MAX;
            soma += matriz[i][j];
        }
    }

    double media = soma / (6 * 6);

    printf("Matriz 6x6 com valores aleatorios decimais entre 0 e 1:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%8.6lf ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMedia dos valores da matriz: %.6lf\n", media);

    return 0;
}
