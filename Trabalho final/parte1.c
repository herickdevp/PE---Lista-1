#include <stdio.h>
#include <time.h>

void imgCinza(void);

void imgVertical(void);

void imgHorinzontal(void);

void imgDivididaH(void);

void imgDivididaV(void);

int main()
{

    int opcao;

    while (opcao != 0)
    {
        printf("--------------------------------------------------\n");
        printf("Digite a opção desejada!\n");
        printf("1 - Arara Cinza\n");
        printf("2 - Arara Horizontal\n");
        printf("3 - Arara Vertical\n");
        printf("4 - Arara Dividida Horizontalmente\n");
        printf("5 - Arara Dividida Verticalmente\n");
        printf("0 - Sair\n");
        printf("--------------------------------------------------\n\n");

        printf("Digite a opcao:  ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("\n--------------------------------------------------\n");
            printf("ARARA CINZA\n\n");
            imgCinza();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 2:
            printf("\n--------------------------------------------------\n");
            printf("ARARA HORIZONTAL\n\n");
            imgHorinzontal();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 3:
            printf("\n--------------------------------------------------\n");
            printf("ARARA VERTICAL\n\n");
            imgVertical();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 4:
            printf("\n--------------------------------------------------\n");
            printf("ARARA DIVIDIDA HORIZONTALMENTE\n\n");
            imgDivididaH();
            printf("\n--------------------------------------------------\n");
            printf("\n\n\n");
            break;

        case 5:
            printf("\n--------------------------------------------------\n");
            printf("ARARA DIVIDIDA VERTICALMENTE\n\n");
            imgDivididaV();
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

void imgCinza(void)
{
    int largura, altura, valor_maximo;
    char buffer[255];

    FILE *arquivo;
    FILE *saida;

    arquivo = fopen("arara.ppm", "r");
    saida = fopen("araracinza.ppm", "w");

    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }
    else
    {
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

        fclose(arquivo);
        fclose(saida);
    }
    return;
}

void imgHorinzontal(void)
{
    FILE *entrada;
    FILE *saida;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraHorizontal.ppm", "w");

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

void imgVertical(void)
{
    FILE *entrada;
    FILE *saida;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraVertical.ppm", "w");

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

        for (int i = 0; i < largura; i++)
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

void imgDivididaH(void)
{
    FILE *entrada;
    FILE *saida;
    FILE *saida2;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraDivididaHE.ppm", "w");
    saida2 = fopen("araraDivididaHD.ppm", "w");

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
        fprintf(saida, "%d %d\n", (largura / 2), altura);
        fprintf(saida, "%d\n", v_max);

        fprintf(saida2, "P3\n");
        fprintf(saida2, "# Criado por Nadir\n");
        fprintf(saida2, "%d %d\n", (largura / 2), altura);
        fprintf(saida2, "%d\n", v_max);

        // Metade esquerda
        for (i = 0; i < altura; i++)
        {
            for (j = 0; j < largura / 2; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida, "%d ", matriz[i][j][k]);
                }
            }
        }

        // Metade direita
        for (i = 0; i < altura; i++)
        {
            for (j = largura / 2; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida2, "%d ", matriz[i][j][k]);
                }
            }
            fprintf(saida2, "\n");
        }
        fclose(entrada);
        fclose(saida);
        fclose(saida2);
    }
    return;
}

void imgDivididaV(void)
{
    FILE *entrada;
    FILE *saida;
    FILE *saida2;

    entrada = fopen("arara.ppm", "r");
    saida = fopen("araraDivididaVC.ppm", "w");
    saida2 = fopen("araraDivididaVB.ppm", "w");

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
        fprintf(saida, "%d %d\n", largura, (altura / 2));
        fprintf(saida, "%d\n", v_max);

        fprintf(saida2, "P3\n");
        fprintf(saida2, "# Criado por Nadir\n");
        fprintf(saida2, "%d %d\n", largura, (altura / 2));
        fprintf(saida2, "%d\n", v_max);

        // Metade esquerda
        for (i = 0; i < altura / 2; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida, "%d ", matriz[i][j][k]);
                }
            }
        }

        // Metade direita
        for (i = altura / 2; i < altura; i++)
        {
            for (j = 0; j < largura; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    fprintf(saida2, "%d ", matriz[i][j][k]);
                }
            }
            fprintf(saida2, "\n");
        }
        fclose(entrada);
        fclose(saida);
        fclose(saida2);
    }
    return;
}