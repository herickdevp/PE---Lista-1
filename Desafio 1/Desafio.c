#include <stdio.h>

int main()
{
    double velocidadeLuz = 299792458;
    float km;
    float metros;
    float horas;
    float minutos;
    float segundos;

    printf("Insira a distancia entre os planetas em KM: ");
    scanf("%f", &km);

    metros = km * 1000;
    segundos = metros / velocidadeLuz;
    minutos = segundos / 60;
    horas = minutos / 60;

    printf("A distancia e de %f metros\n", metros);
    printf("O tempo gasto e de %f horas\n", horas);
    printf("O tempo gasto e de %f minutos\n", minutos);
    printf("O tempo gasto e de %f segundos", segundos);

    return 0;
}
