//URI Online Judge | 1071
//Soma de Impares Consecutivos I

#include <stdio.h>

int main (){

    int x, y, i, soma = 0;

    scanf ("%d %d", &x, &y);

    if (x == y){
        printf ("0\n");
    }
    else if (x > y){
        for (i = x-1; i > y; i--)
        {
            if (i % 2 != 0){
                soma += i;
            }
        }
        printf ("%d\n", soma);
    }
    else if (y > x){
        for (i = y-1; i > x; i--)
        {
            if (i % 2 != 0){
                soma += i;
            }
        }
        printf ("%d\n", soma);
        
    }

    return 0;
}