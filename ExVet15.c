#include <stdio.h>

int main()
{
    int vetor[20];
    int i, j, k, repetido;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // Eliminando elementos repetidos
    for (i = 0; i < 20; i++) {
        repetido = 0;
        for (j = i + 1; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
