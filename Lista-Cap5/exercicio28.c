//Questão 28

#include <stdio.h>

// Calcula o valor bruto da compra (preço * quantidade)
float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

// Aplica 10% de desconto caso a opção seja 1 (À vista)
float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

// Calcula a diferença entre o valor pago e o total final
float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float preco, pago, subtotal, total, troco;
    int quantidade, opcaoPagamento;

    printf("--- CAIXA DE MERCADINHO ---\n");
    printf("Digite o preco unitario do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("\nForma de Pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Cartao / Prazo (sem desconto)\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcaoPagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("\nSubtotal:      R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("\nDigite o valor pago pelo cliente: R$ ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("\nErro: Valor pago insuficiente! Faltam R$ %.2f\n", total - pago);
        return 1;
    }

    troco = calculaTroco(total, pago);
    printf("Troco:         R$ %.2f\n", troco);

    return 0;
}