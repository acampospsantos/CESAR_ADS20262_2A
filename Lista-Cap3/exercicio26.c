// Questão 26

#include <stdio.h>

int checaPrimo(int numero){
    int quantidadeDivisores = 0;

    for (int divisores=1; divisores <= numero; divisores++){
        if (numero % divisores == 0){
            quantidadeDivisores = quantidadeDivisores + 1;
        }
    }
    if (quantidadeDivisores == 2){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int valorA, valorB;
    int somaPrimos = 0;

    printf("Digite o valor de A e de B: ");
    scanf("%d", &valorA);
    scanf("%d", &valorB);
    while(valorA >= valorB){
        printf("-- Valor A deve ser MENOR que o valor B");
        printf("Digite o valor de A e de B: ");
        scanf("%d", valorA);
        scanf("%d", valorB);
    }
    
    printf("-------------------");
    for (int contador = valorA; contador <= valorB; contador=contador+1){
        if (checaPrimo(contador) == 1){
            printf("\n%d É PRIMO!", contador);
            somaPrimos = somaPrimos + contador;
        } else {
            printf("\n%d NÃO É PRIMO!", contador);
        }
    }
    printf("\n-------------------");
    return 0;
}