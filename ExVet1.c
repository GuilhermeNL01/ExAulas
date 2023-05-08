#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7}; // (a) atribuição de valores ao vetor A
    
    int soma = A[0] + A[1] + A[5]; // (b) soma dos valores das posições 0, 1 e 5
    printf("Soma: %d\n", soma); // exibição da soma na tela
    
    A[4] = 100; // (c) atribuição do valor 100 à posição 4
    
    printf("Vetor A:\n"); // (d) exibição dos valores do vetor A
    for(int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    
    return 0;
}
