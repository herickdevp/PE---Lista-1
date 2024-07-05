#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("numeros_0_99.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 100; i++)
    {
        fprintf(file, "%d ", i);
        if ((i + 1) % 10 == 0)
        {
            fprintf(file, "\n");
        }
    }

    fclose(file);
    return 0;
}
