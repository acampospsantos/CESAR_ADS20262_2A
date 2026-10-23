//Questão 11

#include <stdio.h>

int main() {
    int numero1, numero2, numero3;
    int maior, meio, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3); 

    if (numero1 <= numero2 && numero1 <= numero3) {
        menor = numero1;
        if (numero2 <= numero3) {
            meio = numero2;
            maior = numero3;
        } else {
            meio = numero3;
            maior = numero2;
        }
    } else if (numero2 <= numero1 && numero2 <= numero3) {
        menor = numero2;
        if (numero1 <= numero3) {
            meio = numero1;
            maior = numero3;
        } else {
            meio = numero3;
            maior = numero1;
        }
    } else {
        menor = numero3;
        if (numero1 <= numero2) {
            meio = numero1;
            maior = numero2;
        } else {
            meio = numero2;
            maior = numero1;
        }
    }

    printf("\n--- EXIBICAO ---\n");
    printf("Menor = %d\n", menor);
    printf("Meio  = %d\n", meio);
    printf("Maior = %d\n", maior);

    return 0;
}