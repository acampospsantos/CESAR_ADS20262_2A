//Questão 12

#include <stdio.h>

void exibeMenu(){
    printf("------- MENU -------");
    printf("1 - Cadastrar");
    printf("2 - Listar");
    printf("3 - Remover");
    printf("0 - SAIR");
    printf("---------------------");
}

int main(){
    int opcao;
    char resp;

    do {
        exibeMenu();
        printf("Sua escolha: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:
                printf("Saindo...");
                break;
            case 1: 
                printf("Cadastrado!");
                break;
            case 2:
                printf("Listar!");
                break;
            case 3:
                printf("Removido!");
                break;
            default:
                printf("## DIGITE UMA OPCAO VALIDA ##");
            
        printf("Deseja continuar? 1 - Sim / 2 - Nao");
        scanf("%c", &resp);
            
        }
        
    } while(resp != 2);
    
    return 0;
}