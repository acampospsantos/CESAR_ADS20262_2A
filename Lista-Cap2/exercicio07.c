// 📚 Questão 07

#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    
    // O scanf utiliza as barras '/' como separadores fixos
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    // Inverte a data informada: formato aaaa/mm/dd
    printf("Data invertida: %d/%d/%d\n", ano, mes, dia);

    return 0;
}