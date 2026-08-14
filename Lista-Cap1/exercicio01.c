#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls"); //lIMPA O TERMINAL (WINDOWS)
    int anoLetivo;

    printf("Digite o ano letivo: ");
    scanf("%i", &anoLetivo);
    
    while (anoLetivo > 2026 || anoLetivo < 1910){
        printf("\n## VALOR INVALIDO ##");
        printf("\nDigite o ano letivo novamente: ");
        scanf("%i", &anoLetivo);
    }

    printf("\nAno letivo = %i", anoLetivo);
    return 0;   
}