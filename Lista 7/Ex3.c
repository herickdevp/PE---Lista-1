#include <stdio.h>

void imprimir_valores(int num)
{
    if (num < 0)
    {
        printf("O número deve ser maior ou igual a zero.\n");
        return;
    }
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    imprimir_valores(valor);

    return 0;
}
