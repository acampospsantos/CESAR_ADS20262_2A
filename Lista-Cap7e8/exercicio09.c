//Questão 09

#include <stdio.h>

// Lê as 4 notas de cada um dos alunos e armazena na matriz
void lerNotas(float m[][4], int alunos) {
    for (int i = 0; i < alunos; i++) {
        printf("\n--- Notas do Aluno %d ---\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

// Calcula a média das 4 provas de um aluno específico (linha fixa)
float mediaAluno(float m[][4], int aluno) {
    float soma = 0.0f;
    for (int j = 0; j < 4; j++) {
        soma += m[aluno][j];
    }
    return soma / 4.0f;
}

// Calcula a média da turma em uma prova específica (coluna fixa)
float mediaProva(float m[][4], int alunos, int prova) {
    float soma = 0.0f;
    for (int i = 0; i < alunos; i++) {
        soma += m[i][prova];
    }
    return soma / alunos;
}

int main() {
    const int QTD_ALUNOS = 5;
    const int QTD_PROVAS = 4;
    float notas[5][4];

    // Leitura das notas
    lerNotas(notas, QTD_ALUNOS);

    // Exibição da média individual de cada aluno
    printf("\n--- MEDIA POR ALUNO ---\n");
    for (int i = 0; i < QTD_ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));
    }

    // Exibição da média geral de cada prova
    printf("\n--- MEDIA POR PROVA ---\n");
    for (int j = 0; j < QTD_PROVAS; j++) {
        printf("Prova %d: %.2f\n", j + 1, mediaProva(notas, QTD_ALUNOS, j));
    }

    return 0;
}