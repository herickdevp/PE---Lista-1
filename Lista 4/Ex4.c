#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogo = 1, chute, defesa;

    while (jogo != 0)
    {

        srand(time(NULL));
        defesa = rand() % 10;

        printf("\nDISPUTA DE PENALTI\n\n");
        printf("===================\n|  1  |  2  |  3  |\n|  4  |  5  |  6  |\n|  7  |  8  |  9  |\n\n");
        printf("Escolha o numero referente ao local que deseja chutar: ");
        scanf("%d", &chute);

        if (chute != defesa)
        {
            printf("GOLLLL");
        }
        else
        {
            printf("DESESA");
        }

        printf("\nJOGAR NOVAMENTE?\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }
    return 0;
}