#include <stdio.h>

int main()
{
    FILE *file = fopen("labirinto.pbm", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "P1\n");
    fprintf(file, "#labirinto.pbm\n");
    fprintf(file, "11 11\n");

    int labirinto[11][11] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            fprintf(file, "%d ", labirinto[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
