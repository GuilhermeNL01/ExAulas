#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20];
    int i, j;
    
    // lê os valores do primeiro vetor
    printf("Digite os valores do primeiro vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }
    
    // lê os valores do segundo vetor
    printf("\nDigite os valores do segundo vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    
    // calcula o terceiro vetor
    j = 0;
    for(i = 0; i < 10; i++) {
        vetor3[j] = vetor1[i]; // posição par
        j++;
        vetor3[j] = vetor2[i]; // posição ímpar
        j++;
    }
    
    // imprime o terceiro vetor
    printf("\nTerceiro vetor:\n");
    for(i = 0; i < 20; i++) {
        printf("Vetor3[%d]: %d\n", i, vetor3[i]);
    }
    
    return 0;
}
