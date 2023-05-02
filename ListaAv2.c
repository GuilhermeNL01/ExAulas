#include <stdio.h>

float validaQuantidade() {
    float quantidade;
    do {
        printf("Digite a quantidade de peças fabricadas (-1 para encerrar): ");
        scanf("%f", &quantidade);
        if (quantidade < -1) {
            printf("Valor inválido. Tente novamente.\n");
        }
    } while (quantidade < -1);
    return quantidade;
}

float calculaSalario(float quantidade) {
    float salario = 600;
    if (quantidade > 50 && quantidade <= 80) {
        salario += (quantidade - 50) * 0.5;
    } else if (quantidade > 80) {
        salario += 30 * 0.5 + (quantidade - 80) * 0.75;
    }
    return salario;
}

void mostraFinal(int count, float totalSalarios) {
    printf("\nTotal de funcionários: %d\n", count);
    printf("Total de salários: R$ %.2f\n", totalSalarios);
}

int main() {
    float quantidade, salario, totalSalarios = 0;
    int count = 0;
    while (1) {
        quantidade = validaQuantidade();
        if (quantidade < 0) {
            break;
        }
        salario = calculaSalario(quantidade);
        printf("Salário do funcionário: R$ %.2f\n", salario);
        totalSalarios += salario;
        count++;
    }
    mostraFinal(count, totalSalarios);
    return 0;
}
