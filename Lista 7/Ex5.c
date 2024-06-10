#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_intervalo(int num1, int num2)
{
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1 + 1; i < num2; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera dois números aleatórios entre 0 e 100
    int num1 = rand() % 101;
    int num2 = rand() % 101;

    // Exibe os números gerados
    printf("N1 = %d, N2 = %d\n", num1, num2);

    // Chama a função para imprimir o intervalo
    imprimir_intervalo(num1, num2);

    return 0;
}
