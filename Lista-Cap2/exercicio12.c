//Questão 12

#include <stdio.h>

int main() {
    int numero;
    int antecessor;
    int sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    antecessor = numero;
    sucessor = numero;

    // Utilização EXCLUSIVA de operadores unários
    --antecessor; // Decremento: reduz em 1
    ++sucessor;   // Incremento: aumenta em 1

    //Também poderia ser antecessor++ e sucessor++

    printf("\n--- RESULTADO ---\n");
    printf("Numero digitado: %d\n", numero);
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
        
    return 0;
}