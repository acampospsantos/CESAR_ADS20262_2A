//Questão 23

#include <stdio.h>

// Versão 1: Macro sem parênteses de proteção (comportamento incorreto para expressões)
#define DOBRO_ERRADO(x) x * 2

// Versão 2: Macro corrigida com parênteses de proteção
#define DOBRO_CORRETO(x) ((x) * 2)

// Função comum em C
int dobro(int x) {
    return x * 2;
}

int main() {
    printf("--- TESTE 1: Macro sem parenteses vs Funcao ---\n");
    printf("Macro DOBRO_ERRADO(2+3): %d\n", DOBRO_ERRADO(2+3));
    printf("Funcao dobro(2+3):       %d\n", dobro(2+3));

    /*
     * POR QUE OS RESULTADOS DIFEREM?
     * 
     * 1. Macro DOBRO_ERRADO(2+3): O pré-processador faz substituição textual 
     *    direta antes da compilação, transformando a chamada em: 2 + 3 * 2.
     *    Pela precedência de operadores em C, a multiplicação ocorre antes da soma:
     *    3 * 2 = 6 -> 2 + 6 = 8.
     * 
     * 2. Função dobro(2+3): Em chamadas de função, o argumento (2 + 3) é 
     *    totalmente avaliado (resultando em 5) ANTES de ser passado para o 
     *    parâmetro 'x'. Dentro da função, calcula-se 5 * 2 = 10.
     */

    printf("\n--- TESTE 2: Macro corrigida com parenteses ---\n");
    printf("Macro DOBRO_CORRETO(2+3): %d\n", DOBRO_CORRETO(2+3));

    return 0;
}