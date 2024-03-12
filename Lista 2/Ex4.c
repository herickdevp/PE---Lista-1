#include <stdio.h>

int main()
{
    float temp, cels;

    printf("Digite um temperatura em Celsius para ser convertida em Farenheit: ");
    scanf("%f", &temp);

    cels = (temp - 32) / 1.8;

    printf("%.2f Farenheit equivale a %.2f celsius", temp, cels);

    return 0;
}
