//Questão 14

#include <stdio.h>
#include <math.h> // Necessaria para a funcao sqrt() --> calculo raiz

int main() {
    float a, b, c;
    float p; // Semi-perimetro
    float area;

    printf("--- CALCULADORA DE AREA (FORMULA DE HERON) ---\n\n");
    printf("Digite o valor do lado 'a': ");
    scanf("%f", &a);

    printf("Digite o valor do lado 'b': ");
    scanf("%f", &b);

    printf("Digite o valor do lado 'c': ");
    scanf("%f", &c);

    // Calculo do semi-perimetro p = (a + b + c) / 2.0
    p = (a + b + c) / 2.0;

    // Aplicação da Fórmula de Heron
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    // Exibicao dos resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}