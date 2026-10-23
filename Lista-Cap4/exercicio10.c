//Questão 10

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // a) Análise de Paridade
    if (numero % 2 == 0) {
        printf("O numero %d --> PAR.\n", numero);
    } else {
        printf("O numero %d --> IMPAR.\n", numero);
    }

    // b) Análise de Sinal
    if (numero > 0) {
        printf("O numero %d --> POSITIVO.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d --> NEGATIVO.\n", numero);
    } else {
        printf("O numero --> ZERO.\n");
    }

    return 0;
}