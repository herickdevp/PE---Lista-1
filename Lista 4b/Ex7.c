#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
