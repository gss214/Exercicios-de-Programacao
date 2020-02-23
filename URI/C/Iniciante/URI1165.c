//URI Online Judge | 1165
//Número Primo

#include <stdio.h> 

int main (){

    long long int ehnprimo;
    int i, j, f, ndecasos;

    scanf ("%d", &ndecasos);

    for (i = 1; i <= ndecasos; i++){
        for (j = 2; j <= f/2; j++){
        scanf ("%d", &f);
            if (f % i == 0){
            printf ("%d nao eh primo\n", f);
            }else{
            printf ("%d eh primo\n", f);
            }
        }
    }

    return 0;
}
