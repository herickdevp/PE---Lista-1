#include <stdio.h>
#include <math.h>

// Função para calcular a norma do vetor (|v|)
double calcularNorma(int x, int y)
{
    return sqrt(x * x + y * y);
}

int main()
{
    int x, y;
    printf("Digite os valores de x e y do vetor: ");
    scanf("%d %d", &x, &y);

    double norma = calcularNorma(x, y);
    printf("A norma do vetor (%d, %d) é %.2lf\n", x, y, norma);

    return 0;
}
