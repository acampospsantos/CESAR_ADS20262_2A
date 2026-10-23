// Questão 13

#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Selecione a operacao (+, -, *, /, ^): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2f ^ %.2f = %.2f\n", num1, num2, resultado);
            break;

        default:
            printf("Erro: Operacao invalida!\n");
    }

    return 0;
}