# 📚 Questão 01

### Código:
```
#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}
```

### Respostas:
a) 2

b) O valor armazenado é 2, porque em C a atribuição de um número com ponto flutuante a uma variável do tipo inteiro realiza uma conversão implícita de tipo, descartando completamente a parte fracionária sem realizar arredondamento. O nome desse fenômeno é truncamento.

c) Para manter a precisão, pode-se mudar o tipo de dado: Declarar a variável como float ou double para armazenar o 2.97. Também é possível fazer um casting explícito para deixar claro que o truncamento é proposital. E também é possível arredondar o valor antes de converter para inteiro: utilizando a função round() da biblioteca <math.h> 