//Questão 08

#include <stdio.h>

int main() {
    int original[3][4];
    int transposta[4][3];

    // Leitura da matriz original 3x4
    printf("--- LEITURA DA MATRIZ ORIGINAL (3x4) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Original[%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
        }
    }

    // Geração da matriz transposta 4x3 (linhas viram colunas e vice-versa)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[j][i] = original[i][j];
        }
    }

    // Impressão da matriz original (3 linhas x 4 colunas)
    printf("\n--- MATRIZ ORIGINAL (3x4) ---\n");
    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 4; j++) {
            printf(" %4d ", original[i][j]);
        }
        printf("|\n");
    }

    // Impressão da matriz transposta (4 linhas x 3 colunas)
    printf("\n--- MATRIZ TRANSPOSTA (4x3) ---\n");
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %4d ", transposta[i][j]);
        }
        printf("|\n");
    }

    return 0;
}