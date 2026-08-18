# 📚 Questão 09

### Código:
```
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}
```

## Explicação
`printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');`\
a) uma quebra de linha `\n`\
b) um salto de espaço `\t`\
c) UMA aspas dupla `"`\
d) texto `"Primeiro programa`

#### Depois
`printf("%c", '\"');`\
a) Imprime outra aspas duplas `"`

## Saída:
```
(linha em branco)
    "Primeiro programa"
```