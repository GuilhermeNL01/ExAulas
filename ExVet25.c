#include <stdio.h>

// função para verificar se o número é um número natural que não é múltiplo de 7 ou que termina com 7
int verificaNumero(int num) {
    if (num % 7 == 0 || num % 10 == 7) {
        return 0; // não atende à condição
    } else {
        return 1; // atende à condição
    }
}

int main() {
    int vetor[100];
    int count = 0;
    int num = 1;

    while (count < 100) {
        if (verificaNumero(num)) {
            vetor[count] = num;
            count++;
        }
        num++;
    }

    // exibe o vetor resultante
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
