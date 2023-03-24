#include <stdio.h>

int main() {
    int operacao;
    double valor1, valor2, resultado;

    printf("Escolha uma operacao matematica:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &operacao);

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    switch (operacao) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            if (valor2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = valor1 / valor2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
