#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[10][10];
    int i, j, aleatorio, soma = 0;
    int min = 0;
    int max = 9;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j < 9)
            {
                aleatorio = min + rand() % (max - min + 1);
                array[i][j] = aleatorio;
                soma += array[i][j];
            }
            else
            {
                array[i][j] = soma;
                soma = 0;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
