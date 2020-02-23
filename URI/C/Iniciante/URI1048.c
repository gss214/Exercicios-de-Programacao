//URI Online Judge | 1048
//Aumento de Salário

#include <stdio.h>

int main(){

    double a;
    scanf ("%lf", &a);

    if (a <= 400){
        double percentual = (a * 0.15);
        printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", percentual+a, percentual);
    }
    else if (a > 400 && a <= 800){
        double percentual = (a * 0.12);
        printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", percentual+a, percentual);
    }
    else if (a > 800 && a <= 1200){
        double percentual = (a * 0.10);
        printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", percentual+a, percentual);
    }
    else if (a > 1200 && a <= 2000){
        double percentual = (a * 0.07);
        printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", percentual+a, percentual);
    }
    else if (a > 2000){
        double percentual = (a * 0.04);
        printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", percentual+a, percentual);
    }
    return 0;
}