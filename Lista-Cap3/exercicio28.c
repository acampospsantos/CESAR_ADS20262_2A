//Questão 28

#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("\n=== SISTEMA DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o salario atual (R$): ");
                scanf("%f", &salario);

                if (salario <= 2000.0) {
                    novo_salario = salario * 1.15; // 15% de aumento
                } else {
                    novo_salario = salario * 1.10; // 10% de aumento
                }

                printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\nDigite o salario atual (R$): ");
                scanf("%f", &salario);

                if (salario <= 3000.0) {
                    desconto = salario * 0.08; // 8% de desconto
                } else {
                    desconto = salario * 0.15; // 15% de desconto
                }
                salario = salario - desconto;

                printf("Desconto do Imposto de Renda: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario);
                break;

            case 3:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}