//URI Online Judge | 1043
//Triângulo

#include <stdio.h>

int main (){

    double a,b,c;
    scanf ("%lf %lf %lf", &a, &b, &c);
    double area = ((a+b) * c) / 2;

    if ((b-c) < a){
        if (a < (b+c))
            printf ("Perimetro = %.1lf\n", (a+b+c));
        else {
            printf ("Area = %.1lf\n", area);
        }
    }
    else if ((a-c) < b){
        if (b < (a+c))
            printf ("Perimetro = %.1lf\n", (a+b+c));
        else {
            printf ("Area = %.1lf\n", area);
        }
    }
    else if ((a-b) < c){
        if (c < (a+b))
            printf ("Perimetro = %.1lf\n", (a+b+c));
        else {
            printf ("Area = %.1lf\n", area);
        }
    }
    return 0;
}