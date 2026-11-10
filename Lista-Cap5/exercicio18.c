//Questão 18

#include <stdio.h>

// Função recursiva para calcular base^expoente
long potencia(int base, int expoente) {
    // Caso Base: qualquer número elevado a 0 é igual a 1
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1); // Passo Recursivo: base^expoente = base * base^(expoente - 1)
    }
}

int main() {
    int base, expoente;

    printf("Digite a base (inteiro): ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    // Validação do expoente
    if (expoente < 0) {
        printf("Erro: O expoente nao pode ser negativo!\n");
        return 1;
    }

    int resultado = potencia(base, expoente);

    printf("%d elevado a %d = %ld\n", base, expoente, resultado);

    return 0;
}