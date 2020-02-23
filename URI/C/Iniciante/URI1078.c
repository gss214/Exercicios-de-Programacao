//URI Online Judge | 1078
//Tabuada

#include <stdio.h>

int main (){

    int N, i;
    scanf ("%d", &N);

    for (i = 1; i < 11; i++)
    {
        int x = i * N;
        printf ("%d x %d = %d\n", i, N, x);
    }

    return 0;
}