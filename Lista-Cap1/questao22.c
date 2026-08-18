#include <stdio.h>

int main() {
    // Caracteres de bloco e controle (CP437)
    char meio_sup  = '\xDF'; // ▀ (Bloco na metade superior)
    char meio_inf  = '\xDC'; // ▄ (Bloco na metade inferior)
    char bloco_che = '\xDB'; // █ (Bloco cheio)
    char roda      = 'O';    // Roda

    // --- CARRO ---
    // Linha 1: Teto do carro
    printf("  %c%c%c%c\n", meio_inf, meio_inf, meio_inf, meio_inf);
    
    // Linha 2: Corpo do carro
    printf("%c%c%c%c%c%c%c\n", meio_sup, bloco_che, bloco_che, bloco_che, bloco_che, bloco_che, meio_sup);
    
    // Linha 3: Chassi e rodas do carro
    printf(" %c%c%c%c%c%c%c\n\n", roda, meio_sup, meio_sup, meio_sup, meio_sup, roda, meio_sup);

    // --- CAMINHONETE ---
    // Linha 1: Cabine e caçamba
    printf("  %c %c%c%c%c\n", meio_inf, bloco_che, bloco_che, bloco_che, bloco_che);
    
    // Linha 2: Corpo da caminhonete
    printf("%c%c%c %c%c%c%c\n", meio_sup, bloco_che, bloco_che, bloco_che, bloco_che, bloco_che, bloco_che);
    
    // Linha 3: Chassi e rodas da caminhonete
    printf(" %c%c%c%c%c%c%c\n", roda, meio_sup, meio_sup, meio_sup, roda, roda, meio_sup);

    return 0;
}