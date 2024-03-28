#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0, i, j, jogo;
    int bilhete[6];
    int min = 1;
    int max = 60;

    srand(time(NULL));

    while (jogo != 0)
    {
        for (i = 0; i < 6; i++)
        {
            bilhete[i] = 0;
        }

        for (i = 0; i < 6; i++)
        {
            do
            {
                num = min + rand() % (max - min + 1);
                for (j = 0; j < i; j++)
                {
                    if (bilhete[j] == num)
                    {
                        num = 0;
                        break;
                    }
                }
            } while (num == 0);
            bilhete[i] = num;
        }

        printf("Bilhete da Mega-Sena: ");
        for (i = 0; i < 6; i++)
        {
            printf("%d ", bilhete[i]);
        }

        printf("\nGERAR NOVO BILHETE\n1 - SIM\n0 - NAO\n");
        scanf("%d", &jogo);
    }

    return 0;
}