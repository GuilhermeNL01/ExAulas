#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Veiculo {
    char proprietario[100];
    char combustivel[20];
    char modelo[100];
    char cor[50];
    char chassi[100];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
};

typedef struct Veiculo Veiculo;

Veiculo* criarVeiculo() {
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

    printf("Proprietário: ");
    scanf(" %[^\n]", novoVeiculo->proprietario);

    printf("Combustível (álcool, diesel ou gasolina): ");
    scanf(" %[^\n]", novoVeiculo->combustivel);

    printf("Modelo: ");
    scanf(" %[^\n]", novoVeiculo->modelo);

    printf("Cor: ");
    scanf(" %[^\n]", novoVeiculo->cor);

    printf("Nº chassi: ");
    scanf(" %[^\n]", novoVeiculo->chassi);

    printf("Ano: ");
    scanf("%d", &(novoVeiculo->ano));

    printf("Placa (ABC1234): ");
    scanf(" %[^\n]", novoVeiculo->placa);

    novoVeiculo->proximo = NULL;

    return novoVeiculo;
}

void adicionarVeiculo(Veiculo** lista) {
    Veiculo* novoVeiculo = criarVeiculo();

    if (*lista == NULL) {
        *lista = novoVeiculo;
    } else {
        Veiculo* atual = *lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoVeiculo;
    }

    printf("Veículo adicionado com sucesso!\n");
}

void listarProprietariosDiesel2010(Veiculo* lista) {
    if (lista == NULL) {
        printf("A lista de veículos está vazia.\n");
    } else {
        Veiculo* atual = lista;
        int encontrado = 0;
        printf("Proprietários de veículos a diesel fabricados em 2010 ou posterior:\n");
        while (atual != NULL) {
            if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010) {
                printf("Proprietário: %s\n", atual->proprietario);
                encontrado = 1;
            }
            atual = atual->proximo;
        }

        if (!encontrado) {
            printf("Nenhum veículo encontrado.\n");
        }
    }
}

void listarPlacasJ0_2_4_7(Veiculo* lista) {
    if (lista == NULL) {
        printf("A lista de veículos está vazia.\n");
    } else {
        Veiculo* atual = lista;
        int encontrado = 0;
        printf("Placas e seus respectivos proprietários (iniciando com J e terminando em 0, 2, 4 ou 7):\n");
        while (atual != NULL) {
            char primeiraLetra = atual->placa[0];
            char ultimosDigitos[3];
            strncpy(ultimosDigitos, atual->placa + 3, 3);
            ultimosDigitos[3] = '\0';

            if (primeiraLetra == 'J' && (strcmp(ultimosDigitos, "0") == 0 || strcmp(ultimosDigitos, "2") == 0 || strcmp(ultimosDigitos, "4") == 0 || strcmp(ultimosDigitos, "7") == 0)) {
                printf("Placa: %s, Proprietário: %s\n", atual->placa, atual->proprietario);
                encontrado = 1;
            }
            atual = atual->proximo;
        }

        if (!encontrado) {
            printf("Nenhum veículo encontrado.\n");
        }
    }
}

int calcularSomaDigitosPlaca(const char* placa) {
    int soma = 0;
    for (int i = 3; i < 7; i++) {
        soma += placa[i] - '0';
    }
    return soma;
}

void listarModeloCorPlacasVogalSomaPar(Veiculo* lista) {
    if (lista == NULL) {
        printf("A lista de veículos está vazia.\n");
    } else {
        Veiculo* atual = lista;
        int encontrado = 0;
        printf("Modelo e cor dos veículos (placas com segunda letra vogal e soma dos valores numéricos é par):\n");
        while (atual != NULL) {
            char segundaLetra = atual->placa[1];
            int somaDigitosPlaca = calcularSomaDigitosPlaca(atual->placa);

            if ((segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' || segundaLetra == 'U') && somaDigitosPlaca % 2 == 0) {
                printf("Modelo: %s, Cor: %s\n", atual->modelo, atual->cor);
                encontrado = 1;
            }
            atual = atual->proximo;
        }

        if (!encontrado) {
            printf("Nenhum veículo encontrado.\n");
        }
    }
}

void trocarProprietario(Veiculo* lista, const char* chassi) {
    Veiculo* atual = lista;
    int encontrado = 0;

    while (atual != NULL) {
        if (strcmp(atual->chassi, chassi) == 0) {
            encontrado = 1;
            if (strchr(atual->placa, '0') == NULL) {
                printf("Informe o novo proprietário para o veículo de chassi %s: ", chassi);
                scanf(" %[^\n]", atual->proprietario);
                printf("Proprietário atualizado com sucesso!\n");
            } else {
                printf("Não é possível trocar o proprietário deste veículo devido à placa conter dígito zero.\n");
            }
            break;
        }
        atual = atual->proximo;
    }

    if (!encontrado) {
        printf("Nenhum veículo encontrado com o número de chassi fornecido.\n");
    }
}

void listarVeiculos(Veiculo* lista) {
    if (lista == NULL) {
        printf("A lista de veículos está vazia.\n");
    } else {
        Veiculo* atual = lista;
        printf("Lista de veículos:\n");
        while (atual != NULL) {
            printf("Proprietário: %s\n", atual->proprietario);
            printf("Combustível: %s\n", atual->combustivel);
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            printf("Nº chassi: %s\n", atual->chassi);
            printf("Ano: %d\n", atual->ano);
            printf("Placa: %s\n", atual->placa);
            printf("\n");
            atual = atual->proximo;
        }
    }
}

void liberarLista(Veiculo* lista) {
    Veiculo* atual = lista;
    while (atual != NULL) {
        Veiculo* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    Veiculo* listaVeiculos = NULL;
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1 - Adicionar veículo\n");
        printf("2 - Listar proprietários de veículos diesel fabricados em 2010 ou posterior\n");
        printf("3 - Listar placas que começam com J e terminam em 0, 2, 4 ou 7 e seus respectivos proprietários\n");
        printf("4 - Listar modelo e cor dos veículos cujas placas têm a segunda letra vogal e a soma dos valores numéricos é par\n");
        printf("5 - Trocar proprietário pelo número do chassi\n");
        printf("6 - Listar todos os veículos\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarVeiculo(&listaVeiculos);
                break;
            case 2:
                listarProprietariosDiesel2010(listaVeiculos);
                break;
            case 3:
                listarPlacasJ0_2_4_7(listaVeiculos);
                break;
            case 4:
                listarModeloCorPlacasVogalSomaPar(listaVeiculos);
                break;
            case 5: {
                char chassi[100];
                printf("Informe o número do chassi: ");
                scanf(" %[^\n]", chassi);
                trocarProprietario(listaVeiculos, chassi);
                break;
            }
            case 6:
                listarVeiculos(listaVeiculos);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                liberarLista(listaVeiculos);
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
