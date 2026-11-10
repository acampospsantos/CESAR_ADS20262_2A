//Questão 17

#include <stdio.h>

long fatorialIterativo(int n){
    int resultado = 1;
    for (int i=n; i >= 1; i=i-1){
        resultado = resultado * i;
    }
    return resultado;
}

long fatorialRecursivo(int n){
    int resultado=n;
    if (n == 1){
        return 1;
    } else {
        return resultado * fatorialRecursivo(resultado-1);
    }
}

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(numero < 0){
        printf("## O NUMERO DEVE SER INTEIRO POSITIVO ##");
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }

    int resulIterativo = fatorialIterativo(numero);
    int resulFatorial = fatorialRecursivo(numero);

    printf("Fatorial de %d ITERATIVO = %d", numero, resulIterativo);
    printf("\nFatorial de %d RECURSIVO = %d", numero, resulFatorial);

    return 0;
}