// Questão 19

#include <stdio.h>

int main() {
    int dias_trabalhados;
    float taxa_diaria = 30.0;
    float percentual_imposto = 0.08;
    float valor_bruto;
    float valor_imposto;
    float valor_liquido;

    printf("--- CALCULADORA DE SALARIO - ENCANADOR ---\n\n");
    printf("Digite o numero de dias trabalhados: ");
    
    scanf("%d", &dias_trabalhados);
    // Calculo do valor bruto (R$ 30,00 por dia)
    valor_bruto = (float)dias_trabalhados * taxa_diaria;

    // Calculo do desconto de 8% de imposto de renda
    valor_imposto = valor_bruto * percentual_imposto;

    // Valor liquido final
    valor_liquido = valor_bruto - valor_imposto;

    // Exibicao dos resultados formatados com duas casas decimais
    printf("\n--- DEMONSTRATIVO DE PAGAMENTO ---\n");
    printf("Dias trabalhados: %d\n", dias_trabalhados);
    printf("Valor Bruto: R$ %.2f\n", valor_bruto);
    printf("Desconto Imposto de Renda (%.2f): R$ %.2f\n", percentual_imposto, valor_imposto);
    printf("Valor Liquido a Receber: R$ %.2f\n", valor_liquido);

    return 0;
}