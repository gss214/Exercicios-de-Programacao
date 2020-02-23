//URI Online Judge | 1018
//Cédulas

#include <stdio.h>

int main(){

    int x;
    scanf ("%d", &x);
    int y = x;

    int cem = x / 100;
    x = x % 100;
    int cinquenta = x / 50;
    x = x % 50;
    int vinte = x / 20;
    x = x % 20;
    int dez = x / 10;
    x = x % 10;
    int cinco = x / 5;
    x = x % 5;
    int dois = x / 2;
    x = x % 2;
    int um = x;
    printf ("%d\n%d nota(s) de R$ 100,00\n", y, cem);
    printf ("%d nota(s) de R$ 50,00\n", cinquenta);
    printf ("%d nota(s) de R$ 20,00\n", vinte);
    printf ("%d nota(s) de R$ 10,00\n", dez);
    printf ("%d nota(s) de R$ 5,00\n", cinco);
    printf ("%d nota(s) de R$ 2,00\n", dois);
    printf ("%d nota(s) de R$ 1,00\n", um);
    return 0;
}