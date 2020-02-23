//URI Online Judge | 1174
//Seleçao em Vetor I

#include <stdio.h>

int main (){

    double vet[100];
    int i,j,n=0;

    for (i = 0; i <= 99; i++){
        double x = 10;
        scanf ("%lf", &x);
        vet[i] = x;
    }

    for (j = 0; j <= 99; j++){
        if (vet[j] <= 10){
            printf ("A[%d] = %.1lf\n", j, vet[j]);
        }
    }

    return 0;
}
