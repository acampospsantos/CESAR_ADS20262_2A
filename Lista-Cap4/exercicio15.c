//Questão 15

#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("Trabalhador ELEGIVEL para aposentadoria.\n");
    } else {
        printf("Trabalhador NAO elegivel para aposentadoria.\n");
    }

    return 0;
}