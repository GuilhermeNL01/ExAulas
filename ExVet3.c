#include <stdio.h>
#include <math.h>

int main() {
    float numeros[10]; // criação do vetor para armazenar os números reais
    float quadrados[10]; // criação do vetor para armazenar os quadrados

    // leitura dos números reais
    for(int i = 0; i < 10; i++) {
        printf("Digite o número real %d: ", i+1);
        scanf("%f", &numeros[i]);
    }

    // cálculo dos quadrados
    for(int i = 0; i < 10; i++) {
        quadrados[i] = pow(numeros[i], 2);
    }

    // exibição dos conjuntos
    printf("Números reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("%f ", numeros[i]);
    }
    printf("\n");

    printf("Quadrados:\n");
    for(int i = 0; i < 10; i++) {
        printf("%f ", quadrados[i]);
    }
    printf("\n");

    return 0;
}
