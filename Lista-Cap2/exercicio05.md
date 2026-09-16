# 📚 Questão 05

```
//Valores das variáveis - INÍCIO
int i = 1, j = 2, k = 3, n = 2; 
float x = 3.3, y = 4.4;
```

### Respostas:
a) ```i < j + 3```
- Aritmética primeiro: j + 3 --> 2 + 3 = 5
- Comparação: 1 < 5 (Verdadeiro)
- Resultado: 1

b) ```2 * i - 7 <= j - 8```
- Esquerda: 2 * 1 - 7 --> 2 - 7 = -5
- Direita: 2 - 8 = -6
- Comparação: -5 <= -6 (Falso)
- Resultado: 0

c) ```-x + y >= 2.0 * y```
- Esquerda: -3.3 + 4.4 = 1.1
- Direita: 2.0 * 4.4 = 8.8
- Comparação: 1.1 >= 8.8 (Falso)
- Resultado: 0

d) ```x == y```
- Comparação: 3.3 == 4.4 (Falso)
- Resultado: 0

e) ```!(n - j)```
- Parênteses primeiro: n - j --> 2 - 2 = 0
- Operador de negação: !0 (Negação do falso é verdadeiro)
- Resultado: 1

f) ```!n - j```
- Negação unária primeiro: !n --> !2 (Como 2 é verdadeiro, !2 resulta em 0)
- Subtração: 0 - j --> 0 - 2 = -2
- Observação: O resultado numérico é -2. Em um contexto condicional if(-2), isso seria avaliado como verdadeiro, mas o valor do resultado da expressão aritmética final é -2.
- Resultado: -2 (ou 1 se considerado apenas em contexto de condicional)

g) ```i && j && k```
- Como 1, 2 e 3 são todos não-nulos (verdadeiros): 1 && 1 && 1
- Resultado: 1

h) ```i || j - 3 && k```
- Precedência: Aritmética (j - 3 = -1), depois && (-1 && 3 = 1), depois || (i || 1).
- Como i = 1 já é verdadeiro, o resultado é verdadeiro.
- Resultado: 1

i) ```i < j && 2 >= k```
- Relacionais primeiro: 1 < 2 (Verdadeiro = 1) e 2 >= 3 (Falso = 0)
- Operação lógica: 1 && 0
- Resultado: 0

j) ```i == 2 || j == 4 || k == 5```
- Igualdades primeiro: 1 == 2 (0), 2 == 4 (0), 3 == 5 (0)
- Operações lógicas: 0 || 0 || 0
- Resultado: 0

```
//Resultado FINAL
a) 1
b) 0
c) 0
d) 0
e) 1
f) -2
g) 1
h) 1
i) 0
j) 0
```