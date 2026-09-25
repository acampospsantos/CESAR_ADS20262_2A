# 📚 Questão 02

### Respostas:
a) Erro de Sintaxe/Declaração na Instrução *printf*
O erro ocorre devido ao escopo de bloco da variável soma:
- A variável foi declarada dentro do bloco de chaves do laço for (int soma = 0;).
- Variáveis declaradas dentro de um bloco delimitado por { ... } possuem visibilidade restrita ao interior desse mesmo bloco.
- Quando a execução atinge o printf fora do laço for, o compilador não reconhece a variável *soma* naquele escopo, gerando um erro de compilação.

b) Incorreção Conceitual ao Mover o printf para Dentro do Laço
Mesmo que o printf estivesse dentro do laço, a variável soma seria recriada e reinicializada com 0 a cada iteração:
1. A cada passagem pelo laço, a declaração int soma = 0; aloca a variável e redefine seu valor para zero.
2. A linha soma += i * i; apenas atribui a soma o valor do quadrado do $i$ atual ($0 + i^2$), sem acumular o valor das iterações anteriores.
3. Ao final de cada iteração, ao atingir o fechamento de chave }, a variável soma é destruída, perdendo qualquer histórico acumulado.
4. O printf interno apenas exibiria o quadrado do número corrente ($1, 4, 9, 16, \dots$), e não a soma acumulada da série.

c)
Código Corrigido:
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do bloco do laco para acumular o valor

    for (i = 1; i < 10; i++) {
        soma += i * i; // Acumula os quadrados de 1 a 9
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```
- Resultado Impresso: 1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 = 285
- Conceitos de Escopo, Visibilidade e Tempo de Vida em C
  - Escopo: Refere-se à região do código onde o nome de um identificador (variável, função, etc.) é válido e reconhecido. Em C, uma variável declarada dentro de { ... } possui escopo de bloco.

 - Visibilidade: Define a capacidade de um trecho do programa acessar essa variável. A variável é visível apenas a partir da sua linha de declaração até o fechamento da chave } do bloco onde foi declarada.

  - Tempo de Vida: Refere-se ao intervalo de tempo durante a execução em que a memória alocada para aquela variável permanece reservada:

    - Variáveis locais padrão (com duração de armazenamento automática) nascem no momento em que a execução atinge sua declaração e são destruídas automaticamente assim que a execução deixa o bloco de origem.

    - Para que soma preserve seu estado entre as iterações do laço, ela precisa ser declarada no bloco do main() (com tempo de vida ativo durante toda a execução da função principal).