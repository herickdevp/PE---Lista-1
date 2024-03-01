#include<stdio.h>

int main()
{

    int n1;
    int n2;

   printf("Sera necessario digitar dois numeros\n");
   printf("Digite o primeiro: ");
   scanf("%d", &n1);

   printf("\nDigite o segundo: ");
   scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);

    return 0;
}
