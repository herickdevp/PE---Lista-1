#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 101;
        }
    }

    printf("Matriz 10x10 com numeros aleatorios entre 0 e 100:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    printf("\nMaior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);

    return 0;
}
