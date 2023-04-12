/*
 Elabore um programa que faça a leitura de vários números inteiros até que se digite
 um número negativo. O programa tem de retornar o maior e o menor número lido
*/
#include <stdio.h>

int main() {
    int numero, maior = -999999, menor = 999999;
    
    printf("Digite vários números inteiros. Digite um número negativo para parar.\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero >= 0) {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    } while (numero >= 0);
    
    printf("O maior número lido foi %d.\n", maior);
    printf("O menor número lido foi %d.\n", menor);
    
    return 0;
    
}
