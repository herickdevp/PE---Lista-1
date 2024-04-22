#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, x = 1;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }

    return 0;
}
