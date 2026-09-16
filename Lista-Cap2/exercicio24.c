//Questão 24

#include <stdio.h>

int main() {
    float vel_kmh;
    float vel_ms;
    const float FATOR_CONVERSAO = 3.6f;

    printf("--- CONVERSOR DE VELOCIDADE (km/h -> m/s) ---\n\n");
    printf("Digite a velocidade em km/h: ");

    scanf("%f", &vel_kmh);
    // Conversao: m/s = km/h / 3.6
    vel_ms = vel_kmh / FATOR_CONVERSAO;

    printf("\n--- RESULTADO ---\n");
    printf("Velocidade informada: %.2f km/h\n", vel_kmh);
    printf("Velocidade convertida: %.2f m/s\n", vel_ms);

    return 0;
}