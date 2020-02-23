//URI Online Judge | 1172
//Substituição em Vetor I

#include <stdio.h>

int main(){

    int vet[11], i, j;

    for (i = 0; i < 10; i++){
        int x;
        scanf ("%d", &x);
        if (x == 0 || x < 0){
            x = 1;
        }
        vet[i] = x;        
    }

    for (j = 0; j < 10; j++){
        printf ("X[%d] = %d\n", j, vet[j]);
    }


    return 0;
}
