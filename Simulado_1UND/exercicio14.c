// Questão 14

#include <stdio.h>

int main() {
    const int SENHA_CORRETA = 2026;
    const int LIMITE_TENTATIVAS = 3;
    
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0; // Controle do estado de acesso (0 = Negado, 1 = Concedido)

    printf("--- SISTEMA DE AUTENTICACAO ---\n\n");

    while (tentativas < LIMITE_TENTATIVAS) {
        tentativas = tentativas + 1;
        printf("Tentativa %d de %d. Digite a senha numerica: ", tentativas, LIMITE_TENTATIVAS);
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_CORRETA) {
            acesso_concedido = 1;
            break; // Encerra o laco imediatamente ao acertar
        } else {
            if (tentativas < LIMITE_TENTATIVAS) {
                printf("[ERRO] Senha incorreta! Tente novamente.\n\n");
            }
        }
    }

    // Verificacao final
    if (acesso_concedido) {
        printf("--- ACESSO CONCEDIDO! ---\n");
    } else {
        printf("--- CONTA BLOQUEADA POR SEGURANCA! ---\n");
    }
    return 0;
}