#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imgColorida(void);

void img90Direita(void);

void img90Esquerda(void);

void imgCinza(void);

void imgRGB(void);

int main()
{

    int opcao;

    while (opcao != 0)
    {
        printf("--------------------------------------------------\n");
        printf("Digite a opção desejada!\n");
        printf("1 - Imagem Colorida\n");
        printf("2 - Imagem 90° para a direita\n");
        printf("3 - Imagem 90° para a esquerda\n");
        printf("4 - Imagem Parcialmente Cinza\n");
        printf("5 - imagem Dividida (R G B)\n");
        printf("0 - Sair\n");
        printf("--------------------------------------------------\n\n");

        printf("Digite a opcao:  ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("\n--------------------------------------------------\n");
            printf("Imagem Colorida\n\n");
            imgColorida();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 2:
            printf("\n--------------------------------------------------\n");
            printf("Imagem 90° para a direita\n\n");
            img90Direita();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 3:
            printf("\n--------------------------------------------------\n");
            printf("Imagem 90° para a esquerda\n\n");
            img90Esquerda();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 4:
            printf("\n--------------------------------------------------\n");
            printf("Imagem Parcialmente Cinza\n\n");
            imgCinza();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 5:
            printf("\n--------------------------------------------------\n");
            printf("imagem Dividida (R G B)\n\n");
            imgRGB();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 0:
            printf("Obrigado por testar nossos exercicios!\n");
            break;

        default:
            printf("Opcao invalida!\n\n");
            break;
        }
    }
    return 0;
}

void imgColorida(void)
{
    int largura, altura, valor_maximo;
    char buffer[255];

    FILE *arquivo;
    FILE *arquivo2;
    FILE *saida;
    FILE *saida2;

    arquivo = fopen("arara.ppm", "r");
    saida = fopen("araraCinza.ppm", "w");

    arquivo2 = fopen("araraCinza.ppm", "r");
    saida2 = fopen("araraColorida.ppm", "w");

    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }
    else
    {
        srand(time(NULL));
        printf("Arquivo aberto com sucesso.\n");
        // Leitura do arquivo de entrada
        fgets(buffer, 255, arquivo); // Lê a primeira linha do arquivo
        printf("%s", buffer);
        fgets(buffer, 255, arquivo); // Lê a segunda linha do arquivo
        printf("%s", buffer);
        fscanf(arquivo, "%d %d", &largura, &altura); // Lê a terceira linha do arquivo
        printf("Largura: %d\nAltura: %d\n", largura, altura);
        int matriz[largura][altura][3];
        fscanf(arquivo, "%d", &valor_maximo); // Lê a quarta linha do arquivo
        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    fscanf(arquivo, "%d", &matriz[i][j][k]);
                }
            }
        }

        // Escrever a arara cinza em formato PPM P3
        int pixel;
        int soma = 0;
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por Nadir\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "255\n");
        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    soma += matriz[i][j][k];
                }
                pixel = soma / 3;
                fprintf(saida, "%d %d %d ", pixel, pixel, pixel);
                soma = 0;
            }
        }

        fgets(buffer, 255, arquivo2); // Lê a primeira linha do arquivo
        printf("%s", buffer);
        fgets(buffer, 255, arquivo2); // Lê a segunda linha do arquivo
        printf("%s", buffer);
        fscanf(arquivo2, "%d %d", &largura, &altura); // Lê a terceira linha do arquivo
        printf("Largura: %d\nAltura: %d\n", largura, altura);
        int matriz2[largura][altura][3];
        fscanf(arquivo2, "%d", &valor_maximo); // Lê a quarta linha do arquivo
        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    fscanf(arquivo2, "%d", &matriz2[i][j][k]);
                }
            }
        }
        int cores[6][3];
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cores[i][j] = rand() % (valor_maximo + 1);
            }
        }

        fprintf(saida2, "P3\n");
        fprintf(saida2, "# Criado por Nadir\n");
        fprintf(saida2, "%d %d\n", largura, altura);
        fprintf(saida2, "255\n");
        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    int indiceCor = rand() % 6;
                    fprintf(saida2, "%d %d %d ", cores[indiceCor][0], cores[indiceCor][1], cores[indiceCor][2]);
                }
            }
        }

        fclose(arquivo);
        fclose(saida);
        fclose(arquivo2);
        fclose(saida2);
    }
    return;
}

void img90Direita(void)
{
    FILE *entrada;
    FILE *saida;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("arara90Direita.ppm", "w");

    int i, j, k;
    int largura, altura, v_max;
    char buffer[255];

    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        printf("Arquivo aberto com sucesso.\n");
        // Leitura do arquivo de entrada
        fgets(buffer, 255, entrada);                 // P3
        fgets(buffer, 255, entrada);                 // Comentários
        fscanf(entrada, "%d %d", &largura, &altura); // Largura Altura
        fscanf(entrada, "%d", &v_max);               // Valor maximo
        int matriz[altura][largura][3];
        for (i = 0; i < altura; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fscanf(entrada, "%d", &matriz[i][j][k]);
                }
            }
        }

        // Escrita do arquivo de saída
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por Nadir\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "%d\n", v_max);

        for (j = 0; j < largura; j++)
        {
            for (i = (altura - 1); i >= 0; i--)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida, "%d ", matriz[i][j][k]);
                }
            }
        }
        fclose(entrada);
        fclose(saida);
    }
    return;
}

