#include <stdio.h>

void imprimir_sequencia(int start, int stop, int step)
{
    if (step <= 1)
    {
        printf("O número de passos deve ser maior que 1.\n");
        return;
    }

    double intervalo = (double)(stop - start) / (step - 1);
    for (int i = 0; i < step; i++)
    {
        printf("%.2f", start + i * intervalo);
        if (i < step - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
    // Exemplo de uso da função
    imprimir_sequencia(2, 3, 5);

    return 0;
}
