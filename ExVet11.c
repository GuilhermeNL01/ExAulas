#include <stdio.h>

int main()
{
    float vetor[10];
    int i, qtd_negativos = 0;
    float soma_positivos = 0.0;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    // Calculando a quantidade de números negativos e a soma dos números positivos
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            qtd_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    // Exibindo os resultados
    printf("Quantidade de números negativos: %d\n", qtd_negativos);
    printf("Soma dos números positivos: %f\n", soma_positivos);

    return 0;
}
