//Questão 07

#include <stdio.h>

void usandoFor(){
    printf("--- Usando estrutura for ---\n");
    for (int i=0; i <= 100; i++){
        printf("Contador = %d\n", i);
    }
}

void usandoWhile(){
    printf("\n--- Usando estrutura while ---\n");
    int contador=0;
    while(contador <= 100){
        printf("Contador = %d\n", contador);
        contador = contador + 1;
    }
}

void usandoDoWhile(){
    printf("\n--- Usando estrutura do while ---\n");
    int contador = 0;
    do {
        printf("Contador = %d\n", contador);
        contador = contador + 1;
    } while(contador <= 100);
}


int main(){
    usandoFor();
    usandoWhile();
    usandoDoWhile();
    return 0;
}

/*
A estrutura mais adequada para este problema é o laço **FOR**.
Motivo:
Contagem Definida: O problema possui limites exatos e conhecidos de  início (0), fim (100) e passo de incremento (+1).
*/