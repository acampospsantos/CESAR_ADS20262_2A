// Questão 8

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano (inteiro e positivo): ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d e BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NAO e bissexto.\n", ano);
    }

    return 0;
}