#include <stdio.h>

int main() {
    int N;
    printf("Digite um número de 0 a 10: ");
    scanf("%d", &N);

    if (N == 0) {
        printf("*\n");
        printf("*\n");
    } else if (N == 1) {
        printf("I\n");
        printf("*\n");
    } else if (N == 2) {
        printf("II\n");
        printf("*\n");
    } else if (N == 3) {
        printf("III\n");
        printf("*\n");
    } else if (N == 4) {
        printf("IIII\n");
        printf("*\n");
    } else if (N == 5) {
        printf("IIIII\n");
        printf("*\n");
    } else if (N == 6) {
        printf("IIIII\n");
        printf("I\n");
    } else if (N == 7) {
        printf("IIIII\n");
        printf("II\n");
    } else if (N == 8) {
        printf("IIIIIIIIII\n");
        printf("III\n");
    } else if (N == 9) {
        printf("IIIIIIIIIII\n");
        printf("IIII\n");
    } else if (N == 10) {
        printf("IIIIIIIIIII\n");
        printf("IIIII\n");
    } else {
        printf("Número fora do intervalo de 0 a 10.\n");
    }

    return 0;
}
