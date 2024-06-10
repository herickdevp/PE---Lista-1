#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 21 - 10;
        }
    }

    printf("Matriz 5x5 com numeros aleatorios entre -10 e 10:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%03d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
