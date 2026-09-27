// Questão 18

#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero = numero / 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}