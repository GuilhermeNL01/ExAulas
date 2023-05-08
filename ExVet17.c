#include <stdio.h>

int main() {
    int vetor[10];
    
    // lendo o vetor
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    // atribuindo valor 0 para elementos negativos
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    
    // exibindo o vetor modificado
    printf("\nVetor modificado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
