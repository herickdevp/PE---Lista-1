#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }

    return 0;
}
