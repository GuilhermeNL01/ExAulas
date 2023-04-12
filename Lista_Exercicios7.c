#include <stdio.h>

int main() {
    int n, seq_atual = 0, seq_anterior = 1, seq_auxiliar;

    printf("Digite a quantidade de termos? ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci com %d termos:\n", n);

    // Caso n seja igual a zero, não há termos para serem exibidos
    if (n == 0) {
        return 0;
    }

    // Exibe o primeiro termo da sequência
    printf("%d ", seq_atual);

    // Enquanto houver termos para serem exibidos
    while (n > 1) {
        seq_auxiliar = seq_atual;
        seq_atual += seq_anterior;
        seq_anterior = seq_auxiliar;

        // Exibe o número atual da sequência
        printf("%d ", seq_atual);

        n--;
    }

    printf("\n");

    return 0;
}

