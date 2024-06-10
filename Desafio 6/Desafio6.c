#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Função para calcular o desvio padrão populacional
double calcularDesvioPadrao(double *valores, int tamanho, double media)
{
    double somaQuadrados = 0.0;

    for (int i = 0; i < tamanho; i++)
    {
        somaQuadrados += pow(valores[i] - media, 2);
    }

    return sqrt(somaQuadrados / tamanho);
}

// Função para preencher o array 2D com valores aleatórios e calcular os z-scores
void preencherArrayZScore(double array[2][10])
{
    // Preencher a primeira linha com valores aleatórios entre 1 e 100
    srand(time(NULL)); // Semente para a função rand
    for (int i = 0; i < 10; i++)
    {
        array[0][i] = rand() % 100 + 1; // Número aleatório entre 1 e 100
    }

    // Calcular a média da primeira linha
    double media = 0.0;
    for (int i = 0; i < 10; i++)
    {
        media += array[0][i];
    }
    media /= 10.0;

    // Calcular o desvio padrão da primeira linha
    double desvioPadrao = calcularDesvioPadrao(array[0], 10, media);

    // Preencher a segunda linha com os z-scores
    for (int i = 0; i < 10; i++)
    {
        array[1][i] = (array[0][i] - media) / desvioPadrao;
    }
}

// Função para imprimir o array 2D
void imprimirArray(double array[2][10])
{
    printf("Valores\t\tZ-Scores\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\t\t%.2lf\n", array[0][i], array[1][i]);
    }
}

int main()
{
    double array[2][10];

    preencherArrayZScore(array);

    printf("Array 2D com valores aleatórios e z-scores:\n");
    imprimirArray(array);

    return 0;
}
