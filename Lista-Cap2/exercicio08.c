// 📚 Questão 08

#include <stdio.h>

int main() {
    int numero;
    int quadrado;
    float decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); 
    // a) Calculo do quadrado 
    quadrado = numero * numero;

    // b) Calculo da decima parte garantindo divisao em ponto flutuante
    // OBS: O uso do ponto flutuante 10.0 força a conversao implícita 
    decima_parte = numero / 10.0;

    // Exibição dos resultados
    printf("a) Quadrado de %d = %d\n", numero, quadrado);
    printf("b) Decima parte de %d = %.2f\n", numero, decima_parte); //precisão de duas casas

    return 0;
}