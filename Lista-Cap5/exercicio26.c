//Questão 26

#include <stdio.h>

// Função recursiva que retorna o n-ésimo termo da sequência de Fibonacci
long fibonacci(int n) {
    // Casos Base: F(0) = 0 e F(1) = 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Passo Recursivo: F(n) = F(n - 1) + F(n - 2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int termos;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &termos);

    if (termos <= 0) {
        printf("Erro: Digite uma quantidade maior que zero!\n");
        return 1;
    }

    printf("\nSequencia de Fibonacci (%d termos):\n", termos);
    for (int i = 0; i < termos; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    /*
     * POR QUE A VERSÃO RECURSIVA SE TORNA LENTA PARA VALORES GRANDES DE N?
     *
     * 1. Recálculo de Subproblemas (Sobreposição): A cada chamada de fibonacci(n),
     *    a função dispara DUAS novas chamadas recursivas: fibonacci(n - 1) e 
     *    fibonacci(n - 2). Isso gera uma árvore binária de chamadas onde os mesmos
     *    valores são recalculados repetidas vezes do zero (ex: para calcular F(5),
     *    F(3) é calculado 2 vezes, F(2) é calculado 3 vezes, F(1) é calculado 5 vezes).
     *
     * 2. Complexidade Exponencial O(2^n): Como o número de chamadas praticamente
     *    dobra a cada incremento de n, o tempo de processamento cresce de forma
     *    explosiva. Enquanto F(10) exige 177 chamadas, F(40) exige mais de 330 milhões
     *    de chamadas na pilha de execução.
     */

    return 0;
}