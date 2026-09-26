//Questão 15

#include <stdio.h>

int main() {
    int num;
    int encontrados = 0; // Flag/contador de numeros que satisfazem a condicao

    printf("--- FILTRAGEM DE MULTIPLOS DE 3 E 5 SIMULTANEAMENTE ---\n\n");
    printf("Digite o numero limite: ");
    scanf("%d", &num);

    if (num > 0){
        printf("\nMultiplos de 3 e 5 no intervalo de 1 a %d:\n", num);

        for (int i = 1; i <= num; i++) {
            // Lógica equivalente: (i % 15 == 0)
            if (i % 3 == 0 && i % 5 == 0) {
                printf("%d ", i);
                encontrados++;
            }
        }
        
        // Caso nenhum numero tenha atendido ao criterio de filtragem
        if (encontrados == 0) {
            printf("Nenhum numero satisfaz a condicao no intervalo informado.");
        } else{
            printf("\n\nTotal de numeros encontrados: %d\n", encontrados);
        }

    } else{
        printf("\n[ERRO] Por favor, informe um numero inteiro positivo valido.\n");
    }   

    return 0;
}