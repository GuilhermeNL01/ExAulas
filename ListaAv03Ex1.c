#include <stdio.h>
#include <stdlib.h>

struct Restaurante {
  char nome[100];
  char endereco[100];
  float precoMedio;
  char tipoComida[100];
  struct Restaurante *proximo;
};

typedef struct Restaurante Restaurante;

Restaurante *criarRestaurante() {
  Restaurante *novoRestaurante = (Restaurante *)malloc(sizeof(Restaurante));

  printf("Digite o nome do restaurante: ");
  scanf("%s", novoRestaurante->nome);

  printf("Digite o endereço do restaurante: ");
  scanf("%s", novoRestaurante->endereco);

  printf("Digite o preço médio do restaurante: ");
  scanf("%f", &(novoRestaurante->precoMedio));

  printf("Digite o tipo de comida do restaurante: ");
  scanf("%s", novoRestaurante->tipoComida);

  novoRestaurante->proximo = NULL;

  return novoRestaurante;
}

void adicionarRestaurante(Restaurante **lista) {
  Restaurante *novoRestaurante = criarRestaurante();

  if (*lista == NULL) {
    *lista = novoRestaurante;
  } else {
    Restaurante *atual = *lista;
    while (atual->proximo != NULL) {
      atual = atual->proximo;
    }
    atual->proximo = novoRestaurante;
  }

  printf("Restaurante adicionado com sucesso!\n");
}

void listarRestaurantes(Restaurante *lista) {
  if (lista == NULL) {
    printf("A lista de restaurantes está vazia.\n");
  } else {
    Restaurante *atual = lista;
    printf("Lista de restaurantes:\n");
    while (atual != NULL) {
      printf("Nome: %s\n", atual->nome);
      printf("Endereço: %s\n", atual->endereco);
      printf("Preço médio: %.2f\n", atual->precoMedio);
      printf("Tipo de comida: %s\n", atual->tipoComida);
      printf("\n");
      atual = atual->proximo;
    }
  }
}

int main() {
  Restaurante *listaRestaurantes = NULL;
  int opcao;

  do {
    printf("Escolha uma opção:\n");
    printf("1 - Adicionar restaurante\n");
    printf("2 - Listar restaurantes\n");
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      adicionarRestaurante(&listaRestaurantes);
      break;
    case 2:
      listarRestaurantes(listaRestaurantes);
      break;
    case 0:
      printf("Encerrando o programa.\n");
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }

    printf("\n");
  } while (opcao != 0);

  return 0;
}
