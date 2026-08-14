/* 
#include <stdio.h> 
#include <stdlib.h>; //Não se deve colocar ; após um chamado de biblioteca
int Main{}
( //Esse conteúdo deve ficar dentro das chaves do main + os parenteses ficam na chamada do main
   printf( Existem %d semanas no ano.,52); //A expressão a ser impressa deve ficar entre aspas duplas + a variável referenciada deve ficar após as aspas
   cout << endl; //Essa expressão é da linguagem C++
   system("PAUSE");
   return 0;
) 
*/


// SOLUÇÃO CORRIGIDA
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Existem %d semanas no ano\n", 52);
    system("PAUSE");
    return 0;
}