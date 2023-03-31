#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("Numeros naturais de %d ate 0 em ordem decrescente:\n", n);
    
    for (i = n; i >= 0; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}
