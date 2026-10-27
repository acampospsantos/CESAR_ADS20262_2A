//Questão 26

#include <stdio.h>

int main() {
    int mes, ano, bissexto;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: Mes invalido!\n");
        return 1;
    }

    // Regra do Ano Bissexto: divisível por 400 OU (divisível por 4 E NÃO por 100)
    //0 - Falso
    //1 - Verdadeiro
    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    switch (mes) {
        case 1:
            printf("Janeiro possui 31 dias.\n");
            break;
        case 2:
            if (bissexto) {
                printf("Fevereiro possui 29 dias (Ano Bissexto).\n");
            } else {
                printf("Fevereiro possui 28 dias.\n");
            }
            break;
        case 3:
            printf("Marco possui 31 dias.\n");
            break;
        case 4:
            printf("Abril possui 30 dias.\n");
            break;
        case 5:
            printf("Maio possui 31 dias.\n");
            break;
        case 6:
            printf("Junho possui 30 dias.\n");
            break;
        case 7:
            printf("Julho possui 31 dias.\n");
            break;
        case 8:
            printf("Agosto possui 31 dias.\n");
            break;
        case 9:
            printf("Setembro possui 30 dias.\n");
            break;
        case 10:
            printf("Outubro possui 31 dias.\n");
            break;
        case 11:
            printf("Novembro possui 30 dias.\n");
            break;
        case 12:
            printf("Dezembro possui 31 dias.\n");
            break;
    }

    return 0;
}