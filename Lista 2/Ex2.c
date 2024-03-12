#include <stdio.h>

int main()
{
    float raio, p, area;

    printf("Digite o raio para calcular o perimetro e sua area: ");
    scanf("%f", &raio);

    p = 2 * 3.14 * raio;
    area = 3.14 * raio * raio;

    printf("O perimetro é %.2f e Area é de %.2f", p, area);

    return 0;
}
