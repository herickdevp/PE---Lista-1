#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, h;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (h = 1; h <= n - i; h++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("  ");

        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
