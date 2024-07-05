#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomWord(FILE *file, int length)
{
    for (int i = 0; i < length; i++)
    {
        char letter = 'a' + (rand() % 26);
        fprintf(file, "%c", letter);
    }
}

int main()
{
    FILE *file;
    file = fopen("texto_aleatorio.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    srand(time(NULL));
    int num_lines = 10 + (rand() % 11);
    for (int i = 0; i < num_lines; i++)
    {
        int num_words = 5 + (rand() % 16);
        for (int j = 0; j < num_words; j++)
        {
            int word_length = 1 + (rand() % 15);
            generateRandomWord(file, word_length);
            fprintf(file, " ");
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
