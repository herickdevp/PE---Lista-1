#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehBissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano)
{
    switch (mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return ehBissexto(ano) ? 29 : 28;
    default:
        return 31;
    }
}

int main()
{
    srand(time(NULL));

    int ano = rand() % 25 + 2000;
    int mes = rand() % 12 + 1;
    int max_dias = diasNoMes(mes, ano);
    int dia = rand() % max_dias + 1;

    printf("Data aleatoria: %02d/%02d/%d\n", dia, mes, ano);

    return 0;
}
