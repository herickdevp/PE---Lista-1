#include <stdio.h>

int main()
{
    int altura, i, j;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++)
    {
        for (j = 1; j <= i && j <= altura; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = altura - 1; i >= 1; i--)
    {
        for (j = 1; j <= i && j <= altura; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
