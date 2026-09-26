# 📚 Questão 05

### Código:
```
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

### Respostas:
a) Quantidade de Iterações
 - O laço executará exatamente 5 iterações antes de ser encerrado.
 - O laço começa com i = 0 e j = 10. A cada iteração, i aumenta 1 unidade e j diminui 1 unidade. O laço encerra na 6ª verificação, quando i = 5 e j = 5, fazendo com que a condição i < j (5 < 5) seja falsa.

b) Saída Exata Produzida no Console
- *i = 0, j = 10 | soma = 10*
- *i = 1, j = 9 | soma = 10*
- *i = 2, j = 8 | soma = 10*
- *i = 3, j = 7 | soma = 10*
- *i = 4, j = 6 | soma = 10*

c) Reescrita Equivalente Utilizando a Estrutura while
Para converter a lógica do for com operador vírgula para while, as inicializações das variáveis de controle devem ocorrer antes do laço, e o incremento/decremento duplo deve ser posicionado no final do bloco do laço:
```
#include <stdio.h>

int main() {
    int i = 0, j = 10; 

    while (i < j) { 
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        
        i++; // Atualizacao das variaveis
        j--;
    }

    return 0;
}
```