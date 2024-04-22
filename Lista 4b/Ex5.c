#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, x = 1, h;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (h = 1; h <= n - i; h++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }

    return 0;
}
