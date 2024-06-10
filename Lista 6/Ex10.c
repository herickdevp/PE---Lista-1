#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 2;
        }
    }

    printf("Matriz 3x3 com valores aleatorios inteiros entre 0 e 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    bool linha_igual = false;
    bool coluna_igual = false;
    int valor_linha = 0;
    int valor_coluna = 0;

    for (int i = 0; i < 3; i++)
    {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2])
        {
            linha_igual = true;
            valor_linha = matriz[i][0];
            break;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (matriz[0][j] == matriz[1][j] && matriz[1][j] == matriz[2][j])
        {
            coluna_igual = true;
            valor_coluna = matriz[0][j];
            break;
        }
    }

    if (linha_igual)
    {
        printf("\nA linha com todos os valores iguais e: %d, com o valor %d.\n", valor_linha, valor_linha);
    }

    if (coluna_igual)
    {
        printf("\nA coluna com todos os valores iguais e: %d, com o valor %d.\n", valor_coluna, valor_coluna);
    }

    if (!linha_igual && !coluna_igual)
    {
        printf("\nNenhuma linha ou coluna tem todos os valores iguais.\n");
    }

    return 0;
}
