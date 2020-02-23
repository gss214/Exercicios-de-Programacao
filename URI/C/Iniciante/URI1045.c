//URI Online Judge | 1045
//Tipos de Triângulos

#include <stdio.h>

int main (){

    double a,b,c, A,B,C;
    scanf ("%lf %lf %lf", &a, &b, &c);

    if (a<=b&&a<=c)
    {
        C = a;
    }
    if (b<=a&&b<=c)
    {
        C = b;
    }
    if (c<=a&&c<=b)
    {
        C = c;
    }
    if (a>=b&&a>=c)
    {
        A = a;
    }
    if (b>=a&&b>=c)
    {
        A = b;
    }
    if (c>=a&&c>+b)
    {
        A = c;
    }
    if (a>=c&&a<=b||a>=b&&a<=c)
    {
        B = a;
    }
    if(b>=c&&b<=a||b>=a&&b<=c)
    {
        B = b;
    }
    if (c>=a&&c<=b||c>=b&&c<=a)
    {
        B = c;
    }
   
    if (A >= (B + C)){
        printf ("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if ((A * A) == ((B*B) + (C*C)))
        printf ("TRIANGULO RETANGULO\n");
    if ((A*A) > ((B*B) + (C*C)))
        printf ("TRIANGULO OBTUSANGULO\n");
    if ((A*A) < ((B*B) + (C*C)))
        printf ("TRIANGULO ACUTANGULO\n");
   
    if (A == B && A == C && B == C)
        printf ("TRIANGULO EQUILATERO\n");
    else if (A == B || B == C || A == C)
        printf ("TRIANGULO ISOSCELES\n");
    
    return 0;
}