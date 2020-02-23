//URI Online Judge | 1002
//Área do Círculo

#include <stdio.h>

int main (){

    double a, area = 0, n = 3.14159;
    scanf ("%lf", &a);
    area = (a*a) * n;
    printf ("A=%.4lf\n", area);

    return 0;
}