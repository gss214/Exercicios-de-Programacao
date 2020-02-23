//URI Online Judge | 1021
//Notas e Moedas

#include <stdio.h>
#include <math.h>

int main (){
    double x;
    scanf ("%lf", &x);
    double cem = x / 100;
    x = fmod(x,100.0);
    double cinq = x / 50;
    x = fmod(x,50.0);
    double vinte = x / 20;
    x = fmod(x,20.0);
    double dez = x / 10;
    x = fmod(x,10.0);
    double cinco = x / 5;
    x = fmod(x,5.0);
    double dois = x / 2;
    x = fmod(x,2.0);
    double m1 = x / 1;
    x = fmod(x,1.0);
    x = x * 100.0;
    printf ("NOTAS:\n");
    printf ("%.0lf nota(s) de R$ 100.00\n", floor (cem));
    printf ("%.0lf nota(s) de R$ 50.00\n", floor(cinq));
    printf ("%.0lf nota(s) de R$ 20.00\n", floor(vinte));
    printf ("%.0lf nota(s) de R$ 10.00\n", floor(dez));
    printf ("%.0lf nota(s) de R$ 5.00\n", floor(cinco));
    printf ("%.0lf nota(s) de R$ 2.00\n", floor(dois));
    printf ("MOEDAS:\n");
    printf ("%.0lf moeda(s) de R$ 1.00\n", floor(m1));
    cinq = x / 50;
    x = fmod(x,50.0);
    vinte = x / 25;
    x = fmod(x,25.0);
    dez = x / 10;
    x = fmod(x,10.0);
    cinco = x / 5;
    x = fmod(x,5.0);
    m1 = x / 1;
    x = fmod(x,1.0);
    printf ("%.0lf moeda(s) de R$ 0.50\n", floor(cinq));
    printf ("%.0lf moeda(s) de R$ 0.25\n", floor(vinte));
    printf ("%.0lf moeda(s) de R$ 0.10\n", floor(dez));
    printf ("%.0lf moeda(s) de R$ 0.05\n", floor(cinco));
    printf ("%.0lf moeda(s) de R$ 0.01\n", floor(m1));

    return 0;
}