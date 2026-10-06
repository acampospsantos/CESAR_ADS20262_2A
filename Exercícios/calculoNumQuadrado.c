#include <stdio.h>

int main(){
    int num;
    int soma = 0;
    int numAux = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\n%d² = ", num);

    for (int i=1; i <= num; i++){
        soma = soma + numAux;
        if (i == num){
            printf("%d = ", numAux);
        } else {
            printf("%d + ", numAux);
        }
        numAux = numAux + 2;
    }
    printf("%d", soma);
    printf("\n\nO quadrado de %d = %d", num, soma);

    return 0;
}