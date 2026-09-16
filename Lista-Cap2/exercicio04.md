# 📚 Questão 04

```
//Valores das variáveis - INÍCIO
int a = 1, b = 2, c = 3, d = 4;
```

### Respostas:
1. ```a += b + c;```
- A expressão à direita é avaliada primeiro: b + c --> 2 + 3 => = 5
- A atribuição composta é executada: a = a + 5 --> 1 + 5 => a = 6 (novo valor de a é 6)
- Valores atuais: a = 6, b = 2, c = 3, d = 4

2. ```b *= c = d + 2;```
- Devido à associatividade da direita para a esquerda, resolvemos c = d + 2 primeiro:
   - d + 2 --> 4 + 2 => c = 6 (novo valor de c é 6)
- Em seguida, resolvemos b *= c:
   - b = b * 6 --> 2 * 6 => b = 12 (novo valor de b é 12)
- Valores atuais: a = 6, b = 12, c = 6, d = 4

3. ```d %= a + a + a;```
- A expressão à direita é avaliada primeiro: 
  - a + a + a --> 6 + 6 + 6 => = 18
- A atribuição composta é executada:
  - d = d % 18 --> 4 % 18 = 4 => d = 4 (novo valor de d é 4)
- Valores atuais: a = 6, b = 12, c = 6, d = 4

4. ```d -= c -= b -= a;```
- Atribuições encadeadas são avaliadas da direita para a esquerda:
  - b -= a --> b = b - a --> 12 - 6 => b = 6 (novo valor de b é 6)
  - c -= b --> c = c - 6 --> 6 - 6 => c = 0 (novo valor de c é 0)
  - d -= c --> d = d - 0 --> 4 - 0 => d = 4 (novo valor de d é 4)
- Valores atuais: a = 6, b = 6, c = 0, d = 4

5. ```a += b += c += 7;```
- Novamente, avaliamos da direita para a esquerda:
  - c += 7 --> c = c + 7 --> 0 + 7 => c = 7 (novo valor de c é 7)
  - b += c --> b = b + 7 --> 6 + 7 => b = 13 (novo valor de b é 13)
  - a += b --> a = a + 13 --> 6 + 13 => a = 19 (novo valor de a é 19)
- Valores atuais: a = 19, b = 13, c = 7, d = 4

```
//Valores das variáveis - FINAL
int a = 19, b = 13, c = 7, d = 4
```