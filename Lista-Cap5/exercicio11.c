//Questão 11

#include <stdio.h>

int ehPar(int n){
    if ( (n%2) == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int valorFinal = ehPar(num);
    if (valorFinal == 1){
        printf("%d eh par!", num);
    } else {
        printf("%d eh impar!", num);
    }

    return 0;
}