
#include <stdio.h>
#include <time.h>

int main()
{
    int i, j;
    int matriz[100][100];

    FILE *arquivo;

    arquivo = fopen("imgCinza.pgm", "w");

    if (arquivo != NULL)
    {
        printf("Arquivo aberto");
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                if (i == j)
                {
                    matriz[i][j] = 0;
                }
                else
                {
                    matriz[i][j] = 255;
                }
            }
        }
        fprintf(arquivo, "P2\n");
        fprintf(arquivo, "# Criado por Herick\n");
        fprintf(arquivo, "%d %d \n", 100, 100);
        fprintf(arquivo, "%d \n", 255);
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                fprintf(arquivo, "%d ", matriz[i][j]);
            }
        }
        fclose(arquivo);
    }
    else
    {
        printf("Erro");
        return 1;
    }

    return 0;
}