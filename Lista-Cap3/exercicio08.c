// Questão 08

#include <stdio.h>

int main(){
    float nota;

    do{
        printf("Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);
        if (nota <= 10 || nota >= 0){
            printf("\nNota registrada com sucesso!\n");
            break;
        }
        printf("\n-- ERRO: DIGITE NOVAMENTE -- \n");
    }while(nota < 0 && nota > 10);

    printf("Nota = %.2f", nota);

    return 0;
}