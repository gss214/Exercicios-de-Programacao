//URI Online Judge | 2751
//Saída 5

#include <stdio.h>

int main (){

    int a,b;
    double c,d;

    a = 15;
    b = a/2;
    c = 15.456;
    d = c/7;

    printf ("Valores de b:\n");
    printf ("-------------\n");
    printf ("1) b = %d\n", b);
    printf ("2) b =                    %d\n", b);
    printf ("3) b = 0000000000000000000%d\n", b);
    printf ("4) b = %d                   \n", b);
    printf ("5) b = %d%%\n", b);
    printf ("\n");
    printf ("Valores de d:\n");
    printf ("-------------\n");
    printf ("1) d = %lf\n", d);
    printf ("2) d = %.0lf\n", d);
    printf ("3) d = %.1lf\n", d);
    printf ("4) d = %.2lf\n", d);
    printf ("5) d = %.3lf\n", d);
    printf ("6) d =                %.3lf\n", d);
    printf ("7) d = 000000000000000%.3lf\n", d);
    printf ("8) d = %.3lf               \n", d);
    printf ("9) d = %.2lf%%\n", d);

    return 0;
}   
