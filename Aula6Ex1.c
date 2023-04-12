#include <stdio.h>

int solicita_opcao() {
    int opcao;
    printf("Escolha uma opcao de pagamento:\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    scanf("%d", &opcao);
    return opcao;
}

void opcao_a_vista(float total) {
    float desconto = total * 0.1;
    float total_com_desconto = total - desconto;
    printf("Valor total com desconto: R$ %.2f\n", total_com_desconto);
}

void opcao_duas_vezes(float total) {
    printf("Valor total da primeira prestacao: R$ %.2f\n", total / 2);
    printf("Valor total da segunda prestacao: R$ %.2f\n", total / 2);
}

void opcao_tres_a_dez_vezes(float total) {
    if (total >= 100) {
        int num_prestacoes;
        printf("Quantidade de prestacoes (entre 3 e 10): ");
        scanf("%d", &num_prestacoes);
        if (num_prestacoes >= 3 && num_prestacoes <= 10) {
            float juros = 1.03; // juros de 3% ao mes
            float total_com_juros = total * juros;
            float valor_prestacao = total_com_juros / num_prestacoes;
            printf("Valor total com juros: R$ %.2f\n", total_com_juros);
            printf("Valor da prestacao: R$ %.2f\n", valor_prestacao);
        } else {
            printf("Opcao invalida.\n");
        }
    } else {
        printf("Opcao invalida.\n");
    }
}

int main() {
    float total;
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);
    int opcao = solicita_opcao();
    switch(opcao) {
        case 1:
            opcao_a_vista(total);
            break;
        case 2:
            opcao_duas_vezes(total);
            break;
        case 3:
            opcao_tres_a_dez_vezes(total);
            break;
        default:
            printf("Opcao invalida.\n");
    }
    return 0;
}

