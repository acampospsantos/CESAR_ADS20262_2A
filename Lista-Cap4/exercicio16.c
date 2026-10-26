//Questão 16

#include <stdio.h>

int main(){
    float distancia;
    float qtdLitros;

    float consumo;

    printf("Digite a distancia(em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &qtdLitros);

    consumo = distancia/qtdLitros;
    printf("\nConsumo(Km/L): %.2f\n", consumo);

    if (consumo > 14.0){
        printf("Super economico!");
    } else if (consumo >= 8.0) {
        printf("Economico!");
    } else { // consumo < 8.0
        printf("Venda o carro!");
    }

    return 0;
}