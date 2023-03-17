#include <stdio.h>

int main() {
    double custoFabrica, custoConsumidor;
    const double percentualDistribuidor = 0.28, percentualImpostos = 0.45;

    printf("Custo de fabrica do carro: ");
    scanf("%lf", &custoFabrica);
    system("pause");
    system("cls");
    custoConsumidor = custoFabrica * (1 + percentualDistribuidor + percentualImpostos);

    printf("O custo final do carro ao consumidor: %.2lf\n", custoConsumidor);

    return 0;
}
