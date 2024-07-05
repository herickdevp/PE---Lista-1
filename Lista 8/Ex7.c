#include <stdio.h>

int main()
{
    FILE *file;
    char line[256];
    int line_count = 0;

    file = fopen("texto.txt", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
        line_count++;
    }

    fclose(file);
    printf("\nQuantidade total de linhas: %d\n", line_count);
    return 0;
}
