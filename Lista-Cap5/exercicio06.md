# 📚 Questão 06

### Respostas:
a) Diferença entre #include <...> e #include "..."
   - #include <stdio.h> (entre parênteses angulares <>):
Instrui o pré-processador a procurar o arquivo de cabeçalho nos diretórios padrão do sistema (bibliotecas nativas da linguagem C e do compilador). Usado para bibliotecas padrão do C, como <stdio.h>, <stdlib.h> e <math.h>.
   - #include "areas.h" (entre aspas duplas ""):
Instrui o pré-processador a procurar o arquivo primeiramente no diretório local do projeto (onde o arquivo .c atual está salvo). Se não encontrar, ele busca nos diretórios padrão do sistema. Usado para arquivos de cabeçalho definidos pelo próprio programador.

b) Efeito do #undef SOMA e Erro de Sintaxe
   
   - Efeito de #undef SOMA: Cancela e desfaz a definição da macro SOMA. A partir dessa linha no código, a identificação SOMA deixa de existir para o pré-processador. Se o código tentar usar SOMA(x, y) após o #undef, o compilador emitirá um erro de função não declarada.

- Por que #undef SOMA(x,y) está incorreta?
A diretiva #undef exige apenas o nome do identificador da macro, sem a lista de parâmetros. O pré-processador desfaz a macro inteira pelo seu nome puro; incluir parâmetros causa um erro de sintaxe de pré-processamento.


c) Compilação Condicional (#ifdef DEBUG)

- Mensagem impressa: "Modo normal"

- Momento da decisão: A decisão é tomada estritamente durante a etapa de pré-processamento (antes da compilação propriamente dita).

- Por que as diretivas não aparecem no executável final?
    
    O pré-processador avalia as diretivas (#ifdef, #else, #endif) e remove do código-fonte todo o bloco condicional que não satisfaz a condição (neste caso, a linha printf("Modo de depuracao\n"); é completamente apagada antes da compilação). O compilador C só enxerga o printf("Modo normal\n");. Por isso, nem as diretivas iniciadas por # nem os blocos de código descartados chegam a ser convertidos em código de máquina para o executável final.