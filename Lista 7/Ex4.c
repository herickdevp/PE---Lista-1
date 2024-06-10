#include <stdio.h>

void imprimir_numeros(int num)
{
    int impares[5];
    int pares[5];
    int i;

    // Encontrar os cinco números ímpares imediatamente abaixo
    for (i = 0; i < 5; i++)
    {
        num -= 1;
        if (num % 2 == 0)
        {
            num -= 1;
        }
        impares[4 - i] = num;
    }

    // Encontrar os cinco números pares imediatamente acima
    num += 6; // Ajustar o valor inicial para continuar de onde parou
    for (i = 0; i < 5; i++)
    {
        if (num % 2 != 0)
        {
            num += 1;
        }
        pares[i] = num;
        num += 2;
    }

    // Imprimir os números ímpares
    printf("Numeros impares imediatamente abaixo:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", impares[i]);
    }

    // Imprimir o número original
    printf("%d ", num - 6);

    // Imprimir os números pares
    printf("\nNumeros pares imediatamente acima:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", pares[i]);
    }

    printf("\n");
}

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    imprimir_numeros(valor);

    return 0;
}
