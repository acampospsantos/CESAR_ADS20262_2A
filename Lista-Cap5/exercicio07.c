//Questão 07

#include <stdio.h>

int soma(int num1, int num2){
    int soma = num1 + num2;
    return soma;
}

int main(){
    int numero1, numero2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    int resultado = soma(numero1, numero2);
    printf("Resultado da soma = %d", resultado);

    return 0;
}