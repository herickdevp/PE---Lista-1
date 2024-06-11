#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float e = 2.71828;

int dragrau(double x)
{
    return ((x >= 0) ? 1 : 0);
}

double sigmoide(double x)
{
    return (1 / (1 + pow(e, -x)));
}
double hiperbolica(double x)
{
    return (pow(e, x) - pow(e, -x)) / (pow(e, x) + pow(e, -x));
}
double linear(double x)
{
    return x / (1 + pow(e, -x));
}

double gaussiana(double x)
{
    return pow(e, -x * x);
}

int main()
{

    double x;

    printf("Entre com o valor de X: ");
    scanf("%lf", &x);

    printf("Degrau: %d\n", dragrau(x));
    printf("Logista(Sigmoide): %lf\n", sigmoide(x));
    printf("Tangente Hiperbolica: %lf\n", hiperbolica(x));
    printf("Sigmoide Linear: %lf\n", linear(x));
    printf("Gaussiana: %lf\n", gaussiana(x));

    return 0;
}
