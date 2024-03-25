#include <stdio.h>

int main() {
    int num;

    printf("Numeros multiplos de 4 entre 100 e 300 em ordem decrescente:\n");
    

    for (num = 300; num >= 100; num--) {
        // Verifica se o número é múltiplo de 4
        if (num % 4 == 0) {
            // Imprime o número múltiplo de 4
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
