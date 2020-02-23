//URI Online Judge | 1080
//Maior e Posição

#include <stdio.h>

int main (){

    int i, temp = -1, maior, pos;

    for (i = 0; i < 100; i++)
    {
        int x;
        scanf ("%d", &x);

        if (x > temp){
            maior = x;
            pos = i+1;
            temp = x;
        }

    }

    printf ("%d\n%d\n", maior, pos);
    

    return 0;
}