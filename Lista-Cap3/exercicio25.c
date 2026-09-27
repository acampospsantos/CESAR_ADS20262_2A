//Questão 25

#include <stdio.h>

int main(){
    int numero;
    int quantidadeDivisores = 0;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &numero);
    while(numero <= 1){
        printf("--- NUMERO INVALIDO --");
        printf("Digite um numero inteiro maior que 1: ");
        scanf("%d", &numero);
    }
    printf("\n");

    for (int divisores=1; divisores <= numero; divisores++){
        if (numero % divisores == 0){
            quantidadeDivisores = quantidadeDivisores + 1;
        }
    }
    if (quantidadeDivisores == 2){
        printf("%d é um numero PRIMO!", numero);
    } else {
        printf("%d NAO é um numero PRIMO!", numero);
    }
    printf("\nQuantidade de divisores = %d", quantidadeDivisores);

    return 0;
}