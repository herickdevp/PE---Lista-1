#include <stdio.h>

int main()
{
    float valor, hora, sb, ir, inss, sind, liquido;

    printf("Digite o valor que voce recebe por hora: ");
    scanf("%f", &valor);

    printf("Digite quatas hora voce trabalha no mes: ");
    scanf("%f", &hora);

    sb = valor * hora;
    ir = (sb / 100) * 11;
    inss = (sb / 100) * 8;
    sind = (sb / 100) * 5;
    liquido = sb - ir - inss - sind;

    printf("Salario bruto: %.2f\n", sb);
    printf("Desconto INSS: %.2f\n", inss);
    printf("Desconto sindicato: %.2f\n", sind);
    printf("Salario liquido: %.2f\n", liquido);

    return 0;
}
