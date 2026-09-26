//Questão 13

#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1LL; 

    printf("--- CALCULADORA DE FATORIAL (N!) ---\n\n");
    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &n);

    // Tratamento de entrada invalida (numeros negativos)
    if (n < 0) {
        printf("\n[ERRO] Nao existe fatorial de numero negativo em inteiros.\n");
    } else {
        for (int i = n; i >= 1; i--) {
            fatorial = fatorial * i;
        }
        printf("\nO fatorial de %d! = %lld\n", n, fatorial);
    }

    return 0;
}