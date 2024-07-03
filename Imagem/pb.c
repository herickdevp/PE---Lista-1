
#include <stdio.h>
#include <time.h>

int main()
{
    int i, j;
    int matriz[100][100];

    FILE *arquivo;

    arquivo = fopen("pb.pbm", "w");

    if (arquivo != NULL)
    {
        printf("Arquivo aberto");
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                if ((i == 0) || (i == 99))
                {
                    matriz[i][j] = 1;
                }
                else
                {
                    if (i < 100)
                    {
                        matriz[i][j] = 1;
                    }
                    else if (j == 99)
                    {
                        matriz[i][j] = 1;
                    }
                    else
                    {
                        matriz[i][j] = 0;
                    }
                }
            }
        }
        fprintf(arquivo, "P1\n");
        fprintf(arquivo, "# Criado por Herick\n");
        fprintf(arquivo, "%d %d \n", 200, 100);
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