#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adicao(int num1, int num2)
{
    return num1 + num2;
}

int subtracao(int num1, int num2)
{
    return num1 - num2;
}

int multiplicacao(int num1, int num2)
{
    return num1 * num2;
}

int divisao(int num1, int num2)
{
    return num1 / num2;
}

int placar = 0;

int main()
{
    int num1 = 0, num2 = 0;
    int min = 1;
    int max = 60;
    int i = 1, dificuldade, jogo = 0;
    float resposta, resultado;

    srand(time(NULL));

    printf("\nEscolha a dificuldade do jogo\n\n");

    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    scanf("%d", &dificuldade);

    printf("\nAcerte o resultado, voce tem 3 chances\n");

    num1 = min + rand() % (max - min + 1);
    num2 = min + rand() % (max - min + 1);

    switch (dificuldade)
    {
    case 1:
        resultado = adicao(num1, num2);
        printf("%d + %d = ", num1, num2);

        while (i <= 3 && resposta != resultado)
        {
            printf("\nTentativa %d: ", i);
            scanf("%f", &resposta);

            if (resultado == resposta)
            {
                printf("\nVoce acertou!\n");
                placar++;
            }
            else
            {
                printf("\nVoce errou!\n");
            }
            i++;
        }
        printf("\nPlacar atual: %d\n", placar);
        printf("\nJogar novamente? \n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
        if (jogo != 0)
        {
            main();
        }

        return resultado;

    case 2:
        resultado = subtracao(num1, num2);
        printf("%d - %d = ", num1, num2);

        while (i <= 3 && resposta != resultado)
        {
            printf("\nTentativa %d: ", i);
            scanf("%f", &resposta);

            if (resultado == resposta)
            {
                printf("\nVoce acertou!\n");
                placar++;
            }
            else
            {
                printf("\nVoce errou!\n");
            }
            i++;
        }

        printf("\nPlacar atual: %d\n", placar);
        printf("\nJogar novamente? \n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
        if (jogo != 0)
        {
            main();
        }

        return resultado;
    case 3:
        resultado = multiplicacao(num1, num2);
        printf("%d * %d = ", num1, num2);

        while (i <= 3 && resposta != resultado)
        {
            printf("\nTentativa %d: ", i);
            scanf("%f", &resposta);

            if (resultado == resposta)
            {
                printf("\nVoce acertou!\n");
                placar++;
            }
            else
            {
                printf("\nVoce errou!\n");
            }
            i++;
        }

        printf("\nPlacar atual: %d\n", placar);
        printf("\nJogar novamente? \n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
        if (jogo != 0)
        {
            main();
        }

        return resultado;
    case 4:
        resultado = divisao(num1, num2);
        printf("%d / %d = ", num1, num2);

        while (i <= 3 && resposta != resultado)
        {
            printf("\nTentativa %d: ", i);
            scanf("%f", &resposta);

            if (resultado == resposta)
            {
                printf("\nVoce acertou!\n");
                placar++;
            }
            else
            {
                printf("\nVoce errou!\n");
            }
            i++;
        }

        printf("\nPlacar atual: %d\n", placar);
        printf("\nJogar novamente? \n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
        if (jogo != 0)
        {
            main();
        }

        return resultado;

    default:
        printf("Opcao invalida");
        break;
    }
    printf("Teste");

    return 0;
}