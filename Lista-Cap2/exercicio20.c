//Questão 20

#include <stdio.h>
#include <math.h> // Necessaria para as funcoes powf() e sqrtf()

int main() {
    float lado_a, lado_b;
    float hipotenusa;

    printf("--- TEOREMA DE PITAGORAS (CALCULO DA HIPOTENUSA) ---\n\n");

    printf("Digite o valor do primeiro cateto (lado a): ");
    scanf("%f", &lado_a);

    printf("Digite o valor do segundo cateto (lado b): ");
    scanf("%f", &lado_b);

    // Teorema de Pitagoras: h = sqrt(a^2 + b^2)
    // Utilizamos powf() e sqrtf() que sao as versoes especificas para o tipo 
    //powf --> Potencia , sqrtf --> Raiz quadrada
    hipotenusa = sqrtf(powf(lado_a, 2.0f) + powf(lado_b, 2.0f));

    printf("\n--- RESULTADO ---\n");
    printf("Cateto A: %.2f\n", lado_a);
    printf("Cateto B: %.2f\n", lado_b);
    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}