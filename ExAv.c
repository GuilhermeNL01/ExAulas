#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 1000

struct Usuario {
  int id;
  char nomeCompleto[100];
  char email[100];
  char sexo[20];
  char endereco[100];
  double altura;
  int vacina;
};

struct Usuario usuarios[MAX_USUARIOS];
int totalUsuarios = 0;

void incluirUsuario() {
  if (totalUsuarios == MAX_USUARIOS) {
    printf("Limite de usuários atingido.\n");
    return;
  }

  struct Usuario novoUsuario;
  novoUsuario.id = rand() % 1000;
  printf("Nome completo: ");
  scanf(" %[^\n]s", novoUsuario.nomeCompleto);
  printf("Email: ");
  scanf(" %[^\n]s", novoUsuario.email);
  printf("Sexo (Feminino/Masculino/Indiferente): ");
  scanf(" %[^\n]s", novoUsuario.sexo);
  printf("Endereço: ");
  scanf(" %[^\n]s", novoUsuario.endereco);
  printf("Altura (entre 1 e 2): ");
  scanf("%lf", &novoUsuario.altura);
  printf("Vacina (0 - Não / 1 - Sim): ");
  scanf("%d", &novoUsuario.vacina);

  usuarios[totalUsuarios] = novoUsuario;
  totalUsuarios++;

  printf("Usuário adicionado com sucesso.\n");
}

void editarUsuario() {
  int id;
  printf("Digite o ID do usuário a ser editado: ");
  scanf("%d", &id);

  int i;
  for (i = 0; i < totalUsuarios; i++) {
    if (usuarios[i].id == id) {
      printf("Nome completo: ");
      scanf(" %[^\n]s", usuarios[i].nomeCompleto);
      printf("Email: ");
      scanf(" %[^\n]s", usuarios[i].email);
      printf("Sexo (Feminino/Masculino/Indiferente): ");
      scanf(" %[^\n]s", usuarios[i].sexo);
      printf("Endereço: ");
      scanf(" %[^\n]s", usuarios[i].endereco);
      printf("Altura (entre 1 e 2): ");
      scanf("%lf", &usuarios[i].altura);
      printf("Vacina (0 - Não / 1 - Sim): ");
      scanf("%d", &usuarios[i].vacina);

      printf("Usuário editado com sucesso.\n");
      return;
    }
  }

  printf("Usuário não encontrado.\n");
}

void excluirUsuario() {
  int id;
  printf("Digite o ID do usuário a ser excluído: ");
  scanf("%d", &id);

  int i, encontrado = 0;
  for (i = 0; i < totalUsuarios; i++) {
    if (usuarios[i].id == id) {
      encontrado = 1;
      break;
    }
  }

  if (encontrado) {
    for (int j = i; j < totalUsuarios - 1; j++) {
      usuarios[j] = usuarios[j + 1];
    }
    totalUsuarios--;
    printf("Usuário excluído com sucesso.\n");
  } else {
    printf("Usuário não encontrado.\n");
  }
}

void buscarUsuarioPorEmail() {
  char email[100];
  printf("Digite o email do usuário a ser buscado: ");
  scanf(" %[^\n]", email);

  int i, encontrado = 0;
  for (i = 0; i < totalUsuarios; i++) {
    if (strcmp(usuarios[i].email, email) == 0) {
      printf("ID: %d\n", usuarios[i].id);
      printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
      printf("Email: %s\n", usuarios[i].email);
      printf("Sexo: %s\n", usuarios[i].sexo);
      printf("Endereço: %s\n", usuarios[i].endereco);
      printf("Altura: %.2lf\n", usuarios[i].altura);
      printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
      encontrado = 1;
      break;
    }
  }

  if (!encontrado) {
    printf("Usuário não encontrado.\n");
  }
}

void imprimirUsuarios() {
  if (totalUsuarios == 0) {
    printf("Não há usuários cadastrados.\n");
    return;
  }
  printf("Total de usuários cadastrados: %d\n", totalUsuarios);
  for (int i = 0; i < totalUsuarios; i++) {
    printf("ID: %d\n", usuarios[i].id);
    printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
    printf("Email: %s\n", usuarios[i].email);
    printf("Sexo: %s\n", usuarios[i].sexo);
    printf("Endereço: %s\n", usuarios[i].endereco);
    printf("Altura: %.2lf\n", usuarios[i].altura);
    printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
    printf("-------------------------------\n");
  }
}

void fazerBackup() {
  FILE *arquivo = fopen("backup.txt", "w");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo de backup.\n");
    return;
  }

  fprintf(arquivo, "%d\n", totalUsuarios);
  for (int i = 0; i < totalUsuarios; i++) {
    fprintf(arquivo, "%d\n", usuarios[i].id);
    fprintf(arquivo, "%s\n", usuarios[i].nomeCompleto);
    fprintf(arquivo, "%s\n", usuarios[i].email);
    fprintf(arquivo, "%s\n", usuarios[i].sexo);
    fprintf(arquivo, "%s\n", usuarios[i].endereco);
    fprintf(arquivo, "%.2lf\n", usuarios[i].altura);
    fprintf(arquivo, "%d\n", usuarios[i].vacina);
  }

  fclose(arquivo);
  printf("Backup realizado com sucesso.\n");
}

void fazerRestauracao() {
  FILE *arquivo = fopen("backup.txt", "r");
  if (arquivo == NULL) {
    printf("Arquivo de backup não encontrado.\n");
    return;
  }
  fscanf(arquivo, "%d\n", &totalUsuarios);
  for (int i = 0; i < totalUsuarios; i++) {
    fscanf(arquivo, "%d\n", &usuarios[i].id);
    fscanf(arquivo, "%[^\n]\n", usuarios[i].nomeCompleto);
    fscanf(arquivo, "%[^\n]\n", usuarios[i].email);
    fscanf(arquivo, "%[^\n]\n", usuarios[i].sexo);
    fscanf(arquivo, "%[^\n]\n", usuarios[i].endereco);
    fscanf(arquivo, "%lf\n", &usuarios[i].altura);
    fscanf(arquivo, "%d\n", &usuarios[i].vacina);
  }
  fclose(arquivo);
  printf("Restauração dos dados concluída.\n");
}

int main() {
  srand(time(NULL));
  char opcao;

  do {
    printf("\n==== Menu ====\n");
    printf("1. Incluir usuário\n");
    printf("2. Editar usuário\n");
    printf("3. Excluir usuário\n");
    printf("4. Buscar usuário por email\n");
    printf("5. Imprimir todos os usuários cadastrados\n");
    printf("6. Fazer backup dos usuários cadastrados\n");
    printf("7. Fazer restauração dos dados\n");
    printf("0. Sair\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &opcao);

    switch (opcao) {
    case '1':
      incluirUsuario();
      break;
    case '2':
      editarUsuario();
      break;
    case '3':
      excluirUsuario();
      break;
    case '4':
      buscarUsuarioPorEmail();
      break;
    case '5':
      imprimirUsuarios();
      break;
    case '6':
      fazerBackup();
      break;
    case '7':
      fazerRestauracao();
      break;
    case '0':
      printf("Encerrando o programa.\n");
      break;
    default:
      printf("Opção inválida. Digite novamente.\n");
      break;
    }
  } while (opcao != '0');

  return 0;
}
