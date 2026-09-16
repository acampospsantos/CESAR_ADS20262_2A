//Questão 17

#include <stdio.h>

// Definicao da constante PI conforme pede a questao
#define PI 3.141593

int main() {
    float raio;
    float area;
    float circunferencia;

    printf("--- GEOMETRIA DO CIRCULO ---\n\n");

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calculo da Area: A = PI * R^2
    area = PI * (raio * raio);

    // Calculo da Circunferencia: C = 2 * PI * R
    circunferencia = 2.0 * PI * raio;

    // Exibicao dos resultados formatados com duas casas decimais
    printf("\n--- RESULTADOS ---\n");
    printf("Raio informado: %.2f\n", raio);
    printf("Area do circulo: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
    
    return 0;
}