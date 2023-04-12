#include <stdio.h>

int main() {
    int numeros[10], soma = 0;

    // lê 10 inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite um inteiro: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // calcula e imprime a média
    float media = (float)soma / 10;
    printf("A media dos numeros lidos e: %.2f\n", media);

    return 0;
}

