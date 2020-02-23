//URI Online Judge | 1074
//Par ou Ímpar

#include <stdio.h>

int main (){

    int N, i;

    scanf ("%d", &N);

    for (i = 0; i < N; i++)
    {
        int x;
        scanf ("%d", &x);

        if (x == 0){
            printf ("NULL\n");
        }
        else if (x > 0){
            if (x % 2 == 0){
               printf ("EVEN POSITIVE\n");
            }
            else
            {
                printf ("ODD POSITIVE\n");
            }
        }
        else
        {
            if (x % 2 == 0){
                printf ("EVEN NEGATIVE\n");
            }
            else
            {
                printf ("ODD NEGATIVE\n");
            }
        }
        
    }
    

    return 0;
}