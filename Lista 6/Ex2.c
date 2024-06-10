#include <stdio.h>

int main()
{
    int matriz[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        matriz[i][i] = 1;
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
