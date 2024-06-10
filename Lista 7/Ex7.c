#include <stdio.h>

// Função que calcula o fatorial de um número inteiro
unsigned long long fatorial(int n)
{
    // Inicializa a variável resultado como 1
    unsigned long long resultado = 1;

    // Calcula o fatorial de n
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }

    return resultado;
}

int main()
{
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é não-negativo
    if (numero < 0)
    {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    }
    else
    {
        // Chama a função fatorial e imprime o resultado
        unsigned long long resultado = fatorial(numero);
        printf("%d! = %llu\n", numero, resultado);
    }

    return 0;
}
