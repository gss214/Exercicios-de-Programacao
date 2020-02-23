//URI Online Judge | 1837
//Prefácio

#include <stdio.h>

int main (){
    
    int a, b, B, aux, q, r = 0;

    scanf ("%d %d", &a, &b);

    if (a < 0){
        B = b;
        if (b<0)
            B *= -1;
        
        for (r = 0; r < B; r++)
        {
            aux = a - r;
            if (aux % b == 0)
                break;
        }
        q = aux / b;
    }
    else
    {
        q = a/b;
        r = a%b;
    }
    
    printf ("%d %d\n", q, r);

    return 0;
}