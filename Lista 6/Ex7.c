#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[7][7];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            matriz[i][j] = rand() % 41 + 10;
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\nMatriz com valores pares substituidos por zero:\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matriz[i][j] != 0)
            {
                matriz[i][j] = 1;
            }
        }
    }

    printf("\nMatriz com valores impares substituidos por um:\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
