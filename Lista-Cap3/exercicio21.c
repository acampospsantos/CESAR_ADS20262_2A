// Questão 21

#include <stdio.h>
#include <stdlib.h>

void verificacao(char letraEscolhida, char letraSorteada){
    int variavel = letraSorteada - letraEscolhida;
    if (variavel < 0){
        printf("## A letra sorteada vem antes da letra %c ##\n\n", letraEscolhida);
    } else {
        printf("## A letra sorteada vem depois da letra %c ##\n\n", letraEscolhida);
    }
}

int main(){
    int tentativas=0;
    char letraEscolhida;

    char letraSorteada = rand() % 26 +'a';

    do{
        tentativas = tentativas + 1;
        printf("Digite qual a letra escolhida: ");
        scanf(" %c", &letraEscolhida);
        if (letraEscolhida == letraSorteada){
            break;
        } else {
            verificacao(letraEscolhida, letraSorteada);
        }
    } while(1);
    printf("\nParabens! Voce acertou a letra sorteada!\n");
    printf("Numero de tentativas = %d", tentativas);
}