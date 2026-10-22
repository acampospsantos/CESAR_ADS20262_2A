# 📚 Questão 01

### Respostas:
a) Efeito de if *(x = 0)* vs if *(x == 0)*
- *if (x = 0)* (Atribuição): Usa o operador de atribuição =.
  - O que acontece com x: O valor 0 é atribuído à variável x, sobrescrevendo qualquer valor anterior.
  - Qual bloco executa: A expressão da condição assume o próprio valor atribuído (0). Em C, 0 é interpretado como falso. Portanto, o bloco do if nunca será executado (e o bloco else, se existir, será o executado).

- *if (x == 0)* (Comparação): Usa o operador relacional de igualdade ==.
  - O que acontece com x: O valor de x não é alterado.
  - Qual bloco executa: O bloco do if só será executado se x for atualmente igual a 0.


b) Interpretação de Valores Numéricos no if
Na Linguagem C não existe originalmente um tipo booleano nativo estrito para condições (antes do padrão C99/<stdbool.h>):
- Verdadeiro (True): Qualquer valor numérico (inteiro ou ponto flutuante) diferente de zero (ex: 1, -5, 3.14, -0.001).
- Falso (False): Apenas o valor zero (0 ou 0.0).

--> Quando uma expressão dentro do if é avaliada, o compilador reduz o resultado a um número. Se o resultado for qualquer valor diferente de zero, a condição é considerada verdadeira.


c) Análise da instrução *if (x = -5)*
- Execução da Atribuição: A variável x recebe o valor -5.
- Avaliação da Condição: O valor retornado pela expressão dentro do parêntese é -5.
- Resultado: Como -5 é um valor diferente de zero, a Linguagem C interpreta essa condição como verdadeira.
- Conclusão: O bloco do if será executado, independentemente do valor que x possuía antes dessa instrução.