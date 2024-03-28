#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opcao;
    int computador;
    int jogo = 1;

    while (jogo != 0)
    {
        printf("JOGO - PEDRA / PAPEL / TESOURA");
        printf("Escolha uma opcao: \n0 - Pedra\n1 - Papel\n2 - Tesoura\n");
        scanf("%d", &opcao);

        srand(time(NULL));
        computador = rand() % 3;

        printf("\n\nComputador: %d X %d :Jogador\n\n", computador, opcao);

        if (opcao == computador)
        {
            printf("Empate!\n");
        }
        else if ((opcao == 0 && computador == 2) ||
                 (opcao == 1 && computador == 0) ||
                 (opcao == 2 && computador == 1))
        {
            printf("Você venceu!\n");
        }
        else
        {
            printf("O computador venceu!\n");
        }
        printf("\nJOGAR NOVAMENTE?\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }

    return 0;
}