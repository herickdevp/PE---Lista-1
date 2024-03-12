#include <stdio.h>
#include <math.h>

int main()
{
    float metros, litros, latas, temp;

    printf("Digite o tamanho em metro quadrados da area a ser pintada: ");
    scanf("%f", &metros);

    litros = metros / 3;
    latas = litros / 18;
    temp = latas < 1 ? 1 : ceil(latas);

    printf("Voce ira precisar de %.2f litro(s) de tinta\n", litros);
    printf("Sera necessario comprar %.0f lata(s) de tinta\n", temp);
    printf("Valor total das latas e igual a R$%.2f\n", temp * 80);

    return 0;
}