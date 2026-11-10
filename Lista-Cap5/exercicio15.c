//Questão 15

#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3){
    float media = (n1*2 + n2*3 + n3*5)/(2+3+5);
    return media;
}

void exibeSituacao(float media){
    printf("\nMedia = %.2f\n", media);
    if (media >= 5.0){
        printf("Aprovado!");
    } else if (media >= 3.0){
        printf("Recuperacao!");
    } else {
        printf("Reprovado!");
    }
}

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    printf("Digite a nota3: ");
    scanf("%f", &nota3);
    
    media = mediaPonderada(nota1, nota2, nota3);
    exibeSituacao(media);
    
    return 0;
}