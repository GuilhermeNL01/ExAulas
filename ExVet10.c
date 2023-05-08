#include <stdio.h>

#define NUM_ALUNOS 15

int main() {
    float notas[NUM_ALUNOS];
    float soma = 0, media;

    // leitura das notas dos alunos
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // cálculo da média
    media = soma / NUM_ALUNOS;

    // exibição da média
    printf("A media geral das notas eh: %.2f\n", media);

    return 0;
}
