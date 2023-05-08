#include <stdio.h>

int main() {
    int vetor[10];
    int maior, menor;

    // leitura dos valores do vetor
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);

        // se for a primeira posição, define maior e menor com o valor lido
        if(i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        }
        else {
            // verifica se o valor lido é maior que o maior valor armazenado
            if(vetor[i] > maior) {
                maior = vetor[i];
            }

            // verifica se o valor lido é menor que o menor valor armazenado
            if(vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    printf("O maior valor do vetor é %d.\n", maior);
    printf("O menor valor do vetor é %d.\n", menor);

    return 0;
}
