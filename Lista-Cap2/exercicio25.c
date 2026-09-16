//Questão 25

#include <stdio.h>

int main() {
    float salario_base;
    float gratificacao;
    float imposto;
    float salario_liquido;

    const float PERCENTUAL_GRATIFICACAO = 0.05; // 5%
    const float PERCENTUAL_IMPOSTO = 0.07;      // 7%

    printf("--- CALCULADORA DE SALARIO LIQUIDO ---\n\n");
    
    printf("Digite o salario-base do funcionario (R$): ");

    scanf("%f", &salario_base);
    // Calculo das parcelas sobre o salario-base
    gratificacao = salario_base * PERCENTUAL_GRATIFICACAO;
    imposto = salario_base * PERCENTUAL_IMPOSTO;

    // Salario liquido = base + adicional - desconto
    salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- DEMONSTRATIVO DE PAGAMENTO ---\n");
    printf("Salario-Base:          R$ %.2f\n", salario_base);
    printf("(+) Gratificacao (5%%):  R$ %.2f\n", gratificacao);
    printf("(-) Imposto (7%%):       R$ %.2f\n", imposto);
    printf("-----------------------------------\n");
    printf("Salario Liquido:       R$ %.2f\n", salario_liquido);

    return 0;
}