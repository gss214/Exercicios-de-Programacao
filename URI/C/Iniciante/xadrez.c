#include <stdio.h>

int main (){

    int L, C, corlinha, cor, resultado;

    scanf ("%d %d", &L, &C);

    if (L % 2 == 0){
        corlinha = 1;
    
        if (C % 2 == 0){
            cor = 1;
        }else{
            cor = 0;
        }
    }
    if (L % 2 != 0){
        corlinha = 0;
    
        if (C % 2 == 0){
            cor = 0;
        }else{
            cor = 1;
        }
    }

    printf ("%d\n", cor);

    return 0;
}