#include <stdio.h>

int main(){
    int tempoTotal;

    printf("Digite um intervalo de tempo: ");
    scanf("%d", &tempoTotal);
    
    int tempoHora = tempoTotal/3600; //Pega o tempo total em segundos e divide por 3600 (Achar o valor inteiro de horas)
    int tempoMin = (tempoTotal%3600)/60; //O restante do cálculo acima são os segundos que representarão os minutos inteiros
    int tempoSeg = tempoTotal%60; //O restante do restante são justamento os segundos

    printf("%d horas - %d minutos - %d segundos", tempoHora, tempoMin, tempoSeg);
    
    return 0;
}