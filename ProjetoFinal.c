#include <stdio.h>
#include <stdlib.h>

// Estrutura de um produto
typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

// Função que inicializa uma lista vazia
void inicializarEstoque(Produto estoque[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        estoque[i].codigo = 0;
    }
}

// Função que adiciona um novo produto à lista de estoque
void adicionarProduto(Produto estoque[], int tamanho) {
    int codigo;
    int i = 0;

    while (i < tamanho && estoque[i].codigo != 0) {
        i++;
    }

    if (i < tamanho) {
        printf("Informe o código do produto: ");
        scanf("%d", &codigo);

        estoque[i].codigo = codigo;

        printf("Informe a descrição do produto: ");
        scanf(" %[^\n]s", estoque[i].descricao);

        printf("Informe a quantidade do produto: ");
        scanf("%d", &estoque[i].quantidade);

        printf("Informe o valor do produto: ");
        scanf("%f", &estoque[i].valor);

        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Estoque cheio!\n");
    }
}

// Função que imprime um relatório com as informações de cada produto
void gerarRelatorio(Produto estoque[], int tamanho) {
    printf("Relatório de Estoque:\n");
    printf("--------------------\n");

    for (int i = 0; i < tamanho; i++) {
        if (estoque[i].codigo != 0) {
            printf("Código: %d\n", estoque[i].codigo);
            printf("Descrição: %s\n", estoque[i].descricao);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Valor: %.2f\n", estoque[i].valor);
            printf("--------------------\n");
        }
    }
}

// Função que permite pesquisar um produto pelo código
void pesquisarProduto(Produto estoque[], int tamanho) {
    int codigo;
    printf("Informe o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < tamanho; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Código: %d\n", estoque[i].codigo);
            printf("Descrição: %s\n", estoque[i].descricao);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Valor: %.2f\n", estoque[i].valor);
            return;
        }
    }

    printf("Produto não encontrado!\n");
}

// Função que remove um produto do estoque
void removerProduto(Produto estoque[], int tamanho) {
    int codigo;
    printf("Informe o código do produto a ser removido: ");
    scanf("%d", &codigo);

    for (int i = 0; i < tamanho; i++) {
        if (estoque[i].codigo == codigo) {
            estoque[i].codigo = 0;
            printf("Produto removido com sucesso!\n");
            return;
        }
    }

    printf("Produto não encontrado!\n");
}

int main() {
    const int tamanhoEstoque = 100;
    Produto estoque[tamanhoEstoque];
    int opcao;

    inicializarEstoque(estoque, tamanhoEstoque);

    do {
        printf("Menu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Consultar Produtos\n");
        printf("3. Gerar Relatório de Produtos\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(estoque, tamanhoEstoque);
                break;
            case 2:
                pesquisarProduto(estoque, tamanhoEstoque);
                break;
            case 3:
                gerarRelatorio(estoque, tamanhoEstoque);
                break;
            case 4:
                removerProduto(estoque, tamanhoEstoque);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
