#include<stdio.h>

int main()
{

    float m;

   printf("Digite o valor em metros para ser convertido em centimentros: ");
   scanf("%f", &m);

   printf("%.2f metro(s) equivale a %.2f centimetros", m, m*100);

    return 0;
}
