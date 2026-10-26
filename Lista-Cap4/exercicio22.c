//Questão 22

#include <stdio.h>

int main() {
    float valor_produto, preco_final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_produto);

    printf("\nEstados de Destino:\n");
    printf("1 - MG (7%%)\n");
    printf("2 - SP (12%%)\n");
    printf("3 - RJ (15%%)\n");
    printf("4 - MS (8%%)\n");
    
    printf("Digite o codigo do estado de destino (1 a 4): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            preco_final = valor_produto * 1.07;
            break;
        case 2:
            preco_final = valor_produto * 1.12;
            break;
        case 3:
            preco_final = valor_produto * 1.15;
            break;
        case 4:
            preco_final = valor_produto * 1.08;
            break;
        default:
            printf("\nErro: Codigo de estado invalido!\n");
            return 1;
    }

    printf("\nPreco final com imposto: R$ %.2f\n", preco_final);

    return 0;
}