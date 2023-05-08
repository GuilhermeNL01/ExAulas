#include <stdio.h>

int main() {
    int numeros[10];
    int impares[10];
    int i, j = 0;

    // leitura dos números e preenchimento do vetor numeros
    printf("Digite 10 números inteiros entre 0 e 50:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // preenchimento do vetor impares com os números ímpares do vetor numeros
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            impares[j] = numeros[i];
            j++;
        }
    }

    // impressão dos vetores
    printf("\nVetor numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", numeros[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor impares:\n");
    for (i = 0; i < j; i++) {
        printf("%2d ", impares[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
