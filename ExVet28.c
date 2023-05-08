#include <stdio.h>

#define TAM 10

int main() {
    int vet[TAM], v1[TAM], v2[TAM];
    int i, j = 0, k = 0;

    // Leitura dos valores para o vetor
    printf("Digite %d numeros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }

    // Copia dos valores para v1 e v2
    for (i = 0; i < TAM; i++) {
        if (vet[i] % 2 == 0) {
            v2[k] = vet[i];
            k++;
        } else {
            v1[j] = vet[i];
            j++;
        }
    }

    // Impressão dos valores utilizados em v1
    printf("Valores utilizados em v1: ");
    for (i = 0; i < j; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Impressão dos valores utilizados em v2
    printf("Valores utilizados em v2: ");
    for (i = 0; i < k; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
