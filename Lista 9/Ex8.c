#include <stdio.h>

int main()
{
    FILE *file = fopen("imagem_cinco_tons.pgm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P2\n");
    fprintf(file, "#imagem_cinco_tons.pgm\n");
    fprintf(file, "60 100\n");
    fprintf(file, "255\n");

    int tons[5] = {0, 64, 128, 192, 255};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            for (int k = 0; k < 60; k++)
            {
                fprintf(file, "%d ", tons[i]);
            }
            fprintf(file, "\n");
        }
    }

    fclose(file);
    return 0;
}
