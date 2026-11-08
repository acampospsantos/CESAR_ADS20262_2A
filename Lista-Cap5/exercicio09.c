//Questão 09

#include <stdio.h>

int maior(int num1, int num2){
    if (num1 > num2){
        return num1;
    } else if (num2 > num1){
        return num2;
    } else {
        return 0;
    }
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    int maiorNumero = maior(num1, num2);
    if (maiorNumero == 0){
        printf("## Os numeros tem o mesmo valor ##");
    } else {
        printf("Maior numero eh = %d", maiorNumero);
    }
}