//Questão 13

#include <stdio.h>

float soma(float num1, float num2){
    float resultado = num1 + num2;
    return resultado;
}

float subtracao(float num1, float num2){
    float resultado = num1 - num2;
    return resultado;
}

float multiplicacao(float num1, float num2){
    float resultado = num1 * num2;
    return resultado;
}

float divisao(float num1, float num2){
    float resultado = num1/num2;
    return resultado;
}


int main(){
    int opcao, continuar;
    float num1, num2, resultado;

    do{
        printf("---- MENU ----");
        printf("\n1 -- SOMA");
        printf("\n2 -- SUBTRACAO");
        printf("\n3 -- MULTIPLICACAO");
        printf("\n4 -- DIVISAO");

        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch(opcao){
            case 1:
                resultado = soma(num1, num2);
                printf("%.2f + %.2f = %.2f", num1, num2, resultado);
                break;
            
            case 2:
                resultado = subtracao(num1, num2);
                printf("%.2f - %.2f = %.2f", num1, num2, resultado);
                break;
            
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("%.2f * %.2f = %.2f", num1, num2, resultado);
                break;
            
            case 4: 
                if (num2 != 0){
                    resultado = divisao(num1, num2);
                    printf("%.2f / %.2f = %.2f", num1, num2, resultado);
                } else {
                    printf("## Denominador NAO pode ser 0 ##");
                }
                break;
            
            default:
                printf("##OPCAO INVALIDA##");
        }
        printf("\nDeseja continuar? 1-SIM ; 2-NAO  ");
        scanf("%d", &continuar);
        printf("\n");

    } while(continuar == 1);

    printf("## FIM DO PROGRAMA ##");
    return 0;
}