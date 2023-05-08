#include <stdio.h>

int main() {
    int vetor[10];
    int maior = vetor[0];
    int posicao = 0;

    // leitura dos valores do vetor
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);

        // verifica se o valor lido é maior que o maior valor armazenado até então
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O vetor digitado é: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior valor é %d e está na posição %d do vetor.\n", maior, posicao+1);

    return 0;
}
