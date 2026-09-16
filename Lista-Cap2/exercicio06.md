# 📚 Questão 06

### Respostas:

a) Diferença de fluxo entre ++n e m++ e valores impressos
- Prefixado (++n): O valor da variável é incrementado antes de a expressão ser avaliada e atribuída.
No Trecho A, n passa de 5 para 6 e, em seguida, o valor 6 é atribuído a x.

- Pós-fixado (m++): O valor atual da variável é retornado para a expressão antes do incremento ocorrer.
No Trecho B, o valor original 5 é atribuído a y e, logo após a avaliação dessa atribuição, m é incrementado para 6.
```
Valores impressos na tela:

Trecho A: Trecho A: n = 6, x = 6

Trecho B: Trecho B: m = 6, y = 5
```


b) A chamada ```printf("%d\t%d\t%d\n", n, n+1, n++);``` gera comportamento indefinido (Undefined Behavior) de acordo com o padrão ISO da linguagem C. 
Isso acontece pelos seguintes motivos:
1. Ausência de Ponto de Sequência: Os argumentos passados para uma função são separados por vírgulas de argumento, que não garantem uma ordem de avaliação (diferente do operador vírgula em expressões simples). Não existe um ponto de sequência entre a leitura de n e a modificação de n por n++.

2. Ordem de Avaliação de Argumentos não Especificada: O padrão da linguagem C deixa a critério do compilador decidir a ordem em que os argumentos de uma função são avaliados (pode ser da esquerda para a direita, da direita para a esquerda ou em qualquer outra ordem).

3. Modificação Única: Modificar uma variável (n++) e ler o seu valor (n ou n+1) no mesmo ponto de sequência resulta em um estado indeterminado na memória.

4. Dependendo do compilador (GCC, Clang, MSVC) e do nível de otimização selecionado na compilação, o programa pode imprimir sequências completamente diferentes de valores.
