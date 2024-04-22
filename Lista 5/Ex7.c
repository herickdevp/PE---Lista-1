#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 4
#define MAX_TENTATIVAS 3

int binarioParaDecimal(int vetor[], int tamanho)
{
    int decimal = 0;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        decimal = decimal * 2 + vetor[i];
    }

    return decimal;
}

int main()
{
    int vetor[TAMANHO_VETOR];
    int i, tentativas = 0, acertos = 0, erros = 0;
    int resposta, numero_decimal;

    srand(time(NULL));

    printf("Bem-vindo ao jogo de conversao de numeros binarios para decimal!\n");
    printf("Voce tera que acertar o numero decimal correspondente ao numero binario fornecido.\n");
    printf("O jogo terminara apos %d tentativas erradas.\n\n", MAX_TENTATIVAS);

    while (erros < MAX_TENTATIVAS)
    {
        for (i = 0; i < TAMANHO_VETOR; i++)
        {
            vetor[i] = rand() % 2;
        }

        printf("Numero binario: ");
        for (i = 0; i < TAMANHO_VETOR; i++)
        {
            printf("%d", vetor[i]);
        }
        printf("\n");

        printf("Digite o numero decimal correspondente: ");
        scanf("%d", &resposta);

        numero_decimal = binarioParaDecimal(vetor, TAMANHO_VETOR);

        if (resposta == numero_decimal)
        {
            printf("Parabens! Voce acertou.\n");
            acertos++;
        }
        else
        {
            printf("Resposta incorreta. O numero decimal correto era: %d\n", numero_decimal);
            erros++;
        }

        printf("Acertos: %d  Erros: %d\n\n", acertos, erros);
    }

    printf("Fim do jogo. Voce errou %d vezes.\n", erros);

    return 0;
}
