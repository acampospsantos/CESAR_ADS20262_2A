//Questão 07

#include <stdio.h>
#include <stdlib.h>

int somaDiagonalPrincipal(int matriz[4][4]){
    int soma = 0;
    
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            if (i == j){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somaDiagonalSecundaria(int matriz[4][4]){
    int soma = 0;
    
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            if ((i + j) == 3){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somaAcimaDiagonalPrincipal(int matriz[4][4]){
    int soma = 0;
    
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            if (i < j){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int main(){
    int numAleatorio;
    int matriz[4][4];

    int somaPrincipal, somaSecundaria, somaAcimaPrincipal;
    
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            numAleatorio = (rand() % 20) + 1;
            matriz[i][j] = numAleatorio;
        }
    }

    // Exibe a matriz formatada
    printf("--- MATRIZ 4x4 GERADA ---\n");
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 4; j++) {
            printf(" %3d ", matriz[i][j]);
        }
        printf("|\n");
    }

    somaPrincipal = somaDiagonalPrincipal(matriz);
    somaSecundaria = somaDiagonalSecundaria(matriz);
    somaAcimaPrincipal = somaAcimaDiagonalPrincipal(matriz); 
    
    // Exibe os resultados das somas
    printf("\n--- RESULTADOS ---\n");
    printf("Soma da diagonal principal:          %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria:         %d\n", somaSecundaria);
    printf("Soma acima da diagonal principal:    %d\n", somaAcimaPrincipal);
    
    return 0;
}