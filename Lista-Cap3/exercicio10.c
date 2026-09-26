// Questão 10

#include <stdio.h>

int main() {
    int contador = 1; 

    printf("--- 100 PRIMEIROS MULTIPLOS POSITIVOS DE 3 ---\n\n");

    for (int i = 3; contador <= 100; i = i + 3) {
        
        printf("%d\t", i);
        if (i != 3){
            contador++;
        }

        // A cada 10 numeros impressos, quebra para a proxima linha
        if (contador % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}