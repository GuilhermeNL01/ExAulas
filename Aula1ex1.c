#include <stdio.h>
#include <stdlib.h>
int main()
{
    double lucro, venda, despesas, frete, custo;

    printf("Custo da mercadoria:\n ");
    scanf("%lf", &custo);
    system("pause");
    system("cls");

    printf("Valor do frete:\n ");
    scanf("%lf", &frete);
    system("pause");
    system("cls");

    printf("Valor das despesas:\n ");
    scanf("%lf", &despesas);
    system("pause");
    system("cls");

    custo += frete + despesas;

    printf("Valor de venda:\n ");
    scanf("%lf", &venda);
    system("pause");
    system("cls");

    lucro = venda - custo;
    double percentualdelucro = (lucro / custo) * 100;

    printf("Custo total: R$%.2f\n", custo);
    printf("Lucro: R$%.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentualdelucro);

    return 0;
}
