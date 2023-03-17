#include <stdio.h>

int main() {
   
    double n1,n2,n3,media;

    printf("Insira a primeira nota:\n");
    scanf("%lf",&n1);
    printf("-----------------------------\n");

    printf("Insira a segunda nota:\n");
    scanf("%lf",&n2);
    printf("-----------------------------\n");

    printf("Insira a terceira nota:\n");
    scanf("%lf",&n3);
    printf("-----------------------------\n");

    system("pause");
    system("cls");

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5))/(2+3+5);


    printf("Media Final: %2.lf\n",media);







    return 0;
}
