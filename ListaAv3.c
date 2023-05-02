#include <stdio.h>
struct Jogador {
    int idade;
    float peso;
};

void lerJogador(struct Jogador* jogador) {
    printf("Digite a idade do jogador: ");
    scanf("%d", &(jogador->idade));
    printf("Digite o peso do jogador: ");
    scanf("%f", &(jogador->peso));
}

 void calcularTime(struct Jogador jogadores[], int n, float* mediaIdades, float* mediaPeso) {
    int i, countIdade = 0, countPeso = 0;
    float somaIdades = 0, somaPeso = 0;

    for (i = 0; i < n; i++) {
        somaIdades += jogadores[i].idade;
        if (jogadores[i].idade >= 25) {
            countPeso++;
            somaPeso += jogadores[i].peso;
        }
        if (jogadores[i].idade < 18) {
            countIdade++;
        }
    }

    *mediaIdades = somaIdades / n;
    if (countPeso > 0) {
        *mediaPeso = somaPeso / countPeso;
    } else {
        *mediaPeso = 0;
    }

    printf("Média de idade dos jogadores: %.2f\n", *mediaIdades);
    printf("Média de peso dos jogadores acima de 25 anos: %.2f\n", *mediaPeso);
    printf("\n");
}

int main() {
    int nTimes, nJogadores, i, j, countIdade = 0, countPeso = 0;
    float mediaIdades, mediaPeso;
    struct Jogador jogadores[11];

    printf("Digite o número de times: ");
    scanf("%d", &nTimes);

    for (i = 0; i < nTimes; i++) {
        printf("Time %d:\n", i+1);

        do {
            printf("Digite o número de jogadores (entre 6 e 11): ");
            scanf("%d", &nJogadores);
        } while (nJogadores < 6 || nJogadores > 11);

        for (j = 0; j < nJogadores; j++) {
            printf("Jogador %d:\n", j+1);
            lerJogador(&jogadores[j]);
        }

        calcularTime(jogadores, nJogadores, &mediaIdades, &mediaPeso);
    }

    for (i = 0; i < nTimes * nJogadores; i++) {
        if (jogadores[i].idade < 18) {
            countIdade++;
        }
        if (jogadores[i].peso > 80) {
            countPeso++;
        }
    }

    printf("Quantidade de jogadores menores de idade: %d\n", countIdade);
    printf("Quantidade de jogadores com mais de 80 quilos: %d\n", countPeso);
    printf("Porcentagem de jogadores com mais de 80 quilos: %.2f%%\n", ((float)countPeso / (nTimes * nJogadores)) * 100);

    return 0;
}
