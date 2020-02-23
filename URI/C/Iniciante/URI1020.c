//URI Online Judge | 1020
//Idade em Dias

#include <stdio.h>

int main (){
    int x;
    scanf ("%d", &x);
    int ano = x / 365;
    x = x % 365;
    int mes = x / 30;
    x = x % 30;
    int dias = x;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
    return 0;
}