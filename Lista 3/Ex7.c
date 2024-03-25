#include <stdio.h>

int main()
{
    int num;

    for (num = 0; num <= 100; num++)
    {
        if (num % 4 == 0)
        {
            printf("plim");
        }
        else
        {
            printf("%d", num);
        }
        if (num != 100)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
