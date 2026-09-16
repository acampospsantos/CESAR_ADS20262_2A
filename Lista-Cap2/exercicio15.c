//Questão 15

#include <stdio.h>

int main() {
    float n1, n2, n3, n4; //notas
    float media_simples;
    float media_ponderada;

    printf("--- CALCULADORA DE MEDIAS ESCOLARES ---\n\n");

    printf("Digite a nota da Prova 1: ");
    scanf("%f", &n1);

    printf("Digite a nota da Prova 2: ");
    scanf("%f", &n2);

    printf("Digite a nota da Prova 3: ");
    scanf("%f", &n3);

    printf("Digite a nota da Prova 4: ");
    scanf("%f", &n4);

    // a) Media Aritmética Simples: soma das notas dividida pelo total de notas (4)
    media_simples = (n1 + n2 + n3 + n4) / 4.0;

    // b) Media Ponderada: (n1*1 + n2*1 + n3*2 + n4*2) / (1 + 1 + 2 + 2)
    // A soma dos pesos e 1 + 1 + 2 + 2 = 6 --> (denominador)
    media_ponderada = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;

    // Exibição dos resultados formatados com duas casas decimais
    printf("\n--- RESULTADOS FINAL ---\n");
    printf("a) Media Aritmetica Simples = %.2f\n", media_simples);
    printf("b) Media Ponderada (Pesos 1, 1, 2, 2) = %.2f\n", media_ponderada);

    return 0;
}