//Questão 10

#include <stdio.h>
#define PI 3.14159

float areaEsfera(float r){
    float area = 4 * PI * r * r;
    return area;
}


int main(){
    float raioEsfera;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raioEsfera);

    float area = areaEsfera(raioEsfera);
    
    printf("Area da esfera = %f", area);
    
    return 0;
}