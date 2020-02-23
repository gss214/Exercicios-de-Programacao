//URI Online Judge | 1009
//Salário com Bônus

#include <stdio.h>

int main(){
    char nome[50];
    double a,b,c;
    scanf ("%s %lf %lf", nome,&a,&b);
    c = a + (b*0.15);
    printf ("TOTAL = R$ %.2lf\n", c);
    return 0;
}