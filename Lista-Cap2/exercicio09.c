//Questão 09

#include <stdio.h>

int main() {
    int numero1, numero2;

    // Leitura dos dois numeros inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Calculo direto das quatro operacoes basicas:
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    
    // Cast explicito (double) para evitar o truncamento da divisao inteira
    float divisao = (float)numero1 / (float)numero2;

    // Exibicao formatada dos resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao real: %.2f\n", divisao);

    return 0;
}

/*
 * SOBRE A DIVISÃO POR ZERO:
 * Matematicamente e de forma preventiva na programação, a divisão por zero é evitada
 pondo uma condicional para verificar se o divisor é diferente de zero antes de efetuar o cálculo.
 * Exemplo:
 * if (numero2 != 0) {
 *     double divisao = (double)numero1 / numero2;
 *     printf("Divisao real: %.2f\n", divisao);
 * } else {
 *     printf("Erro: Indeterminação\n");
 * }
 */