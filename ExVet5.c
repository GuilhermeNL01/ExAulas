#include <stdio.h>

int main() {
    int vetor[10]; // criação do vetor com 10 posições
    int qtd_pares = 0; // variável para armazenar a quantidade de pares

    // leitura dos valores do vetor
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);

        // verifica se o valor é par
        if(vetor[i] % 2 == 0) {
            qtd_pares++;
        }
    }

    // exibe a quantidade de pares
    printf("O vetor possui %d valores pares.\n", qtd_pares);

    return 0;
}
