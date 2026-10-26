//Questão 23

#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite um dia: ");
    scanf("%d", &dia);

    printf("Digite um mes: ");
    scanf("%d", &mes);
    while(mes < 1 || mes > 12){
        printf("\nDigite um mes valido!\n");
        printf("Mes = ");
        scanf("%d", &mes);
    }

    printf("Digite um ano: ");
    scanf("%d", &ano);

    printf("\n%d de ", dia);
    switch(mes){
        case 1:
            printf("Janeiro");
            break;
        
        case 2:
            printf("Fevereiro");
            break;
        
        case 3:
            printf("Marco");
            break;
        
        case 4:
            printf("Abril");
            break;
        
        case 5:
            printf("Maio");
            break;
        
        case 6: 
            printf("Junho");
            break;
        
        case 7:
            printf("Julho");
            break;
        
        case 8:
            printf("Agosto");
            break;
        
        case 9:
            printf("Setembro");
            break;
        
        case 10:
            printf("Outubro");
            break;
        
        case 11:
            printf("Novembro");
            break;
        
        case 12:
            printf("Dezembro");
            break;
    }
    printf(" de %d", ano);

    return 0;
}