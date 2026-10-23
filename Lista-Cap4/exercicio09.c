//Questão 9

#include <stdio.h>

int main(){
    float nota1, nota2, nota3;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    float mediaPonderada = ( (nota1 * 2) + (nota2 * 3) + (nota3 * 5) ) / (2 + 3 + 5);
    printf("\nMedia final = %.2f\n", mediaPonderada);
    
    if (mediaPonderada >= 5.0){
        printf("Aprovado!");
    }else if (mediaPonderada >= 3.0) {
        printf("Em recuperacao!");
    } else { // mediaPonderada < 3.0
        printf("Reprovado!");
    }

    return 0;
}