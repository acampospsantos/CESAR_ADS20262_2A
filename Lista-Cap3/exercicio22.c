//Questão 15
#include <stdio.h>

int main(){
    int numeroAtual=1;
    
    for (int linha=1; linha <= 5; linha = linha + 1){ //Separação Linhas
        
        for (int qtdNumeros = 1; qtdNumeros <= linha; qtdNumeros++){
            printf("%d ", numeroAtual);
            numeroAtual = numeroAtual+1;
        }
        
        printf("\n");
    }
}