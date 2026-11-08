# 📚 Questão 02

### Código:
```
int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return soma, media;
}
void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}
```

### Respostas:
a) Limitação do Comando return e o Operador Vírgula

   - Quantidade de valores: Uma função em C pode devolver apenas um único valor por meio do comando return
   - Intenção vs. Realidade: Na função calcular(), o programador pretendia retornar dois valores simultaneamente (a soma e a media).
   - Por que a abordagem falha: Em C, a expressão return soma, media; faz uso do operador vírgula (comma operator). Esse operador avalia a expressão da esquerda (soma), descarta o seu resultado e avalia a expressão da direita (media), que se torna o valor final retornado. Portanto, a função devolve apenas o valor de media, ignorando completamente a soma.

b) O Comando return; em Funções void

- Efeito na função imprime_mensagem(): Funciona como uma instrução de interrupção de fluxo precoce (early exit). Se a condição erro < 0 for verdadeira, a função imprime a mensagem e encerra imediatamente a sua execução, retornando o controle para a função chamadora sem executar a linha posterior (printf("Codigo processado...", erro);).
- Obrigatoriedade: Não é obrigatório no final de uma função void. O final de um bloco void possui um retorno implícito quando a chave de fechamento } é alcançada. O uso do return; é necessário apenas quando se deseja interromper a execução da função antes do seu término natural (como no fluxo condicional do exemplo).

c) Reescrevendo as Funções e Justificativa
```
#include <stdio.h>

// Função que calcula e retorna apenas a media
int calcular_media(int a, int b, int c) {
    return (a + b + c) / 3;
}

// Segunda função, separada, que calcula e retorna apenas a soma
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
```

## Explicação
Como a instrução return transfere imediatamente o controle de volta para quem chamou a função e só permite carregar um único valor escalar no registrador de retorno, não é possível devolver múltiplos valores independentes usando apenas a sintaxe do return.