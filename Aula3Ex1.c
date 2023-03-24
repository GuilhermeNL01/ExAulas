#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    if (num > 0) {
        double quadrado = pow(num, 2);
        double raiz_quadrada = sqrt(num);

        printf("Numero ao quadrado: %.2lf\n", quadrado);
        printf("A raiz quadrada do numero: %.2lf\n", raiz_quadrada);
    } 
    else {
        printf("O numero digitado nao e positivo.\n");
    }

    return 0;
}
