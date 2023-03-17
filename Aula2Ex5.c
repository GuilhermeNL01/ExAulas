#include <stdio.h>

int main() {
    int anos, meses, dias, idadedias;

    printf("Digite sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);
    system("pause");
    system("cls");
    idadedias = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias: %d dias\n", idadedias);

    return 0;
}
