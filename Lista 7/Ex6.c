#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decompor_numero(int numero)
{
    int unidade = numero % 10;
    int dezena = (numero / 10) % 10 * 10;
    int centena = (numero / 100) % 10 * 100;
    int milhar = (numero / 1000) * 1000;

    printf("Numero: %d\n", numero);
    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    printf("Milhar: %d\n", milhar);
}

int main()
{
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1000 e 9999
    int numero = 1000 + rand() % 9000;

    // Chama a função para decompor o número
    decompor_numero(numero);

    return 0;
}
