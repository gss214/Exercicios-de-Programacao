//URI Online Judge | 1073
//Quadrado de Pares

#include <stdio.h>

int main (){

    int N, i;

    scanf ("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0){
            int quad = i * i;
            printf ("%d^2 = %d\n", i, quad);
        }
    }
    

    return 0;
}