//Questão 21

#include <stdio.h>

int main() {
    char caractere;

    printf("--- LEITOR DE CODIGO ASCII ---\n\n");
    printf("Digite um caractere qualquer: ");
    
    // Espaco em branco antes de %c ignora eventuais 'Enter' ou espacos anteriores no buffer
    scanf(" %c", &caractere);

    // Impressão do mesmo dado formatado como caractere (%c) e como inteiro decimal ASCII (%d)
    printf("\n--- RESULTADO ---\n");
    printf("Caractere digitado: '%c'\n", caractere);
    printf("Codigo ASCII (decimal): %d\n", caractere);

    return 0;
}

/*
 * EXPLICACAO SOBRE O CODIGO ASCII:
 * 
 * Na linguagem C, o tipo 'char' ocupa 1 byte (8 bits) de memoria e armazena 
 * internamente um numero inteiro de 0 a 255. 
 * 
 * A Tabela ASCII (American Standard Code for Information Interchange) padroniza 
 * a associacao de cada numero inteiro a um simbolo visual (letra, numero, pontuacao).
 * 
 * Portanto, quando usamos %c no printf, o C interpreta o valor como um simbolo visual.
 * Quando usamos %d com a mesma variavel 'char', o C exibe diretamente o valor 
 * numerico decimal correspondente na tabela ASCII.
 */