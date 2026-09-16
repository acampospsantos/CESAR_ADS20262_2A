//Questão 18

#include <stdio.h>

// Definicao da constante PI conforme exigido
#define PI 3.141593

int main() {
    float raio;
    float area_superficie;
    float volume;

    printf("--- GEOMETRIA DA ESFERA ---\n\n");
    printf("Digite o valor do raio da esfera: ");

    scanf("%f", &raio);
    
    // Area de superficie: A = 4 * PI * R^2
    area_superficie = 4.0 * PI * (raio * raio);

    // Volume: V = (4.0 / 3.0) * PI * R^3
    // O uso de 4.0 / 3.0 previne o truncamento da divisao inteira
    volume = (4.0 / 3.0) * PI * (raio * raio * raio);

    // Exibicao dos resultados formatados
    printf("\n--- RESULTADOS ---\n");
    printf("Raio informado: %.2f\n", raio);
    printf("Area da Superficie: %.2f\n", area_superficie);
    printf("Volume da Esfera: %.2f\n", volume);

    return 0;
}