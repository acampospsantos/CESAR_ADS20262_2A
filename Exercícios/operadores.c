//TREINANDO USO DE OPERADORES
#include <stdio.h>

int main(){
    int contador1=10;
    int contador2=0;
    int contador3;

    contador2 +=2; //Contador2 incrementa +2(2)
    ++contador1; //Contador1 incrementa +1(11)
    contador3 = contador1++; //Contador3 recebe o valor de contador1(11) --> que depois o contador1 recebe incremento +1(12)

    contador2=++contador3; //Contador3 recebe incremento+1(12) --> Contador2 recebe o valor de contador3(12)

    printf("Contador1 = %d\n", contador1);
    printf("Contador2 = %d\n", contador2);
    printf("Contador3 = %d", contador3);
    return 0;
}