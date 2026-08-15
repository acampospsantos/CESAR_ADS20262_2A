# 📚 Questão 06

### Código:
```
main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}
```

## Erros de sintaxe:
- Uso de ponto e vírgula em vez de vírgula na declaração de variáveis
- Na mesma linha, uso de dois pontos(:) em vez do ponto e vírgula(;) no final da instrução
- Variável d não declarada antes de ser impressa no printf
- Sem retorno no final da main()


## Erros de lógica
- Ausência das bibliotecas <stdio.h> e <stdlib.h>

## Correção do código
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    printf("Os números são: %d %d %d %d\n", a, b, c, d);
    system("pause");
    return 0;
}
```