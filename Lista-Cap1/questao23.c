#include <stdio.h>

int main() {
    int i, j;
    int tamanho = 5;
    char caractere = 'X';

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            // Imprime 'X' nas bordas (primeira/última linha ou primeira/última coluna)
            if (i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1) {
                printf("%c", caractere);
            } else {
                // Imprime espaço no miolo da caixa
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}