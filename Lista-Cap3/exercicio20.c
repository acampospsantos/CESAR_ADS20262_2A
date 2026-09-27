// Questão 20

#include <stdio.h>

int main() {
    printf("%-10s | %-12s | %-10s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("---------------------------------------\n");

    for (int i = 32; i <= 126; i++) {
        printf("%-10d | 0x%-10X | %c\n", i, i, i);
    }

    return 0;
}