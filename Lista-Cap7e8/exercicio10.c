//Questão 10

#include <stdio.h>
#include <stdlib.h>

#define JOGOS 5
#define DEZENAS 6

int main() {
    int jogos[JOGOS][DEZENAS];
    int numero, repetido;

    // Gera os 5 jogos (linhas da matriz)
    for (int i = 0; i < JOGOS; i++) {
        int j = 0;

        while (j < DEZENAS) {
            numero = (rand() % 60) + 1;
            repetido = 0;

            // Verifica se o número sorteado já existe nas posições anteriores deste jogo
            for (int k = 0; k < j; k++) {
                if (jogos[i][k] == numero) {
                    repetido = 1;
                    break;
                }
            }

            // Só grava na matriz e avança o índice se o número for inédito na linha
            if (!repetido) {
                jogos[i][j] = numero;
                j++;
            }
        }
    }

    // Imprime os jogos gerados, um por linha
    printf("--- JOGOS DE LOTERIA GERADOS ---\n");
    for (int i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (int j = 0; j < DEZENAS; j++) {
            printf("%02d ", jogos[i][j]);
        }
        printf("\n");
    }

    return 0;
}