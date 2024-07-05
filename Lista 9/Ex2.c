#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("imagem2.pgm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P2\n");
    fprintf(file, "#imagem2.pgm\n");
    fprintf(file, "100 100\n");
    fprintf(file, "255\n");

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            fprintf(file, "%d ", rand() % 256);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
