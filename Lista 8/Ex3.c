#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("numeros_informacoes.txt", "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int num;
    while (1)
    {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
        if (num == 0)
            break;

        fprintf(file, "%d -> %s %s\n",
                num,
                num > 0 ? "positivo" : "negativo",
                num % 2 == 0 ? "par" : "ímpar");
    }

    fclose(file);
    return 0;
}
