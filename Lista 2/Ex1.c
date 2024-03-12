#include <stdio.h>

int main()
{
    int num;
    float pol;

    printf("Digite um numero em metros para ser convertido em polegadas: ");
    scanf("%d", &num);

    pol = num * 39.37;

    printf("%d equivale a %.2f polegada(s)", num, pol);

    return 0;
}
