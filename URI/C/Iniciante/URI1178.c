//URI Online Judge | 1178
//Preenchimento de Vetor III

#include <stdio.h>
#include <stdlib.h>

int main (){

    double n, k;
    int i;

    scanf ("%lf", &n);
    for (i = 0; i < 100; i++){
        if (i == 0){
            float x = (float) n;
            printf ("N[%d] = %.4lf\n", i, n);    
        }else {
            k = n / 2;
            printf ("N[%d] = %.4lf\n", i, k);
            n = k;
        }
    }

    return 0;
}
