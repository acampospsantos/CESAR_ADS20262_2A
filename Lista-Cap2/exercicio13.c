//Questão 13

#include <stdio.h>

int main() {
    float lado;
    float baseRetangulo, alturaRetangulo; 
    float baseTriangulo, alturaTriangulo; 
    float area_quadrado, area_retangulo, area_triangulo;

    printf("--- CALCULADORA DE AREAS DE FIGURAS PLANAS ---\n\n");

    // a) Leitura e cálculo para o Quadrado
    printf("1. QUADRADO:\n");
    printf("Digite a medida do lado (L): ");
    scanf("%f", &lado);
    area_quadrado = lado * lado;

    // b) Leitura e cálculo para o Retângulo
    printf("\n2. RETÂNGULO:\n");
    printf("Digite a medida da base (B): ");
    scanf("%f", &baseRetangulo);
    printf("Digite a medida da altura (H): ");
    scanf("%f", &alturaRetangulo);
    area_retangulo = baseRetangulo * alturaRetangulo;

    // c) Leitura e cálculo para o Triângulo Retângulo
    printf("\n3. TRIÂNGULO RETÂNGULO:\n");
    printf("Digite a medida da base (B): ");
    scanf("%f", &baseTriangulo);
    printf("Digite a medida da altura (H): ");
    scanf("%f", &alturaTriangulo);
    
    area_triangulo = (baseTriangulo * alturaTriangulo) / 2.0;

    // Exibição formatada dos resultados
    printf("\n--- RESULTADOS DAS AREAS ---\n");
    printf("a) Area do Quadrado (L = %.2f): %.2f\n", lado, area_quadrado);
    printf("b) Area do Retangulo (B = %.2f, H = %.2f): %.2f\n", baseRetangulo, alturaRetangulo, area_retangulo);
    printf("c) Area do Triangulo Retangulo (B = %.2f, H = %.2f): %.2f\n", baseTriangulo, alturaTriangulo, area_triangulo);

    return 0;
}