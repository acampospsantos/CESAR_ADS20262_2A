//Questão 02

#include <stdio.h>

#define TAMANHO 15

int main() {
    int num;
    int n = 0;
    int vet[TAMANHO];

    do {
        printf("Numero: ");
        scanf("%d", &num);

        if (num != 0) {
            if (n == TAMANHO) {
                printf("BUFFER LOTADO\n");
                break;
            }
            n++;
            vet[n] = num;
        }
    } while (num != 0);

    printf("\n--- EXIBICAO ---\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("Elemento %d = %d\n", i, vet[i]);
    }

    return 0;
}
