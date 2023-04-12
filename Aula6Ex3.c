#include <stdio.h>

float lerPreco() {
    float preco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    return preco;
}

float inflacionarPreco(float preco) {
    if (preco < 100) {
        preco = preco * 1.1; // inflaciona em 10%
    } else {
        preco = preco * 1.2; // inflaciona em 20%
    }
    return preco;
}

int main() {
    float preco, precoInflacionado;

    preco = lerPreco();
    precoInflacionado = inflacionarPreco(preco);

    printf("Preco original: R$ %.2f\n", preco);
    printf("Preco inflacionado: R$ %.2f\n", precoInflacionado);

    return 0;
}
