// 📚 Questão 03

#include <stdio.h>

int main(){
    int numeroInteiro;

    printf("Digite um número inteiro: ");
    scanf("%d", &numeroInteiro);

    printf("Base decimal = %d, Base hexadecimal = %x, Base Octal = %o, Tabela ASCII = %c", numeroInteiro, numeroInteiro, numeroInteiro, numeroInteiro);
    return 0;
}

/* 
base decimal (%d),
base hexadecimal em caixa baixa (%x),
base octal (%o),
caractere correspondente à tabela ASCII (%c). 
*/