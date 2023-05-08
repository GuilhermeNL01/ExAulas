#include <stdio.h>

int main()
{
    int vetor[5];
    int i, posicao_maior, posicao_menor, maior, menor;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Encontrando o maior e o menor valor, e suas posições
    maior = menor = vetor[0];
    posicao_maior = posicao_menor = 0;
    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    // Exibindo os resultados
    printf("Posição do maior valor: %d\n", posicao_maior);
    printf("Posição do menor valor: %d\n", posicao_menor);

    return 0;
}
