#include <stdio.h>

int main() {
    int i, soma = 0;

    // Percorre todos os números naturais abaixo de 1000
    for (i = 1; i < 1000; i++) {
        // Verifica se o número é múltiplo de 3 ou 5
        if (i % 3 == 0 || i % 5 == 0) {
            // Se for, adiciona à soma
            soma += i;
        }
    }

    // Exibe a soma
    printf("A soma dos numeros abaixo de 1000 que sao multiplos de 3 ou 5 e: %d", soma);

    return 0;
}

