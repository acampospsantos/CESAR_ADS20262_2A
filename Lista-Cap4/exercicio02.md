# 📚 Questão 02

### Código:
```
int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
else
    printf("Opção B\n");
```

### Respostas:
a) Mensagem Impressa e Justificativa
A mensagem impressa no console será Opção B.
Justificativa: Como não foram utilizadas chaves { }, o else se associa automaticamente ao if mais próximo, que é o *if (y > 10)*. O fluxo de execução acontece da seguinte forma:
1. O primeiro teste *if (x > 10)* é avaliado como verdadeiro (15 > 10).
2. O programa entra no bloco interno e avalia *if (y > 10)*, que é falso.
3. Como a condição do if interno falhou, a execução desvia para o seu else correspondente, imprimindo "Opção B\n".

b) Regra Oficial da Linguagem C para Associação do *else*
A regra oficial estabelece que, na ausência de chaves de bloco { }, uma cláusula else é sempre associada ao if mais próximo e não associado anterior, independentemente do recuo ou indentação do código.

c) Código reescrito com chaves
Para garantir que a "Opção B" seja impressa apenas quando x <= 10, precisamos isolar o if (y > 10) dentro do bloco do primeiro if, fazendo com que o else pertença explicitamente ao if (x > 10):
```
#include <stdio.h>

int main() {
    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }

    return 0;
}
```