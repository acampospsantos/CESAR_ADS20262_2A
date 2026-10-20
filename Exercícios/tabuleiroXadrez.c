#include <stdio.h>

int main(){
    int linha=8, coluna=8;

    for (int i=0; i < linha; i++){
        for (int j=0; j < coluna; j++){
            if( (i + j) % 2 == 0 ){
                printf("⬜");
            } else {
                printf("⬛");
            }

        }
        printf("\n");
    }
    return 0;
}