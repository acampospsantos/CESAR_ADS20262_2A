#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    // %-12s alinha o texto à esquerda em um campo de 12 caracteres
    // %-5s alinha o texto à esquerda em um campo de 5 caracteres
    
    // Cabeçalho e divisores
    printf("%-12s %-5s\n", "ALUNO(A)", "NOTA");
    printf("%-12s %-5s\n", "==========", "=====");
    
    // Lista de alunos e notas
    printf("%-12s %-5s\n", "ALINE", "9.0");
    printf("%-12s %-5s\n", "MÁRIO", "DEZ");
    printf("%-12s %-5s\n", "SÉRGIO", "4.5");
    printf("%-12s %-5s\n", "SHIRLEY", "7.0");

    return 0;
}