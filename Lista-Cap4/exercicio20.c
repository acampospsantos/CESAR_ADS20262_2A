//Questão 20

#include <stdio.h>
#include <math.h>

int main(){
    float a,b, c;

    // ax2 + bx + c = 0

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0){
        //delta ==> Δ = b² - 4*a*c
        float delta = (b*b) - 4 * a * c;

        if (delta < 0){
            printf("\nA equacao nao possui raizes reais!");
        } else if (delta == 0){
            float x = -(b) / (2 * a);
            printf("\nA raiz da equação = %.2f", x);
        } else { //Δ > 0
            float x1 = (-(b) + sqrt(delta)) / (2*a);
            float x2 = (-(b) - sqrt(delta)) / (2*a);
            printf("\nRaiz x1 = %.2f", x1);
            printf("\nRaiz x2 = %.2f", x2);
        }

    } else {
        printf("\n ## a deve ser diferente de 0!! ##");
    }

    return 0;
}