//Questão 26

#include <stdio.h>

int main() {
    float comprimento;
    float largura;
    float preco_metro;
    
    float perimetro;
    float metros_totais_arame;
    float custo_total;

    const float FIOS_DE_ARAME = 3.0;

    printf("--- ORCAMENTO PARA CERCAMENTO DE TERRENO ---\n\n");

    printf("Digite o comprimento do terreno (metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (metros): ");
    scanf("%f", &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    // 1. Perimetro do terreno retangular: P = 2 * (comprimento + largura)
    perimetro = 2.0 * (comprimento + largura);

    // 2. Total de arame: perimetro multiplicado pelo numero de voltas (3 fios)
    metros_totais_arame = perimetro * FIOS_DE_ARAME;

    // 3. Custo final: metros totais de arame * preco por metro
    custo_total = metros_totais_arame * preco_metro;

    printf("\n--- RESUMO DO ORCAMENTO ---\n");
    printf("Perimetro do terreno: %.2f metros\n", perimetro);
    printf("Total de arame necessario (3 fios): %.2f metros\n", metros_totais_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}