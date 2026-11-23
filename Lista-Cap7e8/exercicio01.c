//Questão 01

#include <stdio.h>

#define TAM 10

float maiorNota(float maiorNota, float notaAtual){
    if (notaAtual > maiorNota){
        maiorNota = notaAtual;
    }
    return maiorNota;
}

float menorNota(float menorNota, float notaAtual){
    if (notaAtual < menorNota){
        menorNota = notaAtual;
    }
    return menorNota;
}



int main(){
    float notas[TAM];
    float maior=0.0;
    float menor = 10.0;
    float somatorio = 0.0;
    int contador=0;

    for (int i=0; i <= 9; i++){
        printf("Digite a nota do %d aluno: ", i+1);
        scanf("%f", &notas[i]);
        while(notas[i] < 0.0 || notas[i] > 10.0){
            printf("## NOTA INVALIDA ##");
            printf("\nDigite novamente: ");
            scanf("%f", &notas[i]);
        }

        somatorio = somatorio + notas[i];
        maior = maiorNota(maior, notas[i]);
        menor = menorNota(menor, notas[i]);
    }

    float media = somatorio/TAM;
    printf("\n");

    //Imprimir quantos alunos ficaram com nota acima da media
    for (int j=0; j <= 9; j++){
        printf("%d nota = %.2f\n", j+1, notas[j]);
        if (notas[j] > media){
            contador = contador + 1;
        }
    }

    printf("\n--- EXIBICAO ---");
    printf("\nMedia da turma = %.2f", media);
    printf("\nMaior nota = %.2f", maior);
    printf("\nMenor nota = %.2f", menor);
    printf("\nAlunos acima da media = %d", contador);
    return 0;
}