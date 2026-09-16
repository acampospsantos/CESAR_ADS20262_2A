//Questão 28

#include <stdio.h>

int main() {
    float horas_normais;
    float horas_extras;
    
    float salario_bruto;
    float valor_tributavel;
    float imposto;
    float salario_liquido;

    const float TAXA_HORA_NORMAL = 10.0;
    const float TAXA_HORA_EXTRA = 15.0;
    const float LIMITE_ISENCAO = 12000.0;
    const float ALIQUOTA_IMPOSTO = 0.10; // 10%

    printf("--- CALCULADORA DE SALARIO ANUAL E IMPOSTO (IF/ELSE) ---\n\n");

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    // a) Calculo do Salario Bruto Anual
    salario_bruto = (horas_normais * TAXA_HORA_NORMAL) + (horas_extras * TAXA_HORA_EXTRA);

    // b) Calculo do Imposto Progressivo - trabalhador é isento de imposto para salários até R$12.000,00 anuais
    if (salario_bruto > LIMITE_ISENCAO) {
        valor_tributavel = salario_bruto - LIMITE_ISENCAO;

        //Paga 10% de imposto retido sobre o valor que exceder essa faixa de isenção.
        imposto = valor_tributavel * ALIQUOTA_IMPOSTO;
        salario_liquido = salario_bruto - imposto;
    } else {
        valor_tributavel = 0.0;
        imposto = 0.0;
        salario_liquido = salario_bruto;
    }

    printf("\n--- DEMONSTRATIVO ANUAL ---\n");
    printf("Salario Bruto Anual: R$ %.2f\n", salario_bruto);
    printf("Faixa Isenta:        R$ %.2f\n", LIMITE_ISENCAO);
    printf("Base Tributavel:     R$ %.2f\n", valor_tributavel);
    printf("Imposto Devido (10%%): R$ %.2f\n", imposto);
    printf("-----------------------------------\n");
    printf("Salario Liquido Anual: R$ %.2f\n", salario_liquido);

    return 0;
}