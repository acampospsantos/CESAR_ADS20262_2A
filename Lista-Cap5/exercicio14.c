//Questão 14 ==> REFAZER ANTES DA PROVA

#include <stdio.h>

// Função recursiva para somar os dígitos de um inteiro positivo
int somaDigitos(int n) {
    // Caso Base: quando o número possui apenas um dígito (menor que 10)
    if (n < 10) {
        return n;
    }
    
    // Passo Recursivo: extrai o último dígito (n % 10) e soma com a chamada 
    // recursiva para o número sem o último dígito (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}

int main(){
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    while(numero < 0){
        printf("\n## NUMERO INVALIDO ##");
        printf("Digite um numero novamente: ");
        scanf("%d", &numero);
    }

    resultado = somaDigitos(numero);
    printf("\nSoma dos digitos de %d = %d", numero, resultado);
    return 0;
}