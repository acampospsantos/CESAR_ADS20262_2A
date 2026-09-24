# 📚 Questão 04

```
//Valores das variáveis - INÍCIO
int i = 2, j = 3, k = 0
float x = 2.5, y = 5.0
```

### Respostas:
a. ```a) i < j + 2;```
- Primeiro somamos j + 2 = 3 + 2 => 5
- Em seguida, comparamos: i < 5 => 2 < 5 => Verdadeiro
- Resultado = 1

b. ```2 * i - 5 <= j - 4;```
- Primeiro avaliamos o lado direito: j - 4 = 3 - 4 => -1
- Depois avaliamos o lado esquerdo: 2 * i - 5 = 2 * 2 - 5 => -1
- Terceiro passo é comparar ambos: -1 <= -1 --> Verdadeiro
- Resultado = 1

c. ```!k && (x + y >= 7.5);```
- Primeiro avaliamos a expressão do parênteses:
  - x + y = 2.5 + 5 = 7.5
  - 7.5 >= 7.5 --> Verdadeiro = 1
- Em sequência:
  - !k --> k = 0 --> !k == 1
- Comparando ambos: 1 && 1 == Verdadeiro
- Resultado = 1

d. ```!(i == j) || (y / x == 2.0)```
- Vamos avaliar a expressão da esquerda:
  - i == j --> 2 == 3 --> 0(Falso)
  - !(i==j) --> !(0) --> 1(Verdadeiro)
  *OBS: Por conta do operador || já seria possível garantir que a expressão inteira é verdadeira*
- Vamos avaliar a expressão da direita:
  - y / x --> == 2.0
  - y/x == 2.0 --> Verdadeiro
- Resultado = 1

e. ```i == 2 && j == 4 || k == 0```
- Vamos avaliar da direita pra esquerda:
  - k == 0 --> 0 == 0 --> = 1 (Verdadeiro)
- Expressão do meio:
  - j == 4 --> 3 == 4 --> = 0 (Falso)
- Expressão da esquerda:
  - i == 2 --> 2 == 2 --> = 1 (Verdadeiro)
- i == 2 && j == 4 --> 1 && 0 --> = 0
- 0 || k == 0 --> 0 || 1 = 1 (Verdadeiro)
- Resultado = 1