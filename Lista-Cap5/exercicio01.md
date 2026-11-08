# 📚 Questão 01

### Código:
```
#include <stdio.h>
float celsius(float);
int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}
float celsius(float fahr) {
return (fahr - 32.0) * 5.0 / 9.0;
}
```

### Respostas:
a) Identificação e Papel de Cada Etapa

   - Protótipo da Função: float celsius(float); (declarado antes da main)
      - Papel: Declara a existência da função para o compilador, especificando seu nome, o tipo de dado que ela retorna e a lista de tipos dos seus parâmetros, sem fornecer a implementação ainda.
   - Chamada da Função: c = celsius(f); (dentro da função main).
      - Papel: Invoca a execução da função, passando a variável f como argumento para ser processada, recebendo de volta o valor calculado para atribuir à variável c.
   - Definição da Função: float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; } (após a main).
      - Papel: Contém o corpo com as instruções executáveis do algoritmo (a implementação da conversão de temperatura) e a instrução return para devolver o resultado.

b) Função do Protótipo para o Compilador

O protótipo informa ao compilador sobre a assinatura da função antes que ela seja chamada. Ele permite que o compilador realize a checagem de tipos, verificando se o número e os tipos dos argumentos passados na chamada correspondem ao que a função espera, além de garantir a conversão correta do valor retornado.

Se o protótipo fosse omitido e a função permanecesse definida depois da main():
   1. Nas versões mais antigas do padrão C (C89/C90), o compilador assumiria uma declaração implícita com retorno do tipo int (implicit int rule). Isso causaria erros na conversão dos tipos e avisos (warnings) de incompatibilidade de tipos ao manipular float.
   2. Nos padrões de C modernos (C99 em diante), a omissão gera um erro de compilação de "função não declarada" (implicit declaration of function is invalid in C99), impedindo a geração do executável.

c) Tipo da Função celsius()

O tipo da função celsius() é float.

Explicação: O tipo de uma função indica o tipo do dado que é devolvido pela instrução return para quem a chamou. Os parâmetros recebidos são apenas os dados de entrada (que poderiam ser de qualquer outro tipo, como int ou double), enquanto o tipo da função determina o resultado produzido e como o espaço de memória do retorno deve ser interpretado na expressão de chamada.