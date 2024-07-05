#include <stdio.h>

int main()
{
    FILE *file;
    char line[256];
    int line_number = 1;

    file = fopen("texto.txt", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file))
    {
        printf("%d. %s", line_number, line);
        line_number++;
    }

    fclose(file);
    return 0;
}
