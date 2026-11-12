//Questão 24

#include <stdio.h>

// Comente a linha abaixo para desativar os logs de depuração (modo produção)
#define DEBUG

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;

        #ifdef DEBUG
            printf("[DEBUG] Iteracao %d: soma parcial = %d\n", i, soma);
        #endif
    }

    return soma;
}

int main() {
    int n, resultado;

    printf("Digite um numero inteiro positivo (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: Digite um valor maior que zero.\n");
        return 1;
    }

    resultado = somaAteN(n);

    printf("\nSoma total de 1 ate %d = %d\n", n, resultado);

    /*
     * DOCUMENTAÇÃO DA DIFERENÇA DE COMPORTAMENTO:
     * 
     * 1. COM #define DEBUG ativo (descomentado):
     *    - Durante o pré-processamento, a diretiva #ifdef DEBUG é verdadeira.
     *    - O comando printf("[DEBUG]...") é mantido no código-fonte e compilado.
     *    - Ao executar (ex: n = 4), o console exibe o passo a passo de cada iteração:
     *      [DEBUG] Iteracao 1: soma parcial = 1
     *      [DEBUG] Iteracao 2: soma parcial = 3
     *      [DEBUG] Iteracao 3: soma parcial = 6
     *      [DEBUG] Iteracao 4: soma parcial = 10
     *      Soma total de 1 ate 4 = 10
     * 
     * 2. SEM #define DEBUG (linha comentada ou removida):
     *    - Durante o pré-processamento, a diretiva #ifdef DEBUG é falsa.
     *    - Todo o bloco até o #endif é completamente descartado antes da compilação,
     *      não gerando nenhuma instrução no executável final (zero impacto de desempenho).
     *    - Ao executar (ex: n = 4), o console exibe apenas a saída final limpa:
     *      Soma total de 1 ate 4 = 10
     */

    return 0;
}