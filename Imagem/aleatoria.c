#include <stdio.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int i, j, k, n;
    int matriz[100][100][3];

    FILE *arquivo;

    arquivo = fopen("aleatorio.ppm", "w");

    if (arquivo != NULL)
    {
        printf("Arquivo Criado");
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = rand() % 256;
                    matriz[i][j][k] = n;
                }
            }
        }

        fprintf(arquivo, "P3\n");
        fprintf(arquivo, "# Criado por Herick");
        fprintf(arquivo, "%d %d\n", 100, 100);
        fprintf(arquivo, "%d\n", 255);
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(arquivo, "%d ", matriz[i][j][k]);
                }
            }
        }
        fclose(arquivo);
    }
    else
    {
        printf("Erro ao criar");
    }

    return 0;
}