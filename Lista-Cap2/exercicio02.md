# 📚 Questão 02

### Respostas:
a) A biblioteca <conio.h> é uma extensão legada, específica para sistemas Windows. Ela não faz parte da biblioteca padrão do ANSI/ISO C, o que significa que o seu código não compilará em ambientes POSIX como Linux, macOS ou servidores web sem dependências de terceiros.

b) Na biblioteca padrão do C (<stdio.h>), as funções equivalentes para a leitura e escrita individual de caracteres são a getchar() (ou fgetc(stdin)) e a putchar() (ou fputc(..., stdout)). A principal diferença entre elas e as funções da <conio.h> reside na forma de captura: enquanto getch() lê a tecla no exato instante em que ela é pressionada, as funções padrão da <stdio.h> utilizam entrada bufferizada por linha.

c) Para realizar a leitura de um caractere sem que o '\n' deixado por leituras anteriores contamine a entrada, basta incluir um espaço em branco antes do especificador %c na função scanf(). Esse espaço instrui o compilador a ignorar todos os caracteres de espaçamento (whitespaces, como espaços, tabulações e quebras de linha) que estiverem pendentes no buffer antes de capturar o próximo caractere válido.
```
#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    // O espaco antes de %c ignora o '\n' e outros espacos em branco no buffer
    scanf(" %c", &caractere);

    printf("Caractere lido: %c\n", caractere);

    return 0;
}
```