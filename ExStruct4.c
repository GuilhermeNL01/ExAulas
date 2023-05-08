#include <stdio.h>
#define N 10

typedef struct {
    char nome[50];
    int matricula;
    float mediaFinal;
} Aluno;

int main() {
    Aluno alunos[N], aprovados[N], reprovados[N];
    int i, j = 0, k = 0;
    for(i = 0; i < N; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media final do aluno %d: ", i+1);
        scanf("%f", &alunos[i].mediaFinal);
        printf("\n");
    }

    for(i = 0; i < N; i++) {
        if(alunos[i].mediaFinal >= 5.0) {
            aprovados[j] = alunos[i];
            j++;
        }
        else {
            reprovados[k] = alunos[i];
            k++;
        }
    }

    printf("Alunos aprovados:\n");
    for(i = 0; i < j; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media Final: %.2f\n\n", aprovados[i].mediaFinal);
    }

    printf("Alunos reprovados:\n");
    for(i = 0; i < k; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media Final: %.2f\n\n", reprovados[i].mediaFinal);
    }

    return 0;
}
