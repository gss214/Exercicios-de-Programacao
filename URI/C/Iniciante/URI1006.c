//URI Online Judge | 1006
//Média 2

#include <stdio.h>

int main (){

    double a,b,c,media=0;
    scanf ("%lf %lf %lf", &a,&b,&c);
    media = (a*2 + b*3 + c*5) / 10;
    printf ("MEDIA = %.1lf\n", media);
    return 0;
}