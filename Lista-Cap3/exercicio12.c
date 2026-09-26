// Questão 12

#include <stdio.h>

int main() {
    printf("--- TABELA DE CONVERSAO DE TEMPERATURAS (0C - 100C) ---\n");
    printf("CELSIUS | FARENHEIT | KELVIN\n");

    for (int celsius = 0; celsius <= 100; celsius = celsius + 5) {
        float farenheit = (celsius) / 5.0 + 32.0f;
        float kelvin = celsius + 273.15;

        printf("%.2f | %.2f | %.2f\n", (float)celsius, farenheit, kelvin);
    }
    return 0;
}