void img90Esquerda(void)
{
    FILE *entrada;
    FILE *saida;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("arara90Esquerda.ppm", "w");

    int i, j, k;
    int largura, altura, v_max;
    char buffer[255];

    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        printf("Arquivo aberto com sucesso.\n");
        // Leitura do arquivo de entrada
        fgets(buffer, 255, entrada);                 // P3
        fgets(buffer, 255, entrada);                 // Comentários
        fscanf(entrada, "%d %d", &largura, &altura); // Largura Altura
        fscanf(entrada, "%d", &v_max);               // Valor maximo
        int matriz[altura][largura][3];
        for (i = 0; i < altura; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fscanf(entrada, "%d", &matriz[i][j][k]);
                }
            }
        }

        // Escrita do arquivo de saída
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por Nadir\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "%d\n", v_max);

        for (i = (altura - 1); i >= 0; i--)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida, "%d ", matriz[j][i][k]);
                }
            }
        }
        fclose(entrada);
        fclose(saida);
    }
    return;
}

void imgCinza(void)
{
    FILE *entrada;
    FILE *saida;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraMetadeCinza.ppm", "w");

    int i, j, k;
    int largura, altura, v_max;
    char buffer[255];

    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        printf("Arquivo aberto com sucesso.\n");
        // Leitura do arquivo de entrada
        fgets(buffer, 255, entrada);                 // P3
        fgets(buffer, 255, entrada);                 // Comentários
        fscanf(entrada, "%d %d", &largura, &altura); // Largura Altura
        fscanf(entrada, "%d", &v_max);               // Valor maximo
        int matriz[altura][largura][3];
        for (i = 0; i < altura; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fscanf(entrada, "%d", &matriz[i][j][k]);
                }
            }
        }

        // Escrita do arquivo de saída
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por Nadir\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "%d\n", v_max);

        // Metade esquerda
        int pixel;
        int soma = 0;
        for (i = 0; i < altura / 2; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    soma += matriz[i][j][k];
                }
                pixel = soma / 3;
                fprintf(saida, "%d %d %d ", pixel, pixel, pixel);
                soma = 0;
            }
        }

        // Metade direita
        for (i = altura / 2; i < altura; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida, "%d ", matriz[i][j][k]);
                }
            }
        }
        fclose(entrada);
        fclose(saida);
    }
    return;
}

void imgRGB(void)
{
    FILE *entrada;
    FILE *saida;
    FILE *saida2;
    FILE *saida3;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraDivididaR.ppm", "w");
    saida2 = fopen("araraDivididaG.ppm", "w");
    saida3 = fopen("araraDivididaB.ppm", "w");

    int largura, altura, v_max;
    char buffer[255];

    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        printf("Arquivo aberto com sucesso.\n");
        // Leitura do arquivo de entrada
        fgets(buffer, 255, entrada);                 // P3
        fgets(buffer, 255, entrada);                 // Comentários
        fscanf(entrada, "%d %d", &largura, &altura); // Largura Altura
        fscanf(entrada, "%d", &v_max);               // Valor maximo
        int matriz[altura][largura][3];
        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    fscanf(entrada, "%d", &matriz[i][j][k]);
                }
            }
        }

        // Escrita do arquivo de saída
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por Nadir\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "%d\n", v_max);

        fprintf(saida2, "P3\n");
        fprintf(saida2, "# Criado por Nadir\n");
        fprintf(saida2, "%d %d\n", largura, altura);
        fprintf(saida2, "%d\n", v_max);

        fprintf(saida3, "P3\n");
        fprintf(saida3, "# Criado por Nadir\n");
        fprintf(saida3, "%d %d\n", largura, altura);
        fprintf(saida3, "%d\n", v_max);

        for (int i = 0; i < largura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (k == 0)
                    {
                        fprintf(saida, "%d ", matriz[i][j][k]);
                        fprintf(saida2, "%d ", 0);
                        fprintf(saida3, "%d ", 0);
                    }
                    else if (k == 1)
                    {
                        fprintf(saida, "%d ", 0);
                        fprintf(saida2, "%d ", matriz[i][j][k]);
                        fprintf(saida3, "%d ", 0);
                    }
                    else
                    {
                        fprintf(saida, "%d ", 0);
                        fprintf(saida2, "%d ", 0);
                        fprintf(saida3, "%d ", matriz[i][j][k]);
                    }
                }
            }
        }

        fclose(entrada);
        fclose(saida);
        fclose(saida2);
        fclose(saida3);
    }
    return;
}
