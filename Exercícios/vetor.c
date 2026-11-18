#include <stdio.h>

void exemplo1(){
    int somatorio = 0;
    float notas[5];
    
    for (int i=0; i < 5; i=i+1){
        printf("Digite a %dº nota: ", i+1);
        scanf("%f", &notas[i]);
        while(notas[i] < 0 || notas[i] > 10){
            printf("\n## INVALIDO ##");
            printf("\nDigite a %dº nota: ", i+1);
            scanf("%f", &notas[i]);
        }
    }

    for (int contador=0; contador < 5; contador++){
        somatorio = somatorio + notas[contador];
    }

    float media = somatorio/5.0;

    printf("\nA media eh = %.2f", media);
}

void matriz1(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void matriz2(){
    int diagonalPrincipal=0;
    int diagonalSecundaria=0;
    
    for (int linha=0; linha < 3; linha++){
        for (int coluna=0; coluna < 3; coluna++){
            
        }
    }
}


int main(){
    //exemplo1();
    matrizz();
    return 0;
}

//(notas[i] > maior) ? maior = notas[i] : maior=notas[i];