#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Numeros pares entre 0 e 100:\n");

    for (num = 0; num <= 100; num += 2)
    {

        printf("%d ", num);

        soma += num;
    }
    printf("\nA soma dos numeros pares entre 0 e 100 e: %d\n", soma);

    return 0;
}
