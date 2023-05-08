#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

int main() {
    struct Aluno alunos[5];
    int i, alunoMaiorNota1, alunoMaiorMedia, alunoMenorMedia;
    float maiorNota1 = 0, maiorMedia = 0, menorMedia = 10;
    
    // Entrada de dados dos alunos
    for(i=0; i<5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }
    
    // Encontrar aluno com maior nota da primeira prova
    for(i=0; i<5; i++) {
        if(alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            alunoMaiorNota1 = i;
        }
    }
    printf("Aluno com maior nota na primeira prova: %s (Matricula: %d)\n", alunos[alunoMaiorNota1].nome, alunos[alunoMaiorNota1].matricula);
    
    // Encontrar aluno com maior média geral
    for(i=0; i<5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if(media > maiorMedia) {
            maiorMedia = media;
            alunoMaiorMedia = i;
        }
        if(media < menorMedia) {
            menorMedia = media;
            alunoMenorMedia = i;
        }
    }
    printf("Aluno com maior media geral: %s (Matricula: %d)\n", alunos[alunoMaiorMedia].nome, alunos[alunoMaiorMedia].matricula);
    printf("Aluno com menor media geral: %s (Matricula: %d)\n", alunos[alunoMenorMedia].nome, alunos[alunoMenorMedia].matricula);
    
    // Verificar aprovação ou reprovação
    for(i=0; i<5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        printf("Aluno %d (%s) - Media: %.2f - Situacao: ", alunos[i].matricula, alunos[i].nome, media);
        if(media >= 7) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    
    return 0;
}
