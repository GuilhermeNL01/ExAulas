#include <stdio.h>
#include <stdlib.h>

struct Dieta {
    char nomeComida[100];
    float pesoPorcao;
    int calorias;
    struct Dieta* proximo;
};

typedef struct Dieta Dieta;

Dieta* criarComida() {
    Dieta* novaComida = (Dieta*)malloc(sizeof(Dieta));

    printf("Digite o nome da comida: ");
    scanf("%s", novaComida->nomeComida);

    printf("Digite o peso de uma porção (em gramas): ");
    scanf("%f", &(novaComida->pesoPorcao));

    printf("Digite o número de calorias: ");
    scanf("%d", &(novaComida->calorias));

    novaComida->proximo = NULL;

    return novaComida;
}

void adicionarComida(Dieta** lista) {
    Dieta* novaComida = criarComida();

    if (*lista == NULL) {
        *lista = novaComida;
    } else {
        Dieta* atual = *lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novaComida;
    }

    printf("Comida adicionada com sucesso!\n");
}

void listarComidas(Dieta* lista) {
    if (lista == NULL) {
        printf("A lista de comidas está vazia.\n");
    } else {
        Dieta* atual = lista;
        printf("Lista de comidas:\n");
        while (atual != NULL) {
            printf("Nome: %s\n", atual->nomeComida);
            printf("Peso porção: %.2f g\n", atual->pesoPorcao);
            printf("Calorias: %d\n", atual->calorias);
            printf("\n");
            atual = atual->proximo;
        }
    }
}

int main() {
    Dieta* listaComidas = NULL;
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1 - Adicionar comida\n");
        printf("2 - Listar comidas\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarComida(&listaComidas);
                break;
            case 2:
                listarComidas(listaComidas);
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
