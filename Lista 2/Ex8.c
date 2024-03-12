#include <stdio.h>
#include <math.h>

int main()
{
    float mb, velocidade, tempo, megabits;

    printf("Digite o tamanho do arquivo a ser baixado em MB: ");
    scanf("%f", &mb);

    printf("Digite a velocidade em MB de seu link de internet: ");
    scanf("%f", &velocidade);

    // conveter em megabits
    megabits = mb * 8;
    tempo = megabits / velocidade;

    printf("Tempo de download %.2f minuto(s)\n", tempo / 60);

    return 0;
}