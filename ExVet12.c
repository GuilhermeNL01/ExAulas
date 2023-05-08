#include <stdio.h>

int main()
{
    int vetor[5];
    int i, maior, menor, soma = 0;
    float media;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Encontrando o maior, o menor e a soma dos valores
    maior = menor = vetor[0];
    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        soma += vetor[i];
    }

    // Calculando a média
    media = (float) soma / 5;

    // Exibindo os resultados
    printf("Valores do vetor:");
    for (i = 0; i < 5; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %f\n", media);

    return 0;
}
