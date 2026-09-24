//Questão 15
#include <stdio.h>

int main(){
    int numero=1;
    
    for (int linha=0; linha <= 4; linha = linha + 1){ //Separação Linhas
        
        for (int coluna = 1; coluna <= linha + 1; coluna++){
            printf("%d ", numero);
            numero = numero+1;
        }
        printf("\n");
    }
}