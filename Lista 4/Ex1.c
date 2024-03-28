#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opcao, humano, computador, jogo = 1, soma;

    while (jogo != 0)
    {

        srand(time(NULL));
        computador = rand() % 6;

        printf("Jogo par ou impar\nEscolha 0 - PAR ou 1 - IMPAR: ");
        scanf("%d", &opcao);

        printf("Escolha um numero de 0 a 5: ");
        scanf("%d", &humano);

        soma = humano + computador;

        printf("Computador: %d X %d :Humano\nSoma: %d", computador, humano, soma);

        if ((soma % 2 == 0 && opcao == 0) || (soma % 2 != 0 && opcao == 1))
        {
            printf("\nVoce venceu!");
        }
        else
        {
            printf("\nComputador venceu!");
        }

        printf("\nJOGAR NOVAMENTE?\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }

    return 0;
}