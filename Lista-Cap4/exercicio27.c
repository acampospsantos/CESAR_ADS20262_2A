//Questão 27

#include <stdio.h>

int main() {
    int horas;
    float total = 0.0;

    printf("Digite a quantidade de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: A quantidade de horas deve ser maior que zero!\n");
        return 1;
    }

    if (horas <= 2) {
        // Até 2 horas: R$ 2,00 por hora
        total = horas * 2.00;
    } else if (horas <= 4) {
        // Primeiras 2 horas (2 * R$ 2,00 = R$ 4,00) + R$ 2,50 por hora excedente
        total = 4.00 + (horas - 2) * 2.50;
    } else {
        // Primeiras 2 horas (R$ 4,00) + 3ª e 4ª horas (2 * R$ 2,50 = R$ 5,00) + R$ 3,00 por hora excedente
        total = 4.00 + 5.00 + (horas - 4) * 3.0;
    }

    printf("\n--- TICKET DE ESTACIONAMENTO ---\n");
    printf("Tempo total de permanencia: %d hora(s)\n", horas);
    printf("Valor total cobrado: R$ %.2f\n", total);

    return 0;
}