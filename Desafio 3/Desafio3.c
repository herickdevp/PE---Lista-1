#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, total_recursos = 0;
    printf("Digite o tamanho do terreno (N): ");
    scanf("%d", &N);

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int recurso = rand() % 10;
            if (recurso > 0)
            {
                printf("%d ", recurso);
                total_recursos += recurso;
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }

    if (total_recursos > 0)
    {
        printf("%d recursos coletados.\n", total_recursos);
    }
    else
    {
        printf("Nenhum recurso encontrado.\n");
    }

    return 0;
}
