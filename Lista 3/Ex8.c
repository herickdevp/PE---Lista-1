#include <stdio.h>

int main()
{
    int i, j;

    // Loop externo para as tabuadas de 0 a 9
    for (i = 0; i <= 9; i++)
    {
        printf("Tabuada do %d:\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
