#include <stdio.h>

// Subalgoritmo para validar o sexo
char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    return sexo;
}

// Subalgoritmo para validar o salário
float validaSalario() {
    float salario;
    do {
        printf("Informe o salário do assalariado (R$): ");
        scanf("%f", &salario);
        if (salario <= 1.0) {
            printf("O salário informado deve ser maior que R$1,00. ");
        }
    } while (salario <= 1.0);
    return salario;
}

// Subalgoritmo para classificar o salário em relação ao mínimo
char* classificaSalario(float salario) {
    if (salario > 1400.0) {
        return "Acima";
    } else if (salario == 1400.0) {
        return "Igual";
    } else {
        return "Abaixo";
    }
}

// Subalgoritmo para mostrar a classificação
void mostraClassifica(char sexo, float salario, char* classificacao) {
    printf("Assalariado %s, com salário de R$%.2f, está %s do salário mínimo nacional.\n", sexo == 'M' || sexo == 'm' ? "Masculino" : "Feminino", salario, classificacao);
}

int main() {
    int n, abaixo = 0, acima = 0;
    printf("Informe o número de assalariados: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("\nAssalariado %d:\n", i);
        char sexo = validaSexo();
        float salario = validaSalario();
        char* classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);
        if (salario < 1400.0) {
            abaixo++;
        } else if (salario > 1400.0) {
            acima++;
        }
    }
    printf("\nTotal de assalariados abaixo do salário mínimo: %d", abaixo);
    printf("\nTotal de assalariados acima do salário mínimo: %d", acima);
    return 0;
}
