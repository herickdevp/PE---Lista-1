#include <stdio.h>

int main()
{
    int i;

    printf("Imprimindo uma vez em cada linha:\n");
    for (i = 0; i < 10; i++)
    {
        printf("HERICK\n");
    }

    printf("\nImprimindo sem quebra de linhas e com separacao por virgulas:\n");
    for (i = 0; i < 9; i++)
    {
        printf("HERICK, ");
    }
    printf("HERICK\n");

    return 0;
}
