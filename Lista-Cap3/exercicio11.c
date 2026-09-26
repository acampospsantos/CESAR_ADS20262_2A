// Questão 11

#include <stdio.h>

int main() {
    int a, b;

    printf("--- INTERVALO NUMERICO DINAMICO ---\n\n");
    printf("Digite o primeiro numero (A): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (B): ");
    scanf("%d", &b);

    printf("\nIntervalo de %d ate %d: ", a, b);

    // Se A <= B -> Ordem Crescente
    if (a <= b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } 
    // Se A > B -> Ordem Decrescente
    else { // a > b
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}