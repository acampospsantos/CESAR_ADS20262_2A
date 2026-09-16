//Questão 10

#include <stdio.h>

int main(void) {
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Formulas de conversao utilizando literais de ponto flutuante (9.0 / 5.0) - Evitar Truncamento
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    kelvin = celsius + 273.15;

    // Exibição dos resultados com duas casas decimais
    printf("\n--- TEMPERATURAS CONVERTIDAS ---\n");
    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    return 0;
}