//Questão 27

#include <stdio.h>

// Funções de conversão de temperatura
float celsiusParaFahrenheit(float c) {
    return (c * 1.8f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) / 1.8f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}

int main() {
    int opcao;
    float temp_entrada, temp_convertida;

    printf("--- CONVERSOR DE TEMPERATURAS MODULAR ---\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("\nErro: Opcao invalida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp_entrada);

    switch (opcao) {
        case 1:
            temp_convertida = celsiusParaFahrenheit(temp_entrada);
            printf("\nResultado: %.2f *C = %.2f *F\n", temp_entrada, temp_convertida);
            break;

        case 2:
            temp_convertida = celsiusParaKelvin(temp_entrada);
            printf("\nResultado: %.2f *C = %.2f K\n", temp_entrada, temp_convertida);
            break;

        case 3:
            temp_convertida = fahrenheitParaCelsius(temp_entrada);
            printf("\nResultado: %.2f *F = %.2f *C\n", temp_entrada, temp_convertida);
            break;

        case 4:
            temp_convertida = kelvinParaCelsius(temp_entrada);
            printf("\nResultado: %.2f K = %.2f *C\n", temp_entrada, temp_convertida);
            break;
    }

    return 0;
}