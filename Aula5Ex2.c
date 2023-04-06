#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

int main() {
    int n;
    printf("Digite o número de estudantes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float nota1, nota2, nota3;
        printf("Digite as notas do estudante %d (separadas por espaço): ", i);
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        float media = calculaMedia(nota1, nota2, nota3);
        printf("A média do estudante %d é %.2f\n", i, media);
    }

    return 0;
}
