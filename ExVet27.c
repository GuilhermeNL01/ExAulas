#include <stdio.h>

int eh_primo(int n) {
    if(n <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return 0; // Se o número tem divisor, não é primo
    }
    return 1; // Se não encontrou divisor, o número é primo
}

int main() {
    int numeros[10];
    
    // Lê os 10 números e armazena no vetor
    for(int i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    // Verifica quais números são primos e imprime a posição e o valor
    printf("\nNumeros primos encontrados:\n");
    for(int i = 0; i < 10; i++) {
        if(eh_primo(numeros[i])) {
            printf("Posicao %d: %d\n", i, numeros[i]);
        }
    }
    
    return 0;
}
