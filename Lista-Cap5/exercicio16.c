//Questão 16

#include <stdio.h>

int ehBissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){ //Regra do bissexto
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int ano;
    int checagem;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    checagem = ehBissexto(ano);
    if (checagem == 1){
        printf("%d eh ano bissexto!", ano);
    } else {
        printf("%d NAO eh bissexto!", ano);
    }
}