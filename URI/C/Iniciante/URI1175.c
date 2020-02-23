//URI Online Judge | 1175
//Troca em Vetor I

#include <stdio.h>

int main(){

    int vet[20], vetb[20], i, j, k = 19;

    for (i = 0; i <= 19; i++){
        int x;
        scanf ("%d", &x);
        vet[i] = x;
    }

    for (j = 0; j <= 19; j++){
        vetb[j] = vet[k];
        printf ("N[%d] = %d\n", j, vetb[j]);
        k -= 1;
    }

    return 0;
}
