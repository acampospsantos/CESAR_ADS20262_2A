//Questão 03

#include <stdio.h>
#include <stdlib.h>

int main(){
    int posicoes[30];
    int qtdDados[6]  = {0}; // CORREÇÃO: Inicializa todas as posições com zero;
    int numAleatorio;

    for (int i=0; i < 30; i++){
        numAleatorio = (rand() % 6) + 1;
        posicoes[i] = numAleatorio;
        qtdDados[numAleatorio-1]=qtdDados[numAleatorio-1] + 1;
    }

    printf("---EXIBICAO---\n");
    for (int i=0; i <= 5; i++){
        printf("Face %d = %d vezes\n", i+1 ,qtdDados[i]);
    }
    return 0;
}