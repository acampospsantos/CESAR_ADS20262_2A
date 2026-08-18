# 📚 Questão 12

| Instrução | Status | Justificativa Teórica |
|-----------|--------|----------------------|
| `a) int a;` | **Correto** | Declara uma variável `a` do tipo inteiro (`int`). Sintaxe válida. |
| `b) float b;` | **Correto** | Declara uma variável `b` do tipo ponto flutuante simples (`float`). Sintaxe válida. |
| `c) double float c;` | **Incorreto** | `double` e `float` são tipos distintos e não podem ser combinados. Deve ser `float c;` ou `double c;`. |
| `d) unsigned char d;` | **Correto** | Declara uma variável `d` do tipo caractere sem sinal (`unsigned char`). Sintaxe válida. |
| `e) unsigned e;` | **Correto** | Em C, quando apenas `unsigned` é especificado, o compilador assume `unsigned int`. Equivale a `unsigned int e;`. |
| `f) long float f;` | **Incorreto** | O modificador `long` não pode ser aplicado ao tipo `float`. Para maior precisão deve-se usar `double` ou `long double`. |
| `g) long g;` | **Correto** | Em C, `long` equivale a `long int`. Declara uma variável inteira longa. |
| `h) long double h;` | **Correto** | Declara uma variável de ponto flutuante com precisão estendida (`long double`). Sintaxe válida. |

## Resumo dos erros

### c) `double float c;`
❌ Incorreto

Os tipos `double` e `float` são mutuamente exclusivos.

Exemplos corretos:

```c
float c;
double c;
```

### f) `long float f;`
❌ Incorreto

O modificador `long` não é permitido para `float`.

Exemplos corretos:

```c
float f;
double f;
long double f;
```