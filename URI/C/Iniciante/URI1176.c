//URI Online Judge | 1176
//Fibonacci em Vetor

#include <stdio.h>

int fibonacci (int x){
    long long int fib[61], i;
    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i<=60; i++){
       long long int k = i - 1; 
       long long int l = i - 2;
       fib[i] =  fib[k] + fib[l];
    }

    printf ("Fib(%d) = %lld\n", x, fib[x]);
}

int main(){
    int n, i;

    scanf ("%d", &n);

    for (i=0; i<n; i++){
        int x;
        scanf ("%d", &x);
        fibonacci (x);
    }

    return 0;
}
