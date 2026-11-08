# 📚 Questão 05

### Respostas:
a) Saída dos printf e Efeito dos Parênteses de Proteção  
   - Saída do 1º printf (SQR(2+3)): 25
   - Saída do 2º printf (DOBRO(2+3)): 8

Explicação: O pré-processador do C realiza uma substituição textual direta antes da compilação:

1. SQR(2+3): É substituído por ((2+3)*(2+3)). Devido aos parênteses de proteção em volta de cada argumento e em volta de toda a expressão, a adição ocorre antes da multiplicação: $(2+3) \times (2+3) = 5 \times 5 = \mathbf{25}$.

2. DOBRO(2+3): É substituído por 2+3*2 (pois a macro foi definida sem parênteses: x*2). Devido à precedência de operadores da linguagem C, a multiplicação é realizada antes da adição: $3 \times 2 = 6$, e depois $2 + 6 = \mathbf{8}$. Para funcionar corretamente, a macro deveria ser definida como #define DOBRO(x) ((x)*2).

b) Sintaxe das Diretivas #define e Convenções
   
   - Por que não termina com ponto e vírgula (;)?
    
        As linhas iniciadas por # são diretivas do pré-processador, e não instruções da linguagem C. Como o pré-processador realiza uma cópia textual direta, se você colocar um ; ao final (por exemplo, #define PI 3.14;), o ; será inserido no meio do código (ex: float r = PI * 2; viraria float r = 3.14; * 2;), gerando um erro de sintaxe na compilação.

- Por que usamos maiúsculas por convenção?
        
    Facilita a leitura e diferencia rapidamente constantes e macros de variáveis e funções comuns no código. Isso alerta o programador sobre efeitos colaterais típicos de substituição textual do pré-processador.


c) Correção da Macro PRN e Diferença entre Macro e Função

- Por que #define PRN (n) printf("%d", n) está incorreto?

    Existe um espaço entre o nome da macro (PRN) e o abre-parênteses (n). O pré-processador interpreta esse espaço como uma separação: ele entende que a macro se chama PRN (sem argumentos) e que seu texto de substituição é (n) printf("%d", n). Ao tentar usá-la como PRN(x), o código resultante será um erro de compilação.

- Forma correta:

    ``` #define PRN(n) printf("%d", n) ```
    
    --> (Sem nenhum espaço entre PRN e o parênteses ().

- Diferenças entre Macro com Argumentos e Função Comum:

| Característica | Macro (`#define`) | Função Comum |
| :--- | :--- | :--- |
| **Execução** | Substituição textual pelo pré-processador antes de compilar | Executada em tempo de execução via instrução de chamada (`call`) |
| **Checagem de Tipos** | Não realiza verificação de tipos nos parâmetros | O compilador valida e converte os tipos dos parâmetros |
| **Efeito Colateral** | Pode avaliar argumentos múltiplas vezes (ex: `SQR(i++)` incrementa `i` duas vezes) | Avalia a expressão do parâmetro uma única vez na passagem de argumento |
| **Desempenho/Overhead** | Sem *overhead* de chamada de função, mas aumenta o tamanho do binário | Tem pequeno *overhead* de empilhamento, mas reutiliza o mesmo bloco de código na memória |