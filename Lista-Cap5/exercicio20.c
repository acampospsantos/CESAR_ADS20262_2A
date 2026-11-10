// Questão 20

#include <stdio.h>

// Função que verifica se um número é primo (1 = Sim, 0 = Não)
int ehPrimo(int n) {
    if (n <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Se for divisível por qualquer número no intervalo, não é primo
        }
    }

    return 1; // Se passar por todos os testes, é primo
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // a) Verificação individual do número digitado
    if (ehPrimo(numero)) {
        printf("O numero %d E PRIMO.\n", numero);
    } else {
        printf("O numero %d NAO e primo.\n", numero);
    }

    // b) Impressão de todos os primos no intervalo de 1 a 50
    printf("\n--- Numeros Primos de 1 ate 50 ---\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}