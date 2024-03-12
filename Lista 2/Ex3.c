#include <stdio.h>

int main()
{
    float temp, fht;

    printf("Digite um temperatura em Celsius para ser convertida em Farenheit: ");
    scanf("%f", &temp);

    fht = temp * 1.8 + 32;

    printf("%.2f celsius equivale a %.2f Farenheit", temp, fht);

    return 0;
}
