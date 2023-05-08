#include <stdio.h>

int main()
{
    int vetor[10], z, i, count = 0;
    
    // lê os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // lê o número z
    printf("Digite um número inteiro z: ");
    scanf("%d", &z);
    
    // percorre o vetor e conta os múltiplos de z
    for (i = 0; i < 10; i++) {
        if (vetor[i] % z == 0) {
            printf("%d é múltiplo de %d\n", vetor[i], z);
            count++;
        }
    }
    
    // verifica se foram encontrados múltiplos de z no vetor
    if (count == 0) {
        printf("Não foram encontrados múltiplos de %d no vetor.\n", z);
    } else {
        printf("Foram encontrados %d múltiplos de %d no vetor.\n", count, z);
    }
    
    return 0;
}
