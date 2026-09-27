//Questão 23

#include <stdio.h>

int main(){
    int ladoQuadrado;
    printf("Digite a dimensão lado do quadrado(entre 3 e 20): ");
    scanf("%d", &ladoQuadrado);
    while (ladoQuadrado < 3 || ladoQuadrado > 20){
        printf("--- Digite um valor entre 3 e 20 ---\n");
        printf("Digite o valor de L: ");
        scanf("%d", &ladoQuadrado);
    }

    for (int linha=1; linha <= ladoQuadrado; linha++){

        for (int conteudoLinha=1; conteudoLinha <= ladoQuadrado; conteudoLinha++){
            if (linha == 1 || linha == ladoQuadrado){
                printf("X");
            } else {
                if (conteudoLinha == 1 || conteudoLinha == ladoQuadrado){
                    printf("X");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}