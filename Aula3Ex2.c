#include <stdio.h>

int main() {
    double valor, imposto;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%lf", &valor);
    getchar();

    printf("Digite o estado de destino (AM, DF, RJ ou GO): ");
    fgets(estado, 3, stdin);

    switch (estado[0]) {
        case 'A':
            if (estado[1] == 'M') {
                imposto = valor * 0.07;
            } else {
                printf("Estado invalido!\n");
                return 0;
            }
            break;
        case 'D':
            if (estado[1] == 'F') {
                imposto = valor * 0.12;
            } else {
                printf("Estado invalido!\n");
                return 0;
            }
            break;
        case 'R':
            if (estado[1] == 'J') {
                imposto = valor * 0.15;
            } else {
                printf("Estado invalido!\n");
                return 0;
            }
            break;
        case 'G':
            if (estado[1] == 'O') {
                imposto = valor * 0.08;
            } else {
                printf("Estado invalido!\n");
                return 0;
            }
            break;
        default:
            printf("Estado invalido!\n");
            return 0;
    }

    double preco_final = valor + imposto;
    printf("Preco final: R$ %.2lf\n", preco_final);

    return 0;
}
