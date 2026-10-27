//Questão 28

#include <stdio.h>

int main() {
    int opcao;

    printf("--- SISTEMA DE ATENDIMENTO BANCARIO (SAC) ---\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n[SAC] Redirecionando para a Consulta de Saldo...\n");
            break;
        case 2:
            printf("\n[SAC] Gerando o seu Extrato Bancario...\n");
            break;
        case 3:
            printf("\n[SAC] Iniciando o modulo de Transferencia...\n");
            break;
        case 4:
            printf("\n[SAC] Aguarde um momento. Conectando com um de nossos atendentes...\n");
            break;
        default:
            printf("\nErro: Opcao Invalida! Por favor, escolha um numero de 1 a 4.\n");
    }

    return 0;
}