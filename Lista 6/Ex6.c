#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main()
{
    srand(time(NULL));
    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 900 + 100;
        }
    }

    printf("Matriz 5x5 com valores aleatorios entre 100 e 999:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }

    int maior = INT_MIN;
    int segundoMaior = INT_MIN;
    int menor = INT_MAX;
    int segundoMenor = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior)
            {
                segundoMaior = maior;
                maior = matriz[i][j];
            }
            else if (matriz[i][j] > segundoMaior && matriz[i][j] != maior)
            {
                segundoMaior = matriz[i][j];
            }

            if (matriz[i][j] < menor)
            {
                segundoMenor = menor;
                menor = matriz[i][j];
            }
            else if (matriz[i][j] < segundoMenor && matriz[i][j] != menor)
            {
                segundoMenor = matriz[i][j];
            }
        }
    }

    printf("\nSegundo maior valor da matriz: %d\n", segundoMaior);
    printf("Segundo menor valor da matriz: %d\n", segundoMenor);

    return 0;
}
