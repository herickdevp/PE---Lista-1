#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int jogo = 1, computador, i, opcao;
    while (jogo != 0)
    {

        srand(time(NULL));
        computador = rand() % 101;
        i = 0;
        printf("Voce tera 5 chances para acertar o numero");
        while (i < 5 && opcao != computador)
        {
            printf("\nTentativa %d: ", i);
            scanf("%d", &opcao);

            if (opcao == computador)
            {
                printf("Voce acertou!!!");
            }
            else
            {
                if (opcao < computador)
                {
                    printf("O numero e maior que %d", opcao);
                }
                else
                {
                    printf("O numero e menor que %d", opcao);
                }
            }

            i++;
        }

        printf("\nJOGAR NOVAMENTE?\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }

    return 0;
}