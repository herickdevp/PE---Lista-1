#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("imagem_intervals.pgm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P2\n");
    fprintf(file, "#imagem_intervals.pgm\n");
    fprintf(file, "60 100\n");
    fprintf(file, "255\n");

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int min = 0, max = 0;
        if (i < 20)
        {
            min = 0;
            max = 55;
        }
        else if (i < 40)
        {
            min = 45;
            max = 105;
        }
        else if (i < 60)
        {
            min = 95;
            max = 155;
        }
        else if (i < 80)
        {
            min = 145;
            max = 205;
        }
        else
        {
            min = 195;
            max = 255;
        }
        for (int j = 0; j < 60; j++)
        {
            fprintf(file, "%d ", min + rand() % (max - min + 1));
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
