#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    int numero1;
    int numero2;
    int numero3;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);

    double media = (numero1 + numero2 + numero3)/3;

    printf("\nMédia final = %.2lf", media);

    return 0;
}