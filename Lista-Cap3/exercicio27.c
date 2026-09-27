//Questão 27

#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    printf("\nCedulas entregues:\n");

    // Cedulas de R$ 100
    int notas100 = 0;
    while (valor >= 100) {
        valor = valor - 100;
        notas100 = notas100 + 1;
    }
    if (notas100 > 0) {
        printf("Cedulas de R$ 100: %d\n", notas100);
    } 

    // Cedulas de R$ 50
    int notas50 = 0;
    while (valor >= 50) {
        valor = valor - 50;
        notas50 = notas50 + 1;
    }
    if (notas50 > 0){
        printf("Cedulas de R$ 50: %d\n", notas50);
    } 

    // Cedulas de R$ 20
    int notas20 = 0;
    while (valor >= 20) {
        valor = valor - 20;
        notas20 = notas20 + 1;
    }
    if (notas20 > 0){
        printf("Cedulas de R$ 20: %d\n", notas20);
    } 

    // Cedulas de R$ 10
    int notas10 = 0;
    while (valor >= 10) {
        valor = valor - 10;
        notas10 = notas10 + 1;
    }
    if (notas10 > 0){
        printf("Cedulas de R$ 10: %d\n", notas10);
    } 

    // Cedulas de R$ 5
    int notas5 = 0;
    while (valor >= 5) {
        valor = valor - 5;
        notas5 = notas5 + 1;
    }
    if (notas5 > 0){
        printf("Cedulas de R$ 5: %d\n", notas5);
    } 

    // Cedulas de R$ 2
    int notas2 = 0;
    while (valor >= 2) {
        valor = valor - 2;
        notas2 = notas2 + 1;
    }
    if (notas2 > 0){
        printf("Cedulas de R$ 2: %d\n", notas2);
    } 

    // Sobra do valor
    if (valor > 0) {
        printf("\nValor restante nao sacavel (sem cedulas correspondentes): R$ %d\n", valor);
    }

    return 0;
}