#include <stdio.h>

int main()
{
    float vitoriaAzul, derrotaAzul, empateAzul, totalJogos;

    printf(" - EQUIPE AZUL - \n");

    printf(" Digite a quantidade de VITORIAS da equipe AZUL: ");
    scanf("%f", &vitoriaAzul);
    printf(" Digite a quantidade de DERROTAS da equipe AZUL: ");
    scanf("%f", &derrotaAzul);
    printf(" Digite a quantidade de EMPATES da equipe AZUL: ");
    scanf("%f", &empateAzul);

    totalJogos = vitoriaAzul + derrotaAzul + empateAzul;

    printf("\nRESULTADO EQUIPE AZUL\n");
    printf("\nVitorias: %.0f - %.0f%%", vitoriaAzul, (vitoriaAzul / totalJogos) * 100);
    printf("\nDerrotas: %.0f - %.0f%%", derrotaAzul, (derrotaAzul / totalJogos) * 100);
    printf("\nEmpates: %.0f - %.0f%%", empateAzul, (empateAzul / totalJogos) * 100);

    return 0;
}