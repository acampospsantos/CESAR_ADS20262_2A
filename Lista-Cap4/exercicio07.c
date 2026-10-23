//Questão 7

#include <stdio.h>
#include <math.h>

int main() {
    float valorX;

    printf("Digite um numero real: ");
    scanf("%f", &valorX);

    if (valorX >= 0) {
        printf("Raiz quadrada de %.2f: %.2f\n", valorX, sqrt(valorX));
    } else {
        printf("Quadrado de %.2f: %.2f\n", valorX, valorX * valorX);
    }

    return 0;
}