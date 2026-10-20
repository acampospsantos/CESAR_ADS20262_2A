#include <stdio.h>

int main() {
    int numero;

    printf("Digite o um numero: ");
    scanf("%d", &numero);

     // O printf agora recebe e exibe a string retornada pelo ternário
    printf ((numero%2==0) ? "Par" : "Impar");

    return 0;
}