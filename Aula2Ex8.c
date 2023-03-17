#include <stdio.h>

int main() {
    int numCarrosVendidos;
    double valorVendas, salarioFixo, valorPorCarro, comissao, salarioFinal;

    printf("Digite o numero de carros vendidos:\n ");
    scanf("%d", &numCarrosVendidos);
    printf("------------------------------------------\n");

    printf("Digite o valor total de vendas:\n ");
    scanf("%lf", &valorVendas);
    printf("------------------------------------------\n");


    printf("Digite o salario fixo:\n ");
    scanf("%lf", &salarioFixo);
    printf("------------------------------------------\n");

    printf("Digite o valor que ele recebe por carro vendido:\n ");
    scanf("%lf", &valorPorCarro);

    system("pause");
    system("cls");

    comissao = numCarrosVendidos * valorPorCarro;
    salarioFinal = salarioFixo + comissao + (0.05 * valorVendas);

    printf("Salario final do vendedor: %.2lf\n", salarioFinal);

    return 0;
}
