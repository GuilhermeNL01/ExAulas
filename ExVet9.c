#include <stdio.h>

int main() {
    int vetor[6];

    // leitura dos valores do vetor
    for(int i = 0; i < 6; i++) {
        do {
            printf("Digite o valor par para a posição %d do vetor: ", i+1);
            scanf("%d", &vetor[i]);
        } while(vetor[i] % 2 != 0);
    }

    // exibição dos valores do vetor na ordem inversa
    printf("Valores digitados em ordem inversa: ");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
