#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void listarPokemon()
{
    FILE *pokemon;
    char c;

    pokemon = fopen("pokemon.txt", "r");

    c = fgetc(pokemon);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(pokemon);
    }

    fclose(pokemon);
}

void contarPokemon()
{
    FILE *pokemon;
    char c;
    int cont = 0;

    pokemon = fopen("pokemon.txt", "r");

    while (c != EOF)
    {
        c = fgetc(pokemon);
        if (c == '\n')
        {
            cont++;
            c = fgetc(pokemon);
        }
    }
    fclose(pokemon);
    printf("O numero de pokemons é: %d", cont);
}

void letraPokemon()
{
    FILE *pokemon;
    char c, letra;
    int cont = 0;

    pokemon = fopen("pokemon.txt", "r");

    printf("Digite a letra: ");
    scanf(" %c", &letra);

    while (c != EOF)
    {
        c = fgetc(pokemon);
        if (c == toupper(letra))
        {
            cont++;
            while (c != '\n')
            {
                printf("%c", c);
                c = fgetc(pokemon);
            }
            printf("\n");
        }
    }
    fclose(pokemon);
    printf("O numero de pokemons que comecam com a letra %c, e: %d", letra, cont);
}

void alfabetoPokemon(char letra)
{
    FILE *pokemon;
    char c;
    int cont = 0;

    pokemon = fopen("pokemon.txt", "r");
    if (pokemon == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((c = fgetc(pokemon)) != EOF)
    {
        if (c == toupper(letra))
        {
            cont++;
        }
    }
    fclose(pokemon);
    printf("%c: %d\n", toupper(letra), cont);
}

void alfa()
{
    for (char letra = 'a'; letra <= 'z'; letra++)
    {
        alfabetoPokemon(letra);
    }
}

int main()
{

    int opcao;

    printf("------- MENU -------\n");
    printf("1 - Imprimir dados do arquivo: \n");
    printf("2 - Mostrar numero de linhas que tem o arquivo: \n");
    printf("3 - Digite uma letra, sera exibido todos os pokemons que começam com essa letra: \n");
    printf("4 - Exibir a quantidade de pokemons com cada letra do alfabeto: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        listarPokemon();
        break;
    case 2:
        contarPokemon();
        break;
    case 3:
        letraPokemon();
        break;
    case 4:
        alfa();
        break;

    default:
        break;
    }

    return 0;
}