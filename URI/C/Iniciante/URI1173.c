//URI Online Judge | 1173
//Preenchimento de Vetor I

#include <stdio.h>

int main (){

    int vet[10], n, i;

    scanf ("%d", &n);

    for (i = 0; i <= 9; i++){
        vet[i] = n;
        n = n*2;
        printf ("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
