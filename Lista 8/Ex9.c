#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file_in, *file_out;
    char ch;

    file_in = fopen("texto.txt", "r");
    if (file_in == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    file_out = fopen("texto_convertido.txt", "w");
    if (file_out == NULL)
    {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(file_in);
        return 1;
    }

    while ((ch = fgetc(file_in)) != EOF)
    {
        fputc(toupper(ch), file_out);
    }

    fclose(file_in);
    fclose(file_out);
    return 0;
}
