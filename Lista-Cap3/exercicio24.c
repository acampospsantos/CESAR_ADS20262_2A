//Questão 24

#include <stdio.h>

int main() {
    int n;

    printf("Digite a dimensao impar N (3 a 19): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Diagonal principal (i == j) ou Diagonal secundária (i + j == n - 1)
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}