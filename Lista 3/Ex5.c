#include <stdio.h>

int main()
{
    int num;

    printf("Numeros multiplos de 3 entre 100 e 200 em ordem crescente:\n");

    for (num = 100; num <= 200; num++)
    {
        if (num % 3 == 0)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
