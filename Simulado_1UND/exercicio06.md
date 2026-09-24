# 📚 Questão 06

### Código:
```
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}
```

### Respostas:
a) Causa do Erro de Compilação
==> O erro ocorre por causa do escopo de bloco da variável *soma*:
- A variável foi declarada dentro das chaves do laço for (*int soma = 0;*).
- Em C, variáveis declaradas dentro de um bloco de código { ... } existem exclusivamente no escopo daquele bloco e são destruídas ao sair dele.
- Ao tentar acessar *soma* no printf fora do laço for, o compilador gera um erro informando que a variável não foi declarada naquele escopo.


b) Fluxo de Execução e Impacto de *continue* e *break*
- Iterações Executadas (i de 1 a 7):
  - *i = 1, 2, 3, 4*: Executam normalmente.
  - *i = 5 (continue)*: O comando continue ignora as instruções restantes do bloco e salta imediatamente para a próxima iteração (i++).
  - *i = 6, 7*: Executam normalmente.
  - *i = 8 (break)*: O comando break interrompe e encerra o laço for prematuramente
  - Por conta do break, o ciclo é quebrado, ignorando os valores 8, 9 e 10.

c) Correção: Para acumular a soma corretamente, a variável *soma* deve ser declarada fora do laço *for()*
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laço

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue; // Pula o 5
        if (i == 8) break;    // Encerra no 8

        soma += i * i; //soma = soma + i * i

        // Acumula os quadrados: 1 + 4 + 09 + 16 + 36 + 49
        // Soma:                 1 / 5 / 14 / 30 / 66 / 115
    }

    // Resultado de soma = 115
    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```