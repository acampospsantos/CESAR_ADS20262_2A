// Questão 19

#include <stdio.h>

int main() {
    int n;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Digite o termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero positivo maior que zero.\n");
        return 1;
    }

    printf("\nSequencia de Fibonacci ate o %dº termo:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", t1);
            continue;
        }
        if (i == 2) {
            printf(", %lld", t2);
            continue;
        }

        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;

        printf(", %lld", proximo);
    }

    if (n == 1) {
        printf("\n\nO 1o termo da sequencia de Fibonacci e: %lld\n", t1);
    } else {
        printf("\n\nO %do termo da sequencia de Fibonacci e: %lld\n", n, t2);
}
    return 0;
}