#include <stdio.h>
#include <string.h>

int main()
{

    int classe, regiao, arma;
    char nomeClasse[30], nomeRegiao[30], nomeArma[30];

    printf("BEM VINDO AO JOGO\n");
    printf("Vamos definir o seu personagem\n\n");

    printf("Escolha sua classe:\n 1 - GUERREIRO\n 2 - MAGO\n 3 - DRUIDA\n 4 - SACERDOTE\n");
    scanf("%d", &classe);

    switch (classe)
    {
    case 1:
        strcpy(nomeClasse, "GUERREIRO");
        break;
    case 2:
        strcpy(nomeClasse, "MAGO");
        break;
    case 3:
        strcpy(nomeClasse, "DRUIDA");
        break;
    case 4:
        strcpy(nomeClasse, "SACERDOTE");
        break;

    default:
        strcpy(nomeClasse, " - ");
        printf("OPCAO INVALIDA");
        break;
    }

    printf("\nEscolha sua regiao:\n 1 - AZEROTH\n 2 - AZKABAN\n 3 - AURORA\n 4 - BRIGHTWOOD\n");
    scanf("%d", &regiao);

    switch (regiao)
    {
    case 1:
        strcpy(nomeRegiao, "AZEROTH");
        break;
    case 2:
        strcpy(nomeRegiao, "AZKABAN");
        break;
    case 3:
        strcpy(nomeRegiao, "AURORA");
        break;
    case 4:
        strcpy(nomeRegiao, "BRIGHTWOOD");
        break;

    default:
        strcpy(nomeRegiao, " - ");
        printf("OPCAO INVALIDA");
        break;
    }

    printf("\nEscolha sua arma:\n 1 - MACHADO CEGO\n 2 - PICARETA INVERTIDA\n 3 - ADAGA SEM PONTA\n 4 - CORRENTE SEM ELO\n");
    scanf("%d", &arma);

    switch (arma)
    {
    case 1:
        strcpy(nomeArma, "MACHADO CEGO");
        break;
    case 2:
        strcpy(nomeArma, "PICARETA INVERTIDA");
        break;
    case 3:
        strcpy(nomeArma, "ADAGA SEM PONTA");
        break;
    case 4:
        strcpy(nomeArma, "CORRENTE SEM ELO");
        break;

    default:
        strcpy(nomeArma, " - ");
        printf("OPCAO INVALIDA");
        break;
    }
    printf("\nPARABENS PERSONAGEM CRIADO\n");
    printf("Voce e um %s da regiao de %s armado com um %s", nomeClasse, nomeRegiao, nomeArma);

    return 0;
}