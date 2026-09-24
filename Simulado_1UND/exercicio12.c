// Questão 12

#include <stdio.h>

int main(){
    float nota;

    do{
        printf("Digite uma nota (0 a 10): ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
            printf("## NOTA INVÁLIDA ##\n");
            printf("Tente novamente! \n\n");
        }
    } while (nota < 0 || nota > 10);

    printf("\nSua nota é %.2f", nota);

    return 0;
}