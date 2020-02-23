//URI Online Judge | 1963
//O Filme

#include <stdio.h>

int main (){
    double a, b, result = 0;

    scanf ("%lf %lf", &a, &b);

    result = b - a;
    result = result / a;
    result = result * 100;
    printf ("%.2lf%%\n", result);
    return 0;

}