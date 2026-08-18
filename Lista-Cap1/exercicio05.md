# 📚 Questão 05

### Código:
```
main()
{
   printf("Linguagem C");
   system("pause");
}
```

## Retificações:
1)
- Para usar a função printf é necessário importar a biblioteca <stdio.h>
- Correção: inclur `#include <stdio.h>` no topo do arquivo/código

2)
- Para usar o system("pause") é necessário importar a biblioteca <stdlib.h>
- Correção: incluir `#include <stdlib.h>` no topo do arquivo/código

3)
- É uma boa prática retornar um inteiro ao final da execução
- Correção: incluir `return 0` antes de fechar a função main (pôr na última linha antes da chave de fechamento)

## Correção do código
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Linguagem C");
    system("PAUSE");
    return 0;
}
```