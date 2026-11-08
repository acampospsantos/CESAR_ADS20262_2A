# 📚 Questão 04

### Código:
```
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

### Respostas:
a) Caso Base, Passo Recursivo e Ausência do Caso Base   
   - Caso Base: ``` (n == 0) ? (long)1 ```
     - Ocorre quando $n = 0$, retornando 1 diretamente sem realizar novas chamadas recursivas.
   - Passo Recursivo: ``` (long)n * fatorial(n - 1) ```
     - É a instrução que reduz o problema chamando a própria função com um argumento menor (n - 1).

   - O que aconteceria se o caso base fosse removido?
      
      --> Sem o caso base para interromper a sequência de chamadas, a função entraria em um ciclo infinito de chamadas recursivas (fatorial(-1), fatorial(-2), ...), esgotando a memória da pilha de execução e provocando o estouro de pilha, que resulta em uma falha de execução ou travamento do programa.

b) Rastreamento Completo de fatorial(4)
   1. Fase de Empilhamento (Chamadas Avançando)
      1. fatorial(4) aguarda o retorno de 4 * fatorial(3)
      2. fatorial(3) aguarda o retorno de 3 * fatorial(2)
      3. fatorial(2) aguarda o retorno de 2 * fatorial(1)
      4. fatorial(1) aguarda o retorno de 1 * fatorial(0)
      5. fatorial(0) atinge o caso base e retorna 1
   2. Fase de Desempilhamento (Retornos Calculados)
      - fatorial(0) devolve 1 para fatorial(1)
      - fatorial(1) calcula 1 * 1 $\rightarrow$ devolve 1 para fatorial(2)
      - fatorial(2) calcula 2 * 1 $\rightarrow$ devolve 2 para fatorial(3)
      - fatorial(3) calcula 3 * 2 $\rightarrow$ devolve 6 para fatorial(4)
      - fatorial(4) calcula 4 * 6 $\rightarrow$ devolve 24 para a função chamadora (main)
   
      --> Resultado Final: 24

c) Mecanismo da Pilha de Execução e Falha por Recursão Infinita

A cada chamada recursiva de uma função, o sistema operacional aloca um novo frame de pilha na memória RAM. Esse frame armazena:
   - Os parâmetros da função (como o valor atual de n);
   - As variáveis locais;
   - O endereço de retorno para saber para onde voltar após o término da função.

Como a memória reservada para a pilha é finita e limitada, uma recursão sem caso base cria novos frames continuamente sem liberar os anteriores. Eventualmente, a pilha ultrapassa o espaço de memória que lhe foi alocado, causando um estouro da pilha de execução, o que obriga o sistema operacional a abortar a execução do programa por violação de acesso à memória.