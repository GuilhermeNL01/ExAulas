#include <stdio.h>

#define TAM 5

int main() {
    float vetor[TAM];
    int codigo, i;

    // leitura dos valores do vetor
    for (i = 0; i < TAM; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }

    // leitura do código e execução correspondente
    printf("\nDigite um codigo (0 para sair, 1 para mostrar o vetor na ordem direta, 2 para mostrar o vetor na ordem inversa): ");
    scanf("%d", &codigo);
    while (codigo != 0) {
        switch (codigo) {
            case 1:
                printf("\nVetor na ordem direta: ");
                for (i = 0; i < TAM; i++) {
                    printf("%.2f ", vetor[i]);
                }
                break;
            case 2:
                printf("\nVetor na ordem inversa: ");
                for (i = TAM - 1; i >= 0; i--) {
                    printf("%.2f ", vetor[i]);
                }
                break;
            default:
                printf("\nCodigo invalido!");
        }
        printf("\n\nDigite um codigo (0 para sair, 1 para mostrar o vetor na ordem direta, 2 para mostrar o vetor na ordem inversa): ");
        scanf("%d", &codigo);
    }

    printf("\nPrograma finalizado!");

    return 0;
}
