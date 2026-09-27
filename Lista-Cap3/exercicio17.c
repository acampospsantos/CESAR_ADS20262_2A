// Questão 17

#include <stdio.h>

int main() {
    float nota = 0.0f;
    float soma = 0.0f;
    float maior = 0.0f;
    float menor = 10.0f;
    int total_alunos = 0;

    printf("\n--- ESTATISTICAS DA TURMA ---\n");
    printf("(Digite -1.0 para encerrar a leitura)\n\n");

    while (1) {
        printf("Digite a nota do aluno %d: ", total_alunos + 1);
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("[AVISO] Nota invalida! Digite apenas valores de 0.0 a 10.0 (ou -1.0 para sair).\n\n");
            continue;
        }

        // Inicializacao/Atualizacao da maior e menor nota
        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior){
                maior = nota;
            }
            if (nota < menor){
                menor = nota;
            }
        }

        soma =soma + nota;
        total_alunos = total_alunos + 1;
    }

    // Exibicao dos resultados estatisticos
    printf("        RELATORIO FINAL DA TURMA        \n");

    if (total_alunos > 0) {
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma:       %.2f\n", maior);
        printf("c) Menor nota da turma:       %.2f\n", menor);
        printf("d) Media geral da turma:      %.2f\n", soma / (float)total_alunos);
    } else {
        printf("Nenhum aluno foi registrado no sistema.\n");
    }

    printf("=======================================\n");

    return 0;
}