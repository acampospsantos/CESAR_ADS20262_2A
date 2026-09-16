//Questão 27

#include <stdio.h>
#include <stdlib.h> // Necessaria para rand() e srand()
#include <time.h>   // Necessaria para time()

int main() {
    int dado1, dado2, dado3;

    // Inicializa a semente geradora com base no tempo atual do sistema
    // Isso garante resultados diferentes a cada execucao do programa
    srand((unsigned int)time(NULL));

    // A expressao (rand() % 6) produz restos no intervalo [0, 5].
    // Adicionando 1 (+ 1), deslocamos o intervalo para [1, 6].
    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("--- SIMULADOR DE LANCAMENTO DE DADOS ---\n\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);
    printf("----------------------------------------\n");
    printf("Soma dos lançamentos: %d\n", dado1 + dado2 + dado3);

    return 0;
}