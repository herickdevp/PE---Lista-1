#include <stdio.h>

int main()
{
    int vitoriaAzul, derrotaAzul, empateAzul, vitoriaVerde, derrotaVerde, empateVerde;
    int opcao, pontuacaoAzul, pontuacaoVerde;

    printf(" - EQUIPE AZUL - \n");
    printf(" - EQUIPE VERDE - \n\n");

    printf(" Digite a quantidade de VITORIAS da equipe AZUL: ");
    scanf("%d", &vitoriaAzul);
    printf(" Digite a quantidade de DERROTAS da equipe AZUL: ");
    scanf("%d", &derrotaAzul);
    printf(" Digite a quantidade de EMPATES da equipe AZUL: ");
    scanf("%d", &empateAzul);

    printf("\nDigite a quantidade de VITORIAS da equipe VERDE: ");
    scanf("%d", &vitoriaVerde);
    printf(" Digite a quantidade de DERROTAS da equipe VERDE: ");
    scanf("%d", &derrotaVerde);
    printf(" Digite a quantidade de EMPATES da equipe VERDE: ");
    scanf("%d", &empateVerde);

    pontuacaoAzul = (vitoriaAzul * 3) + empateAzul;
    pontuacaoVerde = (vitoriaVerde * 3) + empateVerde;

    printf("\nDigite o numero da equipe que deseja ver os resultados:\n");
    printf("1 - AZUL | 2 - VERDE\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nRESULTADO EQUIPE AZUL\n");
        printf("Vitorias: %d\n", vitoriaAzul);
        printf("Derrotas: %d\n", derrotaAzul);
        printf("Empates: %d\n", empateAzul);
        printf("Pontuacao Total: %d\n", pontuacaoAzul);
        break;

    case 2:
        printf("\nRESULTADO EQUIPE VERDE\n");
        printf("Vitorias: %d\n", vitoriaVerde);
        printf("Derrotas: %d\n", derrotaVerde);
        printf("Empates: %d\n", empateVerde);
        printf("Pontuacao Total: %d\n", pontuacaoVerde);
        break;

    default:
        printf("OPCAO INVALIDA");
        break;
    }

    return 0;
}