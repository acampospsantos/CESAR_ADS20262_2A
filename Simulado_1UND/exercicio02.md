# 📚 Questão 02

### Código:
```
#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade);

Cesar School | Programação Imperativa e Funcional | Página 2

cout << endl;
system("PAUSE");
return 0;
}
```

### Código corrigido:
```
#include <stdio.h>
#include <stdlib.h> // Removido o ';' do final

int main() { // Corrigido 'Main' para 'main' --> Lembrar do case sensitive
    int idade = 20;

    // Adicionadas as aspas duplas na string de formato e \n para quebra de linha
    printf("A idade do aluno eh: %d anos..\n", idade);

    //cout << endl; --> É um comando de quebra de linha e limpar buffer do C++
    
    system("PAUSE");
    return 0;
}
```