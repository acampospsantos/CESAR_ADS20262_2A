# 📚 Questão 06

### Respostas:
a) Saída para idade = 65 e Explicação
Saída impressa:
```
Idoso
Adulto
Jovem
```
Explicação:
O código utiliza três estruturas if totalmente independentes em sequência.
 1. idade >= 60 ($65 \ge 60$) é verdadeiro: imprime "Idoso\n".
 2. O próximo comando é um novo if independente: idade >= 18 ($65 \ge 18$) também é verdadeiro: imprime "Adulto\n".
 3. O último bloco é a combinação if (idade >= 12) ... else: como idade >= 12 ($65 \ge 12$) é verdadeiro, ele imprime "Jovem\n" e ignora o else.
--> Como as condições não estão encadeadas, todas as validações verdadeiras são executadas sequencialmente.

b) Diferença entre *if* Independentes e a Cadeia *else-if*
  - if Independentes: O programa avalia obrigatoriamente todas as condições, uma após a outra. Mesmo que a primeira condição seja verdadeira, as seguintes continuarão sendo testadas e seus blocos poderão ser executados.
  - Cadeia else-if: Funciona em esquema de exclusão mútua. As condições são testadas em ordem até que uma seja verdadeira. Assim que uma condição é satisfeita, seu bloco é executado e todo o restante da estrutura é ignorado, garantindo que apenas uma alternativa seja escolhida.

c) Código Reescrito com *else-if*
```
#include <stdio.h>

int main() {
    int idade = 25;

    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    return 0;
}
```