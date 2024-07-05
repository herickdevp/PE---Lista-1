#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("imagem_linhas_aleatorias.pgm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P2\n");
    fprintf(file, "#imagem_linhas_aleatorias.pgm\n");
    fprintf(file, "100 100\n");
    fprintf(file, "255\n");

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int valor = rand() % 256;
        for (int j = 0; j < 100; j++)
        {
            fprintf(file, "%d ", valor);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
