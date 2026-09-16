//Questão 23

#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_segundos;
    
    int total_segundos_inicio;
    int total_segundos_fim;
    
    int h_fim, m_fim, s_fim;

    printf("--- HORARIO DE TERMINO DO EXPERIMENTO ---\n\n");

    printf("Digite o horario de inicio:\n");

    printf("Horas (0-23): ");
    scanf("%d", &h_inicio);

    printf("Minutos (0-59): ");
    scanf("%d", &m_inicio);
    
    printf("Segundos (0-59): ");
    scanf("%d", &s_inicio);

    printf("\nDigite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    // 1. Converte o horario inicial inteiro para o total de segundos do dia
    total_segundos_inicio = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;

    // 2. Soma a duracao em segundos
    total_segundos_fim = total_segundos_inicio + duracao_segundos;

    // 3. Decompoe os segundos totais de volta para Horas, Minutos e Segundos
    // O operador % 86400 (segundos em 24h) garante o ajuste correto em viradas de dia
    total_segundos_fim = total_segundos_fim % 86400;

    h_fim = total_segundos_fim / 3600;
    m_fim = (total_segundos_fim % 3600) / 60;
    s_fim = total_segundos_fim % 60;

    // Exibicao formatada no padrao hh:mm:ss (o '02' adiciona zero a esquerda se necessario)
    printf("\n--- RESULTADO ---\n");
    printf("Horario de inicio:  %02d:%02d:%02d\n", h_inicio, m_inicio, s_inicio);
    printf("Duracao informada:  %d segundos\n", duracao_segundos);
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}