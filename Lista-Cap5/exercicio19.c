// Questão 19

#include <stdio.h>

// Versão 1: Contagem Regressiva (n até 1)
void contagem(int n) {
    // Caso Base
    if (n <= 0) {
        printf("Fogo!\n");
        return;
    }

    // O printf ocorre ANTES da chamada recursiva
    printf("%d\n", n);
    contagem(n - 1); // Passo Recursivo
}

// Versão 2: Contagem Crescente (1 até n)
void contagemCrescente(int n) {
    // Caso Base
    if (n <= 0) {
        return;
    }

    // A chamada recursiva ocorre ANTES do printf
    contagemCrescente(n - 1); // Passo Recursivo
    printf("%d\n", n);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O numero deve ser estritamente positivo!\n");
        return 1;
    }

    printf("\n--- CONTAGEM REGRESSIVA ---\n");
    contagem(n);

    printf("\n--- CONTAGEM CRESCENTE ---\n");
    contagemCrescente(n);
    printf("Fogo!\n");

    return 0;
}