#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 10; i++)
    {
        soma += i;
        printf("%d ", i);
    }

    // Imprime a soma total
    printf("\nA soma dos numeros de 1 a 10 e: %d\n", soma);

    return 0;
}
