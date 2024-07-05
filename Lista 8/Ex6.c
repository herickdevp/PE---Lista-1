#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file;
    file = fopen("matriz_aleatoria.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    srand(time(NULL));
    int matriz[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = 10 + (rand() % 90);
            fprintf(file, "%d ", matriz[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
