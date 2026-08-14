/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
*
* Terceiro programa
***************************************************************/
/* Prog3.C */

#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main() /* Função main */ 
{ /* início do corpo da função main */
system('cls');
printf("Primeiro programa."); /* Chamada à função printf */

int numero=0; /* Criei uma variável e inicializei com valor 0*/

printf("\nDigite o valor da variavel: "); /* Imprime uma mensagem*/
scanf("%i", &numero); /* Usuario digita uma valor que será atribuido na variavel*/

if (numero > 0){ /* Primeira condicional*/
    printf("%i -> positivo!", numero); /* Imprime uma mensagem */
} else if (numero < 0){ /* Segunda condicional*/
    printf("%i -> negativo!", numero); /* Imprime uma mensagem */
} else { /* Terceira condicional*/
    printf("%i -> zero!", numero); /* Imprime uma mensagem */
}
system("\nPAUSE"); /* Chamada à função system */
return 0;
}/* Fim do corpo da função main */



