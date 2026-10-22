# 📚 Questão 03

### Instrução:
```
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';
```

### Respostas:
a) A segunda linha utiliza o operador ternário ? :, que avalia uma expressão condicional e retorna um entre dois valores: 
1. Condição (*media >= 7.0*): É avaliada primeiro.
2. Valor se Verdadeiro ('A'): Fica logo após o ?. É retornado caso a condição seja verdadeira.
3. Valor se Falso ('R'): Fica logo após o :. É retornado caso a condição seja falsa.
--> Para *media = 6.8*, o teste 6.8 >= 7.0 resulta em falso. Portanto, o operador retorna a opção correspondente ao falso ('R'), armazenando o caractere 'R' na variável situacao.

b) Reescrita com a Estrutura Tradicional *if-else*
```
#include <stdio.h>

int main() {
    float nota1 = 6.0, nota2 = 7.6, media;
    char situacao;

    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }

    return 0;
}
```

c) Limitações do Operador Ternário
Não, o operador ternário não pode substituir qualquer estrutura if-else.
- Natureza de Expressão: O operador ternário é uma expressão que produz um valor (retorna um resultado), enquanto o if-else é uma instrução de controle de fluxo.
- Limitação de Bloco de Comandos: O ternário não foi feito para executar blocos complexos de código com múltiplas instruções (como chamadas de funções encadeadas, laços de repetição ou várias atribuições).
- Tipagem dos Retornos: Ambas as ramificações do ternário (após ? e :) precisam retornar valores compatíveis com o tipo esperado na atribuição ou avaliação, o que impede a execução de ações puramente procedurais sem retorno direto.