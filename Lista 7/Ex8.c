#include <stdio.h>

// Função para calcular o fatorial
long int fatorial(int numero)
{
    if (numero == 0 || numero == 1)
        return 1;
    else
    {
        long int resultado = 1;
        for (int i = 1; i <= numero; i++)
        {
            resultado *= i;
        }
        return resultado;
    }
}

// Função para calcular o número de Euler (e)
void calcular_euler()
{
    printf("n\tEuler (e)\n");

    double e = 0;
    for (int n = 0; n <= 20; n++)
    {
        e += 1.0 / fatorial(n);
        printf("%d\t%.16lf\n", n, e);
    }
}

int main()
{
    // Calcula e exibe o fatorial de um número inteiro
    int numero;
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);
    printf("O fatorial de %d é %ld\n", numero, fatorial(numero));

    // Calcula e exibe o número de Euler (e) de 0 até 20
    printf("\nCalculando o numero de Euler (e) de 0 até 20:\n");
    calcular_euler();

    return 0;
}
