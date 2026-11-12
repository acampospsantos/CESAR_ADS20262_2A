//Questão 21 ==> REFAZER ANTES DA PROVA

#include <stdio.h>

// Definição das macros utilitárias com parênteses de proteção
#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\n--- RESULTADOS ---\n");
    printf("Quadrado de %d: %d\n", num1, SQR(num1));
    printf("Quadrado de %d: %d\n", num2, SQR(num2));
    printf("Maior valor: %d\n", MAX(num1, num2));
    printf("Menor valor: %d\n", MIN(num1, num2));

    return 0;
}