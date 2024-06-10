#include <stdio.h>

// Procedimento para imprimir a sequência de Fibonacci até o n-ésimo termo
void imprimirFibonacci(int n)
{
    int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Sequencia de Fibonacci ate o %d-esimo termo:\n", n);

    // Imprime os primeiros dois termos
    printf("%d\n%d\n", termo1, termo2);

    // Calcula e imprime os próximos termos
    for (int i = 2; i < n; i++)
    {
        proximoTermo = termo1 + termo2;
        printf("%d\n", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }
}

int main()
{
    int n;
    printf("Digite o valor de n para imprimir a sequencia de Fibonacci: ");
    scanf("%d", &n);

    imprimirFibonacci(n);

    return 0;
}
