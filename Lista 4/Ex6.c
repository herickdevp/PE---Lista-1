#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0, i;
    srand(time(NULL));

    while (i < 10)
    {
        num = rand() % 101;
        printf("%d ", num);
        i++;
    }

    return 0;
}