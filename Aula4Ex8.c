#include <stdio.h>

int main() {
    char sexo, cor_olhos, cor_cabelos;
    int idade;
    float salario;
    int total_habitantes = 0;
    int total_mulheres_18_35_castanhos_castanhos = 0;

    printf("Cadastro de habitantes:\n");

    while (1) {
        printf("Habitante %d:\n", total_habitantes + 1);

        // Lendo dados do habitante
        printf("Sexo (m ou f): ");
        scanf(" %c", &sexo);
        if (sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a, v, c ou p): ");
            scanf(" %c", &cor_olhos);
            if (cor_olhos == 'a' || cor_olhos == 'v' || cor_olhos == 'c' || cor_olhos == 'p') {
                printf("Cor dos cabelos (l, c, p ou r): ");
                scanf(" %c", &cor_cabelos);
                if (cor_cabelos == 'l' || cor_cabelos == 'c' || cor_cabelos == 'p' || cor_cabelos == 'r') {
                    printf("Idade (entre 10 e 100 anos): ");
                    scanf("%d", &idade);
                    if (idade >= 10 && idade <= 100) {
                        printf("Salario (positivo): ");
                        scanf("%f", &salario);
                        if (salario >= 0) {
                            total_habitantes++;

                            // Verificando se a habitante é mulher com as características desejadas
                            if (sexo == 'f' && idade >= 18 && idade <= 35 && cor_olhos == 'c' && cor_cabelos == 'c') {
                                total_mulheres_18_35_castanhos_castanhos++;
                            }

                            // Verificando se o usuário deseja encerrar o cadastro
                            if (idade == -1) {
                                break;
                            }
                        } else {
                            printf("Salario deve ser positivo!\n");
                        }
                    } else {
                        printf("Idade invalida!\n");
                    }
                } else {
                    printf("Cor dos cabelos invalida!\n");
                }
            } else {
                printf("Cor dos olhos invalida!\n");
            }
        } else {
            printf("Sexo invalido!\n");
        }
    }

    // Calculando porcentagem de mulheres com características desejadas
    float percentual = (float) total_mulheres_18_35_castanhos_castanhos / total_habitantes * 100;

    // Imprimindo resultados
    printf("\nTotal de habitantes cadastrados: %d\n", total_habitantes);
    printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos e cabelos castanhos: %.2f%%\n", percentual);

    return 0;
}
