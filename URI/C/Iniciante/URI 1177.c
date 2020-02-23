//URI Online Judge | 1177
//Preenchimento de Vetor II

#include <stdio.h>

int main (){

    int vet[1000], t, i, x = 0;

    scanf ("%d", &t);

    for (i = 0; i<1000; i++){
        vet[i] = x; 
        x += 1;
        if (x >= t){
            x = 0;
        }
        printf ("N[%d] = %d\n", i, vet[i]);
    }
 
    return 0;
}
