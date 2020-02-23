//URI Online Judge | 1038
//Lanche

#include <stdio.h>

int main (){
    int a,b;
    scanf ("%d %d", &a, &b);

    if (a == 1){
        double c = b * 4.00;
        printf ("Total: R$ %.2lf\n", c);
    }
    else if (a == 2){
        double c = b * 4.50;
        printf ("Total: R$ %.2lf\n", c);
    }
    else if (a == 3){
        double c = b * 5.00;
        printf ("Total: R$ %.2lf\n", c);
    }
    else if (a == 4){
        double c = b * 2.00;
        printf ("Total: R$ %.2lf\n", c);
    }
    else if (a == 5){
        double c = b * 1.50;
        printf ("Total: R$ %.2lf\n", c);
    }
    return 0;
}