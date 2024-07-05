#include <stdio.h>

int main()
{
    FILE *file = fopen("imagem_tons_cinza.pgm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P2\n");
    fprintf(file, "#imagem_tons_cinza.pgm\n");
    fprintf(file, "100 256\n");
    fprintf(file, "255\n");

    for (int i = 0; i < 256; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            fprintf(file, "%d ", i);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
