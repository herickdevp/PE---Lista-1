#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file;
    file = fopen("numeros_aleatorios.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int num = (rand() % 201) - 100; // Gera números entre -100 e 100
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    return 0;
}
