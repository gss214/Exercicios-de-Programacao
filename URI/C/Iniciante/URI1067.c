//URI Online Judge | 1067
//Números Ímpares

#include <stdio.h>

int main (){

    int i, n;

    scanf ("%d", &n);

    if (1 <= n && n <= 1000){
        for (i = 1; i <= n; i++){
            if (i % 2 == 0){
            }
            else{
            printf ("%d\n", i);
            }
        }
    }
    
    return 0;
}
