# 📚 Questão 05

### Respostas:
a) Saída Exata e Avaliação do Incremento
A saída exata impressa pelo comando printf será:
```
a = 0, b = 5, c = 8
```
O incremento ++b foi ignorado.
- Justificativa: O primeiro termo da condição (a != 0) é avaliado como falso (0 != 0 é falso). Devido ao comportamento do operador &&, a segunda parte (++b > 5) não é avaliada, portanto b permanece com o valor 5. Como a condição geral é falsa, o programa executa o else, fazendo c = 10 - 2 = 8.

b) Conceito de Avaliação de Curto-Circuito
A avaliação de curto-circuito é um mecanismo de otimização onde o segundo operando de uma expressão lógica só é avaliado se o primeiro não for suficiente para determinar o resultado final:
- Operador E (&&): Se o primeiro operando for falso (0), o resultado geral da expressão obrigatoriamente será falso. O compilador ignora completamente o segundo operando.
- Operador OU (||): Se o primeiro operando for verdadeiro (diferente de 0), o resultado geral da expressão obrigatoriamente será verdadeiro. O compilador ignora completamente o segundo operando.

c) Análise para *if (a == 0 || ++b > 5)*
Com a alteração da condição:
- Valores finais: b = 5 e c = 20
- Justificativa:
  1. A primeira expressão a == 0 é verdadeira (0 == 0).
  2. Por conta da regra de curto-circuito do operador ||, como o primeiro termo já é verdadeiro, a expressão ++b > 5 não é avaliada, mantendo b = 5.
  3. O bloco if é executado: c += 10, tornando c = 20.