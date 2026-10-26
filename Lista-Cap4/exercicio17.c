//Questão 17

#include <stdio.h>

int main(){
    float valor_total, valor_final, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_total);

    printf("Opcoes de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros");
    printf("\nDigite a opcao desejada (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor_final = valor_total * 0.90;
            comissao = valor_final * 0.05;
            printf("\nPagamento A Vista:\n");
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        case 2:
            valor_final = valor_total / 3.0;
            comissao = valor_total * 0.05;
            printf("\nPagamento Parcelado em 3x:\n");
            printf("Valor de cada parcela (3x): R$ %.2f\n", valor_final);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        default:
            printf("\nErro: Opcao de pagamento invalida!\n");
    } 
    return 0;
}