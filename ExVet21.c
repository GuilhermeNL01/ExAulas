#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i;

    // leitura do vetor A
    printf("Digite os 10 elementos do vetor A:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // leitura do vetor B
    printf("Digite os 10 elementos do vetor B:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    // cálculo do vetor C = A - B
    for(i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];
    }

    // impressão do vetor C
    printf("Vetor C = A - B:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
