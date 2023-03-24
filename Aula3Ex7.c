#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco_unitario, valor_total;

    printf("Digite o codigo do item pedido: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade do item pedido: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100:
            preco_unitario = 10.10;
            break;
        case 101:
            preco_unitario = 8.30;
            break;
        case 102:
            preco_unitario = 8.50;
            break;
        case 103:
            preco_unitario = 12.50;
            break;
        case 104:
            preco_unitario = 13.25;
            break;
        default:
            printf("Codigo de item invalido!\n");
            return 0;
    }

    valor_total = preco_unitario * quantidade;

    printf("Valor a pagar: R$ %.2f\n", valor_total);

    return 0;
}
