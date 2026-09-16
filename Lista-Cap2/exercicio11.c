//Questão 11

#include <stdio.h>

// Definicao da constante PI conforme solicitado
#define PI 3.141593

int main() {
    float graus;
    float radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    // Fórmula de conversão: radianos = graus * (PI / 180.0)
    radianos = graus * (PI / 180.0);

    // Exibição dos resultados formatados
    printf("\n--- CONVERSAO DE ANGULO ---\n");
    printf("Angulo em Graus: %.2f°\n", graus);
    printf("Angulo em Radianos: %.6f rad\n", radianos);

    return 0;
}