#include <stdio.h>

int main()
{
    int altura, i, j;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = altura - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
