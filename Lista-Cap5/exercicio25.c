//Questão 25

#include <stdio.h>

// Algoritmo de Euclides recursivo para calcular o Máximo Divisor Comum (MDC)
int mdc(int a, int b) {
    // Caso Base: quando o resto da divisão (b) chega a 0, o MDC é 'a'
    if (b == 0) {
        return a;
    }

    // Passo Recursivo: mdc(a, b) = mdc(b, resto da divisão de a por b)
    return mdc(b, a % b);
}

// Procedimento que simplifica e imprime a fração usando o MDC
void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    int num_simplificado = num / divisor;
    int den_simplificado = den / divisor;

    printf("Fracao original:     %d/%d\n", num, den);
    printf("Fracao simplificada: %d/%d\n", num_simplificado, den_simplificado);
}

int main() {
    int num, den;

    printf("Digite o numerador (inteiro positivo): ");
    scanf("%d", &num);

    printf("Digite o denominador (inteiro positivo): ");
    scanf("%d", &den);

    if (num <= 0 || den <= 0) {
        printf("Erro: Ambos os valores devem ser inteiros positivos!\n");
        return 1;
    }

    printf("\nMDC(%d, %d) = %d\n\n", num, den, mdc(num, den));
    simplifica(num, den);

    return 0;
}