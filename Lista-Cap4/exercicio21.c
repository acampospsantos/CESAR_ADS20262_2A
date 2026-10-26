//Questão 21

#include <stdio.h>

int main() {
    float salario_atual, aumento, novo_salario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario_atual);

    printf("\nCargos:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Digite o codigo do cargo (1, 2 ou 3): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario_atual <= 3000.0) {
                aumento = salario_atual * 0.15;
            } else {
                aumento = salario_atual * 0.10;
            }
            break;

        case 2:
            if (salario_atual <= 5000.0) {
                aumento = salario_atual * 0.10;
            } else {
                aumento = salario_atual * 0.05;
            }
            break;

        case 3:
            aumento = salario_atual * 0.08;
            break;

        default:
            printf("\nErro: Codigo de cargo invalido!\n");
            return 1;
    }

    novo_salario = salario_atual + aumento;

    printf("\n--- REAJUSTE SALARIAL ---\n");
    printf("Salario atual: R$ %.2f", salario_atual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}