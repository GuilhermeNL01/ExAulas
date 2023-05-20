#include <stdio.h>

int calcularDobroESomar(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
    return (*a + *b);
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int somaDobro = calcularDobroESomar(&valor1, &valor2);

    printf("Resultado: %d\n", somaDobro);
    printf("Novo valor de A: %d\n", valor1);
    printf("Novo valor de B: %d\n", valor2);

    return 0;
}
