#include <stdio.h>

struct Aluno {
  char nome[50];
  int matricula;
  char curso[30];
};

int main() {
  struct Aluno alunos[5];
  
  // leitura dos dados dos alunos
  for (int i = 0; i < 5; i++) {
    printf("Informe os dados do aluno %d:\n", i+1);
    printf("Nome: ");
    fgets(alunos[i].nome, 50, stdin);
    printf("Matricula: ");
    scanf("%d", &alunos[i].matricula);
    getchar(); // consome o caractere '\n' deixado pelo scanf
    printf("Curso: ");
    fgets(alunos[i].curso, 30, stdin);
  }
  
  // impressão dos dados dos alunos
  printf("\nDados dos alunos:\n");
  for (int i = 0; i < 5; i++) {
    printf("Aluno %d\n", i+1);
    printf("Nome: %s", alunos[i].nome);
    printf("Matricula: %d\n", alunos[i].matricula);
    printf("Curso: %s\n", alunos[i].curso);
  }
  
  return 0;
}
