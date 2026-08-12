#include <stdio.h>
#include <stdbool.h>

// --- OPERAÇÕES ---
void soma(){
    int numero1;
    int numero2;
    
    printf("\n--- SOMA ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 + numero2;
    printf("\nO resultado foi %i", resultado);
}

void subtracao(){
    int numero1;
    int numero2;

    printf("\n--- SUBTRACAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 - numero2;
    printf("\nO resultado foi %i", resultado);
}

void multiplicacao(){
    int numero1;
    int numero2;

    printf("\n--- MULTIPLICACAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    int resultado = numero1 * numero2;
    printf("\nO resultado foi %i", resultado);
}

void divisao(){
    float numero1;
    float numero2;

    printf("\n--- DIVISAO ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    while(numero2 == 0){
        printf("INDETERMINAÇÃO\n");
        printf("Digite novamente: ");
        scanf("%f", &numero2);
    }

    float resultado = numero1 / numero2;
    printf("\nO resultado foi %.2f", resultado);
}


//ESCOLHE A OPERAÇÃO ARITMÉTICA
void escolha(){

    int escolha;
    printf("Qual opcao deseja?: ");
    scanf("%i", &escolha);
    
    while (escolha < 1 || escolha > 4){
        printf("## Opcao inválida ##\n");
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
}


// MENU
void menu(){
    printf("\n--- CALCULADORA ---\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICAR\n");
    printf("4 - DIVISAO\n");

    escolha();
}


int main() {
    bool condicaoParada = true;
    int parada;
    while(condicaoParada == true){
        menu();
        printf("\nDeseja encerrar o programa? (0 - pra sair): ");
        scanf("%i", &parada);
        if (parada == 0){
            condicaoParada = false;
        } 
    }
    printf("\nSaindo do programa...");
    return 0;
}