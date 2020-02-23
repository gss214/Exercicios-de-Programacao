//URI Online Judge | 1179
//Preenchimento de Vetor IV

#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetImpar[5], vetPar[5], i, x, l, m, Nj = 0, Nk = 0, Vi = 0, Vp = 0;
    for (i = 0; i < 15; i++){
        scanf ("%d", &x);

        if (x % 2 == 0){
            vetPar[Vp] = x;
            Vp += 1;
            Nj += 1;
        }else {
            vetImpar[Vi] = x;
            Vi += 1;
            Nk += 1;
        }

        if (Nj == 5){
            int j = 0;
            for (j = 0; j < 5; j ++){
                printf ("par[%d] = %d\n", j, vetPar[j]);
                free (vetPar);
                Nj = 0;
                Vp = 0;
            }
        }

        if (Nk == 5){
            int k = 0;
            for (k = 0; k < 5; k ++){
                printf ("impar[%d] = %d\n", k, vetImpar[k]);
                free (vetImpar);
                Nk = 0;
                Vi = 0;
            }
        }
    }

    for (l = 0; l < Vi; l++){
        printf ("impar[%d] = %d\n", l, vetImpar[l]);
    }

    for (m = 0; m < Vp; m++){
        printf ("par[%d] = %d\n", m, vetPar[m]);
    }

    return 0;
}
