#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CHARACTERS 100

void generatePassword(char *password, int length, int useUpper, int useLower, int useSpecial, int useNumbers)
{
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char special[] = "%$#@&";
    char numbers[] = "0123456789";

    char allCharacters[MAX_CHARACTERS] = "";

    if (useUpper)
    {
        strcat(allCharacters, upper);
    }
    if (useLower)
    {
        strcat(allCharacters, lower);
    }
    if (useSpecial)
    {
        strcat(allCharacters, special);
    }
    if (useNumbers)
    {
        strcat(allCharacters, numbers);
    }

    int totalCharacters = strlen(allCharacters);

    for (int i = 0; i < length; i++)
    {
        password[i] = allCharacters[rand() % totalCharacters];
    }
    password[length] = '\0';
}

int main()
{
    srand(time(NULL));

    int numPasswords, minLength, maxLength, useUpper, useLower, useSpecial, useNumbers;

    printf(">>>> Gerador de senhas aleatorias <<<<\n");
    printf("Informe a quantidade de senhas: ");
    scanf("%d", &numPasswords);
    printf("Informe a quantidade minima de caracteres das senhas: ");
    scanf("%d", &minLength);
    printf("Informe a quantidade maxima de caracteres das senhas: ");
    scanf("%d", &maxLength);
    printf("As senhas terao letras maiusculas? (1 para sim, 0 para não): ");
    scanf("%d", &useUpper);
    printf("As senhas terao letras minusculas? (1 para sim, 0 para não): ");
    scanf("%d", &useLower);
    printf("As senhas terao caracteres especiais? (1 para sim, 0 para não): ");
    scanf("%d", &useSpecial);
    printf("As senhas terao numeros? (1 para sim, 0 para não): ");
    scanf("%d", &useNumbers);

    FILE *file = fopen("senhas.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < numPasswords; i++)
    {
        int length = minLength + rand() % (maxLength - minLength + 1);
        char password[MAX_CHARACTERS];
        generatePassword(password, length, useUpper, useLower, useSpecial, useNumbers);
        fprintf(file, "%s\n", password);
    }

    fclose(file);

    printf("Gerando senhas...\n");
    printf("Gravando senhas em um arquivo de texto ‘senhas.txt’\n");

    return 0;
}
