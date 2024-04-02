#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int min = 1;
    int max = 100;
    int jogo = 1, numeroSecreto, i, opcao;
    while (jogo != 0)
    {

        srand(time(NULL));
        numeroSecreto = min + rand() % (max - min + 1);
        i = 1;

        printf("O numero secreto e entre 1 a 100\n");
        printf("Voce tera 5 chances para acertar o numero secreto");
        while (i <= 5 && opcao != numeroSecreto)
        {
            printf("\nTentativa %d: ", i);
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 100)
            {
                printf("Opcao invalida\n");
                i--;
            }

            if (opcao == numeroSecreto)
            {
                printf("Senha Coreta! Acesso garantido");
                break;
            }
            else
            {
                if (opcao < numeroSecreto)
                {
                    printf("A senha e maior do que o valor %d", opcao);
                }
                else
                {
                    printf("A senha e menor do que o valor %d", opcao);
                }
            }

            i++;
        }

        printf("\n\nSenha incorreta. Nimero de tentativas excedido!\n");
        printf("\nJOGAR NOVAMENTE?\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }

    return 0;
}