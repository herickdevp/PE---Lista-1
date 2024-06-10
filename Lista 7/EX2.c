#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simular_dado(int lancamentos, int resultados[6])
{
    for (int i = 0; i < lancamentos; i++)
    {
        int resultado = rand() % 6; // Gera um número entre 0 e 5
        resultados[resultado]++;
    }
}

void calcular_porcentagens(int lancamentos, int resultados[6], double porcentagens[6])
{
    for (int i = 0; i < 6; i++)
    {
        porcentagens[i] = (double)resultados[i] / lancamentos * 100;
    }
}

void exibir_porcentagens(double porcentagens[6])
{
    for (int i = 0; i < 6; i++)
    {
        printf("Face %d: %.2f%%\n", i + 1, porcentagens[i]);
    }
}

int main()
{
    int lancamentos = 1000;
    int resultados[6] = {0}; // Inicializa o array de contadores com zeros
    double porcentagens[6];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Simula os lançamentos do dado
    simular_dado(lancamentos, resultados);

    // Calcula as porcentagens
    calcular_porcentagens(lancamentos, resultados, porcentagens);

    // Exibe as porcentagens
    exibir_porcentagens(porcentagens);

    return 0;
}
