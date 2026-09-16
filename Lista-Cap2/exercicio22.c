//Questão 22

#include <stdio.h>

int main() {
    char letra_maiuscula;
    char letra_minuscula;

    printf("--- CONVERSOR MAIUSCULA PARA MINUSCULA (ASCII) ---\n\n");
    printf("Digite uma letra maiuscula (A-Z): ");
    
    // O espaco antes de %c limpa o buffer de entradas anteriores
    scanf(" %c", &letra_maiuscula);

    // Conversao via offset ASCII:
    // Na Tabela ASCII, a diferenca entre 'a' (97) e 'A' (65) e de exatamente 32 posicoes.
    // 'a' - 'A' = 32.
    letra_minuscula = letra_maiuscula + 32; // ('a' - 'A') 

    printf("\n--- RESULTADO ---\n");
    printf("Letra informada: '%c' (ASCII: %d)\n", letra_maiuscula, letra_maiuscula);
    printf("Letra convertida: '%c' (ASCII: %d)\n", letra_minuscula, letra_minuscula);

    return 0;
}