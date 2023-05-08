#include <stdio.h>

int main() {
    int valores[6]; // criação do vetor para armazenar os valores

    // leitura dos valores
    for(int i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    // exibição dos valores
    printf("Valores lidos:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
