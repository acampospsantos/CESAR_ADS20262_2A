//Questão 22

#include <stdio.h>
#include "exercicio22.h"

int main() {
    float raio, base, alt;

    // Área do Círculo
    printf("--- AREA DO CIRCULO ---\n");
    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("Area do circulo: %.2f\n\n", A_CIRC(raio));

    // Área do Retângulo
    printf("--- AREA DO RETANGULO ---\n");
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &alt);
    printf("Area do retangulo: %.2f\n\n", A_RET(base, alt));

    // Área do Triângulo
    printf("--- AREA DO TRIANGULO ---\n");
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &alt);
    printf("Area do triangulo: %.2f\n", A_TRI(base, alt));

    return 0;
}