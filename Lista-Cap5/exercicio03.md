# 📚 Questão 03

### Código:
```
void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);
```

### Respostas:
a) Classificação dos Protótipos

| Protótipo | Parâmetros de Entrada | Valor de Retorno |
| :--- | :--- | :--- |
| `void exibe_mensagem(char* msg);` | **Possui** (recebe um ponteiro/texto `msg`) | **Não possui** (`void`) |
| `int obter_codigo(void);` | **Não possui** (`void`) | **Possui** (retorna um inteiro `int`) |
| `void limpar_tela(void);` | **Não possui** (`void`) | **Não possui** (`void`) |   

b) Diferença Prática: Função com Retorno vs. Procedimento (void)
- Função com retorno: Calcula e devolve um valor direto para o ponto do código que a chamou. O resultado retornado pode ser atribuído a uma variável, usado em expressões matemáticas ou em condições lógicas.
   - Exemplo de uso adequado: Um cálculo matemático como sqrt(x) ou calcular_media(n1, n2), em que o chamador precisa guardar ou processar o resultado obtido.

- Procedimento (função void): Executa um conjunto de instruções para causar um efeito colateral (como alterar um estado, exibir texto no terminal ou salvar um arquivo), sem devolver nenhum valor ao final da execução.
   - Exemplo de uso adequado: Exibir um menu de opções no console (exibir_menu()) ou resetar configurações do sistema, em que a ação em si é o objetivo principal e nenhum resultado numérico ou textual precisa ser atribuído a uma variável.


c) Validade da Chamada x = limpar_tela();

Não é válida.

Justificativa: A função limpar_tela() é do tipo void, o que significa expressamente que ela não produz nem devolve nenhum valor de retorno.

Tentar atribuir o resultado de uma função void a uma variável (como x) gera um erro de compilação, pois não existe nenhum dado gerado pela função para preencher o espaço de memória da variável x.