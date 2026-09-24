// Questão 08

#include <stdio.h>
#include <math.h>

int main(){
    const float PI = 3.14159265;

    float raio;

    printf("Digite o valor do Raio(R): ");
    scanf("%f", &raio);

    //a) A área da superfície da esfera (A = 4 * PI * R2);
    float areaSuperficie = 4 * PI * powf(raio, 2);

    //b) O volume da esfera (V = (4.0/3.0) * PI * R3).
    float volume = 4.0/3.0 * PI * powf(raio,3);

    // Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas decimais.
    // Atenção para a divisão real de 4.0 por 3.0!
    printf("\n--- Exibição resultados ---\n");
    printf("Área da superfície = %.3f cm²\n", areaSuperficie);
    printf("Volume da esfera = %.3f cm³", volume);

    return 0;
}