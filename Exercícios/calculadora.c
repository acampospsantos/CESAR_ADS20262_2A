#include <stdio.h>

int menu(){
    printf("\n--- CALCULADORA ---\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICAR\n");
    printf("4 - DIVISAO\n");
    
    int escolha;
    printf("Qual opcao deseja?: ");
    scanf("%i", &escolha);
    
    while (escolha < 1 || escolha > 5){
        printf("## Opcao inválida ##");
        printf("Digite novamente: ");
        scanf("%i", &escolha);
    }
    printf("\n"); // QUEBRA LINHA

    if (escolha == 1){
        soma();
    } else if (escolha == 2){
        subtracao();
    } else if (escolha == 3){
        multiplicacao();
    } else if (escolha == 4){
        divisao();
    }
    return 0;
}

int soma(){
    int numero1;
    int numero2;
    
    printf("\n--- SOMA ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 + numero2;
    printf("\nO resultado foi %i", resultado);
    return 0;
}

int subtracao(){
    int numero1;
    int numero2;

    printf("\n--- SUBTRACAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 - numero2;
    printf("\nO resultado foi %i", resultado);
    return 0;
}

int multiplicacao(){
    int numero1;
    int numero2;

    printf("\n--- MULTIPLICACAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 * numero2;
    printf("\nO resultado foi %i", resultado);
    return 0;
}

int divisao(){
    int numero1;
    int numero2;

    printf("\n--- DIVISAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    while(numero2 == 0){
        printf("INDETERMINAÇÃO\n");
        printf("Digite novamente: ");
        scanf("%i", numero2);
    }

    int resultado = numero1 / numero2;
    printf("\nO resultado foi %i", resultado);
    return 0;
}


int main() {
    menu();
    return 0;
}