//Questão 06

#include <stdio.h>

// Procedimento auxiliar para exibir uma matriz 3x3 com colunas alinhadas
void exibeMatriz(int m[3][3], char nome) {
    printf("Matriz %c:\n", nome);
    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %4d ", m[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

int main() {
    int A[3][3], B[3][3], Soma[3][3];

    // Leitura da Matriz A
    printf("--- LEITURA DA MATRIZ A (3x3) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura da Matriz B
    printf("\n--- LEITURA DA MATRIZ B (3x3) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Cálculo da soma matricial: Soma[i][j] = A[i][j] + B[i][j]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Soma[i][j] = A[i][j] + B[i][j];
        }
    }

    // Exibição das três matrizes em formato tabular
    printf("\n--- RESULTADO DA SOMA DE MATRIZES ---\n\n");
    exibeMatriz(A, 'A');
    exibeMatriz(B, 'B');
    exibeMatriz(Soma, 'S');

    return 0;
}