#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    float total_calorias = 0;

    // solicitando ao usuário que informe o prato, sobremesa e bebida
    printf("Informe o prato: ");
    scanf("%d", &prato);
    printf("Informe a sobremesa: ");
    scanf("%d", &sobremesa);
    printf("Informe a bebida: ");
    scanf("%d", &bebida);

    // calculando a quantidade total de calorias
    switch(prato) {
        case 1:
            total_calorias += 180;
            break;
        case 2:
            total_calorias += 230;
            break;
        case 3:
            total_calorias += 250;
            break;
        case 4:
            total_calorias += 350;
            break;
        default:
            printf("Opcao de prato invalida.");
            return 0;
    }

    switch(sobremesa) {
        case 1:
            total_calorias += 75;
            break;
        case 2:
            total_calorias += 110;
            break;
        case 3:
            total_calorias += 170;
            break;
        case 4:
            total_calorias += 200;
            break;
        default:
            printf("Opcao de sobremesa invalida.");
            return 0;
    }

    switch(bebida) {
        case 1:
            total_calorias += 20;
            break;
        case 2:
            total_calorias += 70;
            break;
        case 3:
            total_calorias += 110;
            break;
        case 4:
            total_calorias += 0;
            break;
        default:
            printf("Opcao de bebida invalida.");
            return 0;
    }

    // exibindo a quantidade total de calorias da refeição
    printf("A quantidade total de calorias da refeicao e: %.2f cal", total_calorias);

    return 0;
}
