#include <stdio.h>

int main()
{
    int num;

    printf("Numeros impares entre 0 e 100 em ordem decrescente:\n");

    for (num = 100; num >= 0; num--)
    {
        if (num % 2 != 0)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
