# 📚 Questão 04

### Respostas:
a) Saída no Terminal e Explicação
A saída exata gerada no terminal será:
```
Prata
Ouro
```
Explicação: O switch salta diretamente para o case 2 porque *codigo == 2*. Como não há um break ao final do case 2, a execução não é interrompida: o fluxo de código simplesmente "continua descendo" (falls through) para o case 3 e executa o printf("Ouro\n");. A execução só para após o case 3 porque ali existe a instrução break;.

b) Papel do break e Nome do Fenômeno
- Papel do break: Interrompe imediatamente a execução da estrutura switch-case e transfere o controle do programa para a primeira linha após o fechamento da chave } do switch.
- Nome do Fenômeno: Fall-Through (passagem direta / queda através dos casos).

c) Tipos de Dados Permitidos no switch
Apenas expressões que resultem em tipos de dados inteiros/discretos podem ser avaliadas por um switch em C:
- Permitidos:
  - int (e suas variações: short, long, unsigned)
  - char (pois caracteres são armazenados internamente como seus códigos inteiros ASCII)
  - enum (enumerações)

- Não Permitidos:
  - Tipos de ponto flutuante (float, double) --> pois não representam valores discretos exatos.
  - Strings (char* ou arrays de char) --> o switch não compara sequências de texto em C.
  - Struct ou ponteiros em geral.