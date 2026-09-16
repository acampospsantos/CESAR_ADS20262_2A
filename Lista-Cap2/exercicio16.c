#include <stdio.h>

#include <stdio.h>
#include <math.h> // Necessaria para a funcao ceil()

int main(void) {
    float altura_degrau_cm; //Input usuario
    float altura_desejada_m; //Input usuario
    float altura_desejada_cm;
    float total_degraus;

    printf("--- CALCULADORA DE DEGRAUS ---\n\n");

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%f", &altura_desejada_m);

    // Conversão de unidades: converte a altura desejada de metros para centimetros
    altura_desejada_cm = altura_desejada_m * 100.0;

    //Divisão para saber a quantidade de degraus necessários
    // ceil() arredonda para o proximo inteiro para garantir o alcance completo da altura
    total_degraus = ceil(altura_desejada_cm / altura_degrau_cm);

    printf("\n--- RESULTADO ---\n");
    printf("Numero minimo de degraus necessarios: %.0f\n", total_degraus); //Sem casas decimais(claro)

    return 0;
}