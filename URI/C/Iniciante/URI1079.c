//URI Online Judge | 1079
//Médias Ponderadas

#include <stdio.h>

int main (){

    int N, i;
    scanf ("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        double x, y, z;
        scanf ("%lf %lf %lf", &x, &y, &z);
        double media = ((x * 2) + (y * 3) + (z * 5)) / 10;
        printf ("%.1lf\n", media);
    }
    
    return 0;
}