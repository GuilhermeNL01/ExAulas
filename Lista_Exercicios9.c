#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor_total = 0;

    do {
        printf("\n");
        printf("Selecione a fruta que deseja comprar:\n");
        printf("1 - ABACAXI (R$ 5,00 a unidade)\n");
        printf("2 - MAÇA (R$ 1,00 a unidade)\n");
        printf("3 - PERA (R$ 4,00 a unidade)\n");
        printf("0 - SAIR\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5;
                break;
            case 2:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1;
                break;
            case 3:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0;
}

