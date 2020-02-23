//URI Online Judge | 1143
//Quadrado e ao Cubo

#include <stdio.h>

int main (){

    int n, i, j, k, l;
    
    scanf ("%d", &n);

    for (i = 1; i <= n; i++){
        j = i * i;
        k = j * i;
        l = k * i;

        printf ("%d %d %d\n", i, j, k);        
    }

    return  0;
}
