//Questão 09
#include <stdio.h>
#include <math.h>

int main(){
    //Geometria do Triângulo e Fórmula de Heron

    float ladoA, ladoB, ladoC;

    printf("Digite o valor do ladoA: ");
    scanf("%f", &ladoA);

    printf("\nDigite o valor do ladoB: ");
    scanf("%f", &ladoB);

    printf("\nDigite o valor do ladoC: ");
    scanf("%f", &ladoC);

    float semiperimetro = (ladoA + ladoB + ladoC)/2.0;

    float areaHeron =  sqrt(semiperimetro * (semiperimetro - ladoA) * (semiperimetro - ladoB) * (semiperimetro - ladoC));
    
    printf("\n RESULTADOS");
    printf("\nSemiperimetro (p): %.3f", semiperimetro);
    printf("\nÁrea pela formula de Heron = %.3f", areaHeron);

    return 0;
}