// Questão 19

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo (A B C): ");
    scanf("%f %f %f", &a, &b, &c);

    // Verificação da Condição de Existência
    if (a < b + c && b < a + c && c < a + b) {
        // Classificação quanto aos lados
        if (a == b && b == c) { //a == c
            printf("Triangulo EQUILATERO\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo ISOSCELES\n");
        } else {
            printf("Triangulo ESCALENO\n"); //Todos os lados diferentes
        }
    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}