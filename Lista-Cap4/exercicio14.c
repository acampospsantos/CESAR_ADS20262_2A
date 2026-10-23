//Questão 14

#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota do estudante (0.0 a 10.0): ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0) {
        if (faltas <= 20) {
            printf("\nConceito: A\n");
        } else {
            printf("\nConceito: B\n");
        }
    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            printf("\nConceito: B\n");
        } else {
            printf("\nConceito: C\n");
        }
    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            printf("\nConceito: C\n");
        } else {
            printf("\nConceito: D\n");
        }
    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            printf("\nConceito: D\n");
        } else {
            printf("\nConceito: E\n");
        }
    } else {
        printf("\nConceito: E\n");
    }

    return 0;
}