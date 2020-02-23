//URI Online Judge | 1044
//Múltiplos

#include <stdio.h>

int main (){

    int a, b;
    scanf ("%d %d", &a, &b);

    if (b>a){
        if ((b%a) == 0)
            printf ("Sao Multiplos\n");
        else 
            printf ("Nao sao Multiplos\n");
    }
    else {
        if ((a%b) == 0)
            printf ("Sao Multiplos\n");
        else 
            printf ("Nao sao Multiplos\n");
    }   
    return 0;
}