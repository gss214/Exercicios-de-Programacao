//URI Online Judge | 1051
//Imposto de Renda

#include <stdio.h>

int main (){
    
    double x;
    scanf ("%lf", &x);

    if (x <= 2000)
        printf ("Isento\n");
    else if (x > 2000 && x <= 3000){
        double aux = ((x-2000) * (0.08));

        printf ("R$ %.2lf\n", aux);
    }
    else if (x > 3000 && x <= 4500){
        double aux = (1000 * 0.08) + ((x - 3000) * (0.18));
        printf ("R$ %.2lf\n", aux);
    }
    else if (x > 4500){
        double aux = (1000 * 0.08) + (1500 * 0.18) + ((x - 4500) *(0.28));
        printf ("R$ %.2lf\n", aux);
    }

    return 0;
}