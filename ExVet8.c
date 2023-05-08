#include <stdio.h>

int main() {
    int vetor[6];

    // leitura dos valores do vetor
    for(int i = 0; i < 6; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores digitados em ordem inversa: ");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
