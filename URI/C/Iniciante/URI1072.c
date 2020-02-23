//URI Online Judge | 1072
//Intervalo 2

#include <stdio.h>

int main (){

    int N, i, in = 0, out = 0;;

    scanf ("%d", &N);

    for (i = 0; i < N; i++)
    {
        int x;
        scanf ("%d", &x);

        if (x > 9 && x < 21){
            in++;
        }
        else 
        {
            out++;
        }
        
    }
    printf ("%d in\n%d out\n", in, out);
    

    return 0;
}