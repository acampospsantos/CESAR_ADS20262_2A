//Questão 14

#include <stdio.h>

int main() {
    // Acumulador global para a soma dos quadrados
    // Usamos long long int para prevenir estouros de memoria
    long long int soma_quadrados = 0;

    printf("   SEQUENCIA DE NUMEROS E QUADRADOS   \n");
    printf("=======================================\n");
    printf("%-10s | %-15s\n", "Numero", "Quadrado");
    printf("---------------------------------------\n");

    for (int i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        soma_quadrados = soma_quadrados + quadrado;

        printf("%-10d | %-15lld\n", i, quadrado);
    }
    printf("\nSoma total dos quadrados = %lld\n", soma_quadrados);
    return 0;
}