#include <stdio.h>

void intToRoman(int num, char *buffer)
{
    const char *thousands[] = {"", "M", "MM", "MMM"};
    const char *hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    strcat(buffer, thousands[num / 1000]);
    strcat(buffer, hundreds[(num % 1000) / 100]);
    strcat(buffer, tens[(num % 100) / 10]);
    strcat(buffer, ones[num % 10]);
}

int main()
{
    FILE *file;
    file = fopen("numeros_romanos.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char buffer[20];
    for (int i = 1; i <= 50; i++)
    {
        buffer[0] = '\0';
        intToRoman(i, buffer);
        fprintf(file, "%d :: %s\n", i, buffer);
    }

    fclose(file);
    return 0;
}
