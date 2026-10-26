//Questão 25

#include <stdio.h>

int main() {
    int valor_pago, valor_total, troco;
    int nota100, nota50, nota20, nota10, nota5, nota2;

    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valor_total);

    printf("Digite o valor fornecido pelo cliente: R$ ");
    scanf("%d", &valor_pago);

    if (valor_pago < valor_total) {
        printf("\nErro: Valor fornecido insuficiente para efetuar o pagamento!\n");
        return 1;
    }

    troco = valor_pago - valor_total;
    printf("\nTroco total: R$ %d\n", troco);

    if (troco == 0) {
        printf("Nao ha troco a ser devolvido.\n");
        return 0;
    }

    // Decomposição
    nota100 = troco / 100;
    troco = troco % 100;

    nota50 = troco / 50;
    troco = troco % 50;

    nota20 = troco / 20;
    troco = troco % 20;

    nota10 = troco / 10;
    troco = troco % 10;

    nota5 = troco / 5;
    troco = troco % 5;

    nota2 = troco / 2;
    troco = troco % 2;

    printf("\n--- Decomposicao de Cedulas ---\n");
    if (nota100 > 0){
        printf("Notas de R$ 100: %d\n", nota100);
    }
    if (nota50 > 0){
        printf("Notas de R$ 50:  %d\n", nota50);
    }
    if (nota20 > 0){
        printf("Notas de R$ 20:  %d\n", nota20);
    }
    if (nota10 > 0){
        printf("Notas de R$ 10:  %d\n", nota10);
    }
    if (nota5 > 0){
        printf("Notas de R$ 5:   %d\n", nota5);
    }
    if (nota2 > 0){
        printf("Notas de R$ 2:   %d\n", nota2);
    }
    if (troco > 0) {
        printf("Sobras nao conversiveis em cedulas disponiveis: R$ %d\n", troco);
    }

    return 0;
}