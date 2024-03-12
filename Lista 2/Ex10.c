#include <stdio.h>

int main()
{
    float vida, ataque, defesa, media;

    printf("Digite a vida do seu personagem: ");
    scanf("%f", &vida);

    printf("Digite o ataque do seu personagem: ");
    scanf("%f", &ataque);

    printf("Digite a defesa do seu personagem: ");
    scanf("%f", &defesa);

    media = (vida + ataque + defesa) / 3;

    if (media >= 0 && media <= 25)
    {
        printf("XP ( %.2F ) - NOVATO", media);
    }
    if (media >= 26 && media <= 50)
    {
        printf("XP ( %.2F ) - MAGO", media);
    }
    if (media >= 51 && media <= 75)
    {
        printf("XP ( %.2F ) - MAGO SUPREMO", media);
    }
    if (media >= 76 && media <= 100)
    {
        printf("XP ( %.2F ) - LORDE DAS MAGIAS", media);
    }

    return 0;
}