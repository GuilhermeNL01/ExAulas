#include <stdio.h>

int main() {
    int vetor[8]; // criação do vetor com 8 posições
    int x, y; // criação das variáveis para armazenar as posições X e Y
    int soma; // criação da variável para armazenar a soma

    // leitura dos valores do vetor
    for(int i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // leitura das posições X e Y
    printf("Digite a posição X (entre 1 e 8): ");
    scanf("%d", &x);
    printf("Digite a posição Y (entre 1 e 8): ");
    scanf("%d", &y);

    // cálculo da soma
    soma = vetor[x-1] + vetor[y-1];

    // exibição da soma
    printf("A soma dos valores nas posições %d e %d do vetor é: %d\n", x, y, soma);

    return 0;
}
