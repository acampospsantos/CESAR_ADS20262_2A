// Questão 10

#include <stdio.h>

int main() {
    int total_segundos;
    int horas;
    int minutos;
    int segundos_restantes;

    const int SEGUNDOS_POR_HORA = 3600;
    const int SEGUNDOS_POR_MINUTO = 60;

    printf("--- DECOMPOSICAO DE TEMPO ---\n\n");
    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total_segundos);

    // 1. Calcula o total de horas (divisao inteira)
    horas = total_segundos / SEGUNDOS_POR_HORA;

    // 2. Extrai os segundos que sobraram apos retirar as horas completas
    segundos_restantes = total_segundos % SEGUNDOS_POR_HORA;

    // 3. Dos segundos restantes, calcula quantos minutos inteiros existem
    minutos = segundos_restantes / SEGUNDOS_POR_MINUTO;

    // 4. O resto dessa divisão representa de fato os segundos
    segundos_restantes = segundos_restantes % SEGUNDOS_POR_MINUTO;

    printf("\n%d segundos correspondem a: %d hora(s), %d minuto(s) e %d segundo(s).\n", total_segundos, horas, minutos, segundos_restantes);

    return 0;
}