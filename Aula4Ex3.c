#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("Os %d primeiros numeros naturais impares sao:\n", n);
    
    for (i = 1; n > 0; i += 2) {
        printf("%d\n", i);
        n--;
    }
    
    return 0;
}
