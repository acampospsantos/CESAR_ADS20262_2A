# 📚 Questão 06

### Código:
```
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

### Respostas:
a) Valor Final da Variável x
O valor final de x impresso no console será 6.

b) Sequência Passo a Passo de Comparações e Incrementos
O operador pós-fixado x++ funciona em duas etapas na mesma expressão: primeiro avalia o valor atual de x na comparação relacional < 5, e depois incrementa x em +1 imediatamente após o teste, antes de decidir se entra ou não na próxima iteração.
1. Início: x = 0.
2. 1ª Avaliação (x++ < 5): Testa 0 < 5 (Verdadeiro). x é incrementado para 1. O laço executa o corpo nulo ;.
3. 2ª Avaliação (x++ < 5): Testa 1 < 5 (Verdadeiro). x é incrementado para 2. O laço executa o corpo nulo ;.
4. 3ª Avaliação (x++ < 5): Testa 2 < 5 (Verdadeiro). x é incrementado para 3. O laço executa o corpo nulo ;.
5. 4ª Avaliação (x++ < 5): Testa 3 < 5 (Verdadeiro). x é incrementado para 4. O laço executa o corpo nulo ;.
6. 5ª Avaliação (x++ < 5): Testa 4 < 5 (Verdadeiro). x é incrementado para 5. O laço executa o corpo nulo ;.
7. 6ª Avaliação (x++ < 5): Testa 5 < 5 (Falso). Ainda assim, o incremento pós-fixado ocorre e x é incrementado para 6.
8. O laço while se encerra por falha no teste condicional, deixando x = 6.

c) Código Reescrito de Forma Clara e Explícita
Para tornar o código legível e sem ambiguidades, a comparação e o incremento devem ser separados de forma explícita no corpo do laço:
```
#include <stdio.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++; // Incremento explicito no corpo do laco
    }
    
    // Para compensar o incremento que no post-incremento ocorria na falha do teste (5 < 5)
    x++;

    printf("Valor final de x = %d\n", x);

    return 0;
}
```