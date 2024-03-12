#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;
    double d1;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &d1);

    printf("O produto do dobro do primeiro com metade do segundo: %.2f\n", (n1 * 2) * (n2 / 2));
    printf("A soma do triplo do primeiro com o terceiro: %.2f\n", (n1 * 3) + d1);
    printf("O terceiro elevado ao cubo: %.2lf\n", pow(d1, 3));

    return 0;
}
