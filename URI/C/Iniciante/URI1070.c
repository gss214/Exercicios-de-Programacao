//URI Online Judge | 1070
//Seis Números Ímpares

#include <stdio.h> 

int main (){

    int x;

    scanf ("%d", &x);

    if (x % 2 == 0){
        x += 1;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
    }else {
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
        x += 2;
        printf ("%d\n", x);
    }

    return 0;    
}
