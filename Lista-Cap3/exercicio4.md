# 📚 Questão 04

### Respostas:
a) Ação Exata do Comando *break*
Quando o comando break é acionado dentro de um laço (for ou while), a execução do laço é interrompida/quebrada imediatamente e de forma definitiva.
  - As instruções restantes do bloco do laço localizadas após o break são ignoradas.
  - O controle de fluxo salta para a primeira instrução localizada após o fechamento de chave } do laço.

b) Ação Exata do Comando continue no Laço for
Quando o comando continue é acionado dentro de um laço for, ele interrompe apenas a iteração atual do laço.
- O programa salta e ignora todas as instruções restantes do bloco abaixo do continue.
- Expressão executada imediatamente após: O fluxo de execução salta diretamente para a expressão de incremento/atualização.
- Em seguida, a condição de teste (a segunda expressão) é reavaliada para determinar se o laço fará uma nova iteração.

c) Comportamento do break em Laços Aninhados
Em uma estrutura de laços aninhados, a instrução break interrompe apenas o laço mais interno em que está contida diretamente.
- O laço externo continua sua execução normal, prosseguindo para sua próxima iteração até que sua própria condição de parada seja atingida.

Exemplo em código:
```
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {         // Laco EXTERNO
        for (int j = 1; j <= 5; j++) {     // Laco INTERNO
            if (j == 3) {
                break; // Interrompe APENAS o laco interno (quando j == 3)
            }
            printf("i=%d, j=%d\n", i, j);
        }
        // O fluxo volta para o incremento do laco externo (i++)
    }
    return 0;
}
```