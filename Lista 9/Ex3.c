#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("imagem3.ppm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P3\n");
    fprintf(file, "#imagem3.ppm\n");
    fprintf(file, "100 100\n");
    fprintf(file, "255\n");

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            fprintf(file, "%d %d %d ", rand() % 256, rand() % 256, rand() % 256);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
