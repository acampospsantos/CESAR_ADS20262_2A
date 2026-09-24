# 📚 Questão 03

```
//Valores das variáveis - INÍCIO
int a = 2, b = 4, c = 5, d = 10;
```

### Respostas:
1. ```a += b + c;```
- A expressão à direita é avaliada primeiro: b + c --> 4 + 5 => = 9
- A atribuição composta é executada: a = a + 5 --> 2 + 9 => a = 11 (novo valor de a é 11)
- Valores atuais: a = 11, b = 4, c = 5, d = 10

2. ```b *= c = d - 2;```
- Devido à associatividade da direita para a esquerda, resolvemos c = d - 2 primeiro:
   - d - 2 --> 10 - 2 => c = 8 (novo valor de c é 8)
- Em seguida, resolvemos b *= c:
   - b = b * 8 --> 4 * 8 => b = 32 (novo valor de b é 32)
- Valores atuais: a = 11, b = 32, c = 8, d = 10

3. ```d %= a + 3;```
- A expressão à direita é avaliada primeiro: 
  - a + 3 --> 11 + 3 => = 14
- A atribuição composta é executada:
  - d = d % 14 --> 10 % 14 = 4 => d = 10
- Valores atuais: a = 11, b = 32, c = 8, d = 10

4. ```a += b += c += 5;```
- Atribuições encadeadas são avaliadas da direita para a esquerda:
  - c += 5 --> c = c + 5 --> 8 + 5 => c = 13 (novo valor de c é 13)
  - b += c --> b = b + c --> 32 + 13 => c = 0 (novo valor de b é 45)
  - a += b --> a = a + b --> 11 + 45 => a = 56 (novo valor de a é 56)
- Valores atuais: a = 56, b = 45, c = 13, d = 10

```
//Valores das variáveis - FINAL
int a = 56, b = 45, c = 13, d = 10
```