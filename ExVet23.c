#include <stdio.h>

#define TAM 5

int main() {
    float vetor1[TAM], vetor2[TAM], produto_escalar = 0;

    // Leitura do primeiro vetor
    printf("Digite %d valores para o primeiro vetor:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%f", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("Digite %d valores para o segundo vetor:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%f", &vetor2[i]);
    }

    // Cálculo do produto escalar
    for(int i = 0; i < TAM; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    // Impressão dos vetores e do produto escalar
    printf("Vetor 1: ");
    for(int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for(int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2f\n", produto_escalar);

    return 0;
}
