//Questão 04

#include <stdio.h>

int main(){
    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int dias, meses;
    int qtdDiasPassados = 0;
    int qtdDiasFaltantes = 0; 

    printf("Informe o dia: ");
    scanf("%d", &dias);

    printf("Informe o mes: ");
    scanf("%d", &meses);
  
    // Validação do mês e do dia correspondente no vetor
    if (meses < 1 || meses > 12) {
        printf("\nErro: Mes invalido!\n");
        return 1;
    }

    if (dias < 1 || dias > dmes[meses - 1]) {
        printf("\nErro: Dia invalido para o mes %d (maximo: %d dias)!\n", meses, dmes[meses - 1]);
        return 1;
    }


    //Calculo dias passados
    for (int i=0; i < meses; i++){
        if (i != (meses-1) ){
            qtdDiasPassados = qtdDiasPassados + dmes[i];
        } else {
            qtdDiasPassados = qtdDiasPassados + dias;
        }
    }

    //Calculo dias faltantes pra fim do ano
    for (int i=(meses-1); i < 12; i++){
        if (i == (meses-1)){
            qtdDiasFaltantes = qtdDiasFaltantes + (dmes[i] - dias);
        } else {
            qtdDiasFaltantes = qtdDiasFaltantes + dmes[i];
        }
    }

    printf("\n--- EXIBICAO ---\n");
    printf("Dias que se passaram desde 01/01: %d\n", qtdDiasPassados-1);
    printf("Dias que faltam ate o fim do ano: %d", qtdDiasFaltantes);
    return 0;
}