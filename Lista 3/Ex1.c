#include <stdio.h>

int main()
{
    int num_skins;
    float preco_unitario, custo_total;

    printf("Quantas skins foram compradas? ");
    scanf("%d", &num_skins);

    if (num_skins < 10)
    {
        preco_unitario = 1.30;
    }
    else
    {
        preco_unitario = 1.00;
    }

    custo_total = num_skins * preco_unitario;

    printf("O custo total da compra e: R$ %.2f\n", custo_total);

    return 0;
}