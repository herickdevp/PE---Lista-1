#include <stdio.h>

int main()
{
    int num;

    printf("Numeros pares entre 0 e 100 em ordem crescente:\n");

    for (num = 0; num <= 100; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
