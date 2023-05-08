#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j, iguais = 0;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificando valores iguais
    printf("Valores iguais no vetor:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                iguais = 1;
            }
        }
    }

    // Se não há valores iguais
    if (!iguais) {
        printf("Não existem valores iguais no vetor.\n");
    }

    return 0;
}
