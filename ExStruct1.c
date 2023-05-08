#include <stdio.h>

struct Pessoa {
  char nome[50];
  int idade;
  char endereco[100];
};

int main() {
  struct Pessoa pessoa;

  printf("Digite o nome da pessoa: ");
  fgets(pessoa.nome, 50, stdin);

  printf("Digite a idade da pessoa: ");
  scanf("%d", &pessoa.idade);

  printf("Digite o endereco da pessoa: ");
  fgets(pessoa.endereco, 100, stdin);

  printf("\nDados da pessoa:\n");
  printf("Nome: %s", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Endereco: %s", pessoa.endereco);

  return 0;
}
