# 📚 Questão 01

### Respostas:
a) Diferença Essencial entre *while* e *do-while*
*while* (Pré-testado / Entrada): A avaliação do teste condicional ocorre antes da primeira execução do bloco. Se a condição for falsa na primeira verificação, o corpo do laço nunca é executado.
- Número mínimo de execuções: 0 (zero).

*do-while* (Pós-testado / Saída): O bloco de código é executado primeiro e a verificação do teste condicional ocorre após a execução.
- Número mínimo de execuções: 1 (uma)


b) Escolha Adequada de Cada Estrutura
1. Laço for:
- Situação Ideal: Repetição Contada / Iteração Definida.
- Cenário: Quando o número exato de iterações é conhecido antes de entrar no laço (ex.: percorrer um vetor de tamanho N, matrizes, intervalos numéricos).
- Estrutura: Sintetiza inicialização, condição e atualização na mesma linha do cabeçalho, mantendo o controle de loop limpo e coeso.

2. Laço while:
- Situação Ideal: Repetição Baseada em Condição Sem Contagem Prévia.
- Cenário: Quando a parada depende de um evento ou estado externo cuja ocorrência não é previsível pelo código (ex.: receber entrada do usuário até um valor ser digitado).
- Estrutura: A leitura fica direta: "Enquanto esta condição for verdadeira, continue processando".

3. Laço do-while:
- Situação Ideal: Validação de Entrada e Menus Interativos.
- Cenário: Quando as instruções no bloco precisam obrigatoriamente executar pelo menos uma vez antes que haja um valor válido para ser testado (ex.: apresentar um menu com opções ao usuário, validar se a nota inserida pelo usuário via scanf é válida).
- Estrutura: Elimina a necessidade de duplicar chamadas de leitura antes e dentro do laço para inicializar a variável de controle.

c) Análise do Trecho *while (condicao);*
Trata-se de um erro de lógica (semântico) e não de compilação.
Sintaticamente, o ponto-e-vírgula ; após o fecha-parênteses é interpretado pelo compilador de C como um comando nulo.
O que ocorre durante a execução se condicao for verdadeira:
1. O programa entra no laço while.
2. Como o corpo do laço é o comando nulo, o processador executa repetidamente essa instrução vazia sem alterar nenhuma variável em memória.
3. Como nenhuma instrução interna é capaz de alterar o valor de condicao para torná-la falsa, o programa entra em um laço infinito travado. Nenhuma linha de código escrita abaixo do while será alcançada.