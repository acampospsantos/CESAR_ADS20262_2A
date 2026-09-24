//Questão 11

#include <stdio.h>

int main(){
    const float gratificacao = 0.05;
    const float remuneracaoDiaria = 45;
    const float impostoRenda = 0.08;
    // Cálculo Salarial
    //R$45 - 1 dia --> Contratação técnico

    int diasTrabalhados;

    printf("Digite a quantidade de dias de trabalho: ");
    scanf("%d", &diasTrabalhados);

    float salarioBruto = remuneracaoDiaria * diasTrabalhados;
    
    salarioBruto = salarioBruto + (salarioBruto * gratificacao);

    salarioBruto = salarioBruto - (salarioBruto * impostoRenda);

    printf("\n--- EXIBICAO ---\n");
    printf("Salário Líquido = R$%.2f", salarioBruto);

    return 0;
}