// Questão 09

#include <stdio.h>

void exibe(int contador, float somaTotal){
    printf("\n--- Exibicao ---\n");
    printf("Quantidade valores válidos = %d\n", contador);
    printf("Soma total = %f\n", somaTotal);
    if (contador > 0){
        printf("Media aritmetica = %f", somaTotal/(float)contador);
    } else {
        printf("Media aritmetica = 0");
    }
}

int main(){
    float nota = 0.0;
    float somaNotas = 0.0;
    int contador=0;

    do{
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        if (nota <= 10 && nota >= 0){
            contador = contador + 1;
            somaNotas = somaNotas + nota;
        }

    }while(nota > 0);

    exibe(contador, somaNotas);

    return 0;
}