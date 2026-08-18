#include <stdio.h>
#include <locale.h>
#include <windows.h>


void formatacao1(){
    printf("\nTreinamento em programação\nLinguagem C");
}

void formatacao2(){
    printf("\nTreinamento em programação");
    printf("Linguagem C\n\n");
}

void formatacao3(){
    // Caracteres de caixa da tabela CP437 em hexadecimal
    char canto_sup_esq = '\xDA'; // ┌
    char canto_sup_dir = '\xBF'; // ┐
    char canto_inf_esq = '\xC0'; // └
    char canto_inf_dir = '\xD9'; // ┘
    char linha_horiz   = '\xC4'; // ─
    char linha_vert    = '\xB3'; // │

    // Topo da moldura
    printf("%c", canto_sup_esq);
    for (int i = 0; i < 29; i++) {
        printf("%c", linha_horiz);
    }
    printf("%c\n", canto_sup_dir);

    // Linha 1 do texto
    printf("%c Treinamento em programação. %c\n", linha_vert, linha_vert);

    // Linha 2 do texto (com alinhamento/espaçamento)
    printf("%c Linguagem C.                %c\n", linha_vert, linha_vert);

    // Base da moldura
    printf("%c", canto_inf_esq);
    for (int i = 0; i < 29; i++) {
        printf("%c", linha_horiz);
    }
    printf("%c\n", canto_inf_dir);

    return 0;
}


int main(){
    //setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001); 
    formatacao1();
    formatacao2();
    formatacao3();
    return 0;
}