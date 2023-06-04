#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar a Anamnese
typedef struct {
    char nome[50];
    int idade;
    char sintomas[100];
} Anamnese;

int main() {
    int tamanhoInicial = 5; // Tamanho inicial do vetor de registros
    int tamanhoAtual = 0; // Número atual de registros
    int capacidadeAtual = tamanhoInicial; // Capacidade atual do vetor
    Anamnese* registros = (Anamnese*)malloc(tamanhoInicial * sizeof(Anamnese)); // Alocar espaço inicial

    // Verificar se a alocação de memória foi bem-sucedida
    if (registros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Loop para adicionar registros
    char continuar;
    do {
        // Verificar se há espaço suficiente para um novo registro
        if (tamanhoAtual == capacidadeAtual) {
            // Aumentar a capacidade do vetor
            capacidadeAtual *= 2;
            Anamnese* temp = (Anamnese*)realloc(registros, capacidadeAtual * sizeof(Anamnese));
            // Verificar se a realocação de memória foi bem-sucedida
            if (temp == NULL) {
                printf("Erro ao realocar memória.\n");
                return 1;
            }
            registros = temp;
        }

        // Preencher os dados da Anamnese
        printf("Registro %d:\n", tamanhoAtual + 1);
        printf("Nome: ");
        scanf("%s", registros[tamanhoAtual].nome);
        printf("Idade: ");
        scanf("%d", &registros[tamanhoAtual].idade);
        printf("Sintomas: ");
        scanf("%s", registros[tamanhoAtual].sintomas);

        tamanhoAtual++; // Incrementar o número de registros

        printf("Deseja adicionar mais um registro? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    // Imprimir os registros cadastrados
    printf("\nRegistros de Anamnese cadastrados:\n");
    for (int i = 0; i < tamanhoAtual; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s\n", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("Sintomas: %s\n", registros[i].sintomas);
        printf("\n");
    }

    // Liberar a memória alocada
    free(registros);

    return 0;
}
