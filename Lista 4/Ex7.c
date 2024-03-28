#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0, i = 0;
    int min = 100;
    int max = 999;

    srand(time(NULL));

    while (i < 3)
    {
        num = min + rand() % (max - min + 1);

        if (num % 5 == 0)
        {
            printf("%d ", num);
            i++;
        }
    }

    return 0;
}