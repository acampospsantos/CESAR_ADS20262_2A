//Questão 08

#include <stdio.h>

float celsius(float fahr){
    float tempCelsius = (fahr - 32) * 5 / 9;
    return tempCelsius;
}

int main(){
    float fahrenheit;

    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    float temperaturaCelsius = celsius(fahrenheit);
    printf("Temperatura em Celsius = %.2f ºC", temperaturaCelsius);

    return 0;
}