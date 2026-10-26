//Questão 24

#include <stdio.h>

int main() {
    int ang1, ang2, ang3;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &ang1);

    printf("Digite o segundo angulo: ");
    scanf("%d", &ang2);

    printf("Digite o terceiro angulo: ");
    scanf("%d", &ang3);

    // Validação: todos devem ser estritamente positivos e a soma deve ser 180
    if (ang1 > 0 && ang2 > 0 && ang3 > 0 && (ang1 + ang2 + ang3 == 180)) {
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("# Triangulo Retangulo #\n");
        } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
            printf("# Triangulo Obtusangulo #\n");
        } else {
            printf("# Triangulo Acutangulo #\n");
        }
    } else {
        printf("Erro: Os angulos informados nao formam um triangulo valido!\n");
    }

    return 0;
